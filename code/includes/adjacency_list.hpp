#ifndef ADJACENCY_LIST_HPP
#define ADJACENCY_LIST_HPP

#include <iostream>
#include <string>
#include <vector> 

using namespace std;

vector<vector<int>> readCSV(const string& filename, int size);
vector<int> bfs(int start, string filename, int size);
void primMST(string filename);
void addWeights(std::string filename, vector<vector<int>>& adj_mat);
void printAdjMat(vector<vector<int>> adj_mat);
#endif