#ifndef ADJACENCY_LIST_HPP
#define ADJACENCY_LIST_HPP

#include <iostream>
#include <string>
#include <vector> 
#include <set>
#include <float.h>
#include <math.h>
#include <utility>

using namespace std;

// Creating a shortcut for int, int pair type
typedef pair<int, int> Pair;
 
// Creating a shortcut for pair<int, pair<int, int>> type
typedef pair<double, pair<int, int> > pPair;

// A structure to hold the necessary parameters
struct cell {
    // Row and Column index of its parent
    // Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
    int parent_i, parent_j;
    // f = g + h
    double f, g, h;
};

#define ROW 500
#define COL 500

vector<vector<int>> readCSV(const string& filename, int size);
vector<int> bfs(int start, string filename, int size);
void primMST(string filename, int V, int size);
    bool isValidEdge(int u, int v, vector<bool> inMST);
void printAdjMat(vector<vector<int>> adj_mat);
void aStarSearch(vector<vector<int>> adj_mats, Pair src, Pair dest);
    bool isValid(int row, int col);
    bool isUnBlocked(vector<vector<int>> adj_mat, int row, int col);
    bool isDestination(int row, int col, Pair dest);
    double calculateHValue(int row, int col, Pair dest);
    void tracePath(cell cellDetails[][COL], Pair dest);

#endif