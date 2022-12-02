#include "adjacency_list.hpp"
#include <fstream>
#include <queue>

vector<vector<int>> readCSV(const string& filename, int size) {    
    ifstream edges(filename);
    vector<vector<int>> adjacency_matrix;

    for(int i = 0; i <= size; i++) {
        vector<int> inner;
        for(int j = 0; j <= size; j++) {
            inner.push_back(0);
        }
        adjacency_matrix.push_back(inner);
    }
    

    if (edges.is_open()) {
        cout << "opened" << endl;
        string line;
        while (getline(edges, line)) {
            int i = stoi(line.substr(0,line.find(" ")));
            int j = stoi(line.substr(line.find(" ")));
            adjacency_matrix[i][j] = 1;
            adjacency_matrix[j][i] = 1;
        }
        edges.close();
    }

    return adjacency_matrix;
}


vector<int> bfs(int start, string filename, int size)
{
    vector<vector<int>> adj_matrix = readCSV(filename, size);

    vector<bool> visited(adj_matrix.size(), false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    vector<int> d(adj_matrix.size(), 0);
  
    int val = 0;
    while (!q.empty()) {
        val = q.front();
        q.pop();
  
        for (unsigned i = 0; i < adj_matrix[val].size(); i++) {
            if (adj_matrix[val][i] == 1 && (!visited[i])) {
                q.push(i);
                visited[i] = true;
                d.at(i) = d.at(val) + 1;
                //p[i] = val;
            }
        }
    }

    int count = 0;
    for(unsigned j = 0; j < visited.size(); j++) {
        if(visited[j] == 1) {
            count++;
        }
    }

    return d;
}

bool isValidEdge(int u, int v, vector<bool> inMST)
{
   if (u == v)
       return false;
   if (inMST[u] == false && inMST[v] == false)
        return false;
   else if (inMST[u] == true && inMST[v] == true)
        return false;
   return true;
}
 

void primMST(string filename)
{  
    int V = 349;
    vector<vector<int>> adj_matrix = readCSV(filename, 4038);
    addWeights(filename, adj_matrix);

    //printAdjMat(adj_matrix);
    std::cout << "distance from node 348 to node 4: " << adj_matrix[4][348] << std::endl;
    
    vector<bool> inMST(V, false);
    // Include first vertex in MST
    inMST[0] = true;

    int i;
    int j;

    // Keep adding edges while number of included edges does not become V-1.

    int edge_count = 0, mincost = 0;
    while (edge_count < V - 1) {
        // Find minimum weight valid edge.  
        int min = INT_MAX, a = -1, b = -1;
        for (i = 0; i < V; i++) {
            for (j = 0; j < V; j++) {               
                if (adj_matrix[i][j] < min) {
                    if (isValidEdge(i, j, inMST)) {
                        min = adj_matrix[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        if (a != -1 && b != -1) {
            //printf("Edge %d:(%d, %d) cost: %d \n", edge_count++, a, b, min);
            edge_count++;
            mincost = mincost + min;
            inMST[b] = inMST[a] = true;
        }
    }

    printf("\n Minimum cost= %d \n", mincost);
}

/**
 * 
 * give our adjacency graph weights
 * 
 * then do prim's algorithm on the weight matrix
 * 
*/

void addWeights(std::string filename, vector<vector<int>>& adj_mat) {
    vector<int> distances = bfs(0,filename, adj_mat.size());
    for (int i = 1 ; i <= adj_mat.size(); i++) {
        for (int j = 0; j < i; j++) {
            adj_mat[i][j] = adj_mat[j][i] = distances[i] + distances[j];
        }
    }
}

void printAdjMat(vector<vector<int>> adj_mat) {
    cout << "{";
    for (unsigned i = 0; i < adj_mat.size(); i++) {
        cout << "{";
        for (unsigned j = 0; j < adj_mat.size(); j++) {
            std::cout << adj_mat.at(i).at(j) << ",";
        }
        cout << "},";
        std::cout << std::endl;
    }
    cout << "}";
}