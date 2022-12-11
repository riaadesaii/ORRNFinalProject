#include <cstdio>
#include <vector>
#include "adjacency_list.hpp"

using namespace std;

int main() {

    string filename = "/Users/owner/Documents/cs225/225-project/ORRNFinalProject/code/facebook_combined (1).csv";

    vector<vector<int>> data = readCSV(filename, 4038);

    cout << "Welcome! Please input information when prompted to find out about Facebook users in our dataset!" << endl;
    
    cout << endl;

    cout << "Let's start by demonstrating the function of BFS (Breadth-First Search). Input any userID (any number between 0 and 4038) to return the distance from this user to the main user in the dataset!" << endl;
    int user_id;
    cin >> user_id;
    cout << "User " << user_id << " is "  << bfs(user_id,filename,4038)[user_id] + 1 << " connections away from the main user." << endl;

    cout << endl;
    
    cout << "Next, we will demonstrate the function of Prim's MST Agorithm. Input any userID (any number between 0 and 4038) to return that user's friend circle!" << endl;
    int user_id2;
    cin >> user_id2;
    primMST(filename,user_id2,4038);

    cout << endl;
    
    cout << "Last, we will demonstrate the function of the A* Search algorithm. Input any two userIDs between 0 and 4038 to return the chain of facebook friends that links them together!" << endl;
    cout << "Enter the first user ID: ";
    int user_id3;
    cin >> user_id3;
    Pair src = make_pair(user_id3, 0);
    
    cout << "Enter the second user ID: ";
    int user_id4;
    cin >> user_id4;
    Pair dest = make_pair(user_id4, 0);
    aStarSearch(data,src,dest);

    cout << endl;

    cout << "The demonstration is complete. Thank you for using this program to discover information about Facebook users." << endl;

    cout << endl;
    
    cout << "Programmers: Oju C., Ria D., Rucha N., and Neeya D." << endl;
    
    cout << "Dataset Source: http://snap.stanford.edu/data/ego-Facebook.html" << endl;

    return 0;
}