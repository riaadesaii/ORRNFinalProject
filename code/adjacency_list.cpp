#include "adjacency_list.h"
#include <fstream>

vector<vector<int>> readCSV(const string& filename) {    
    ifstream wordsFile(filename);
    string nums;
    vector<vector<int>> adjacency_matrix;

    for(int i = 0; i < 4038; i++) {
        vector<int> inner;
        for(int j = 0; j < 4038; j++) {
            inner.push_back(0);
        }
        adjacency_matrix.push_back(inner);
    }
    
    unsigned pos = 0;
    if (wordsFile.is_open()) {
        while (getline(wordsFile, nums)) {
           while ((pos = nums.find(' ')) != string::npos) {
            cout << "DID IT FIND THE POSIEU3iugbwe" << endl;
            adjacency_matrix.at(stoi(nums.substr(0, pos))).at(stoi(nums.substr(pos+1))) = 1;
            cout << stoi(nums.substr(0, pos)) << endl;
            }
        }
    }
    return adjacency_matrix;
}


void bfs(int start, string filename)
{
    adj_matrix = readCSV(filename);

    vector<bool> visited(adj_matrix.size(), false);
    vector<int> q;

    q.push_back(start);
    visited[start] = true;
  
    int val = 0;
    while (!q.empty()) {
        val = q[0];
          q.erase(q.begin());
  
        for (unsigned i = 0; i < adj_matrix[val].size(); i++) {
            if (adj_matrix[val][i] == 1 && (!visited[i])) {
                q.push_back(i);
                  visited[i] = true;
            }
        }
    }
}