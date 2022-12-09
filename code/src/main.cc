#include <cstdio>
#include <vector>
#include "adjacency_list.hpp"
#incude 

using namespace std;

int main() {

    cout << "Welcome! Input information when prompted to find out about Facebook users in our dataset!" << endl;
    cout << "Let's start by demonstrating the function of BFS (Breadth-First Search). Input any userID (any number between 0 and 4038) to return a list of this user's relationship to any other user in the dataset!" << endl;
    int user_id;
    cin >> user_id;
    cout << bfs() << endl;
}