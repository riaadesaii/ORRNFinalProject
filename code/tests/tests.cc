#ifndef CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN
#endif

#include "catch.hpp"
#include "adjacency_list.hpp"

#include <iostream> 

using namespace std;

TEST_CASE("Loading Matrix") {
    SECTION("small matrix", "[functions]") {
        vector<vector<int>> result = readCSV("/Users/neeyad/Desktop/225-project/code/tests/small_data.csv", 3);
        vector<vector<int>> answer = {{0,1,1,0}, {1,0,1,0}, {1,1,0,1}, {0,0,1,0}};
        REQUIRE(result == answer);
    }
    SECTION("large matrix", "[functions]") {
        vector<vector<int>> result = readCSV("/Users/neeyad/Desktop/225-project/code/tests/large_data.csv", 14);
        vector<vector<int>> answer = {{0,0,1,0,0,0,1,0,1,0,0,0,0,0,0},
                                    {0,0,0,1,0,1,0,1,0,1,0,1,0,0,0},
                                    {1,0,0,0,1,0,1,0,0,0,0,0,0,0,0},
                                    {0,1,0,0,0,0,1,0,0,1,0,0,1,0,1},
                                    {0,0,1,0,0,0,0,0,1,0,1,0,0,0,0},
                                    {0,1,0,0,0,0,1,0,0,1,0,0,0,0,0},
                                    {1,0,1,1,0,1,0,0,0,0,0,1,0,1,0},
                                    {0,1,0,0,0,0,0,0,0,1,1,1,0,0,0},
                                    {1,0,0,0,1,0,0,0,0,0,0,0,0,1,0},
                                    {0,1,0,1,0,1,0,1,0,0,1,1,0,0,0},
                                    {0,0,0,0,1,0,0,1,0,1,0,1,0,1,0},
                                    {0,1,0,0,0,0,1,1,0,1,1,0,0,1,0},
                                    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,1},
                                    {0,0,0,0,0,0,1,0,1,0,1,1,0,0,0},
                                    {0,0,0,1,0,0,0,0,0,0,0,0,1,0,0}};
        REQUIRE(result == answer);
    }
}

TEST_CASE("bfs") {
    SECTION("small matrix", "[functions]") {
        vector<int> bfs_output = bfs(0, "/Users/neeyad/Desktop/225-project/code/tests/small_data.csv", 3);
        cout << "small dataset" << ": ";
        for(unsigned i = 0; i < bfs_output.size(); i++) {
            cout << bfs_output[i] << ' ';
        }
        cout << '\n' ;
        REQUIRE(bfs_output.size() == 4);
    }
    SECTION("large matrix", "[functions]") {
        vector<int> bfs_output = bfs(0, "/Users/neeyad/Desktop/225-project/code/tests/large_data.csv", 14);
        cout << "large dataset" << ": ";
        for(unsigned i = 0; i < bfs_output.size(); i++) {
            cout << bfs_output[i] << ' ';
        }
        cout <<  ' ' << endl;
        REQUIRE(bfs_output.size() == 15);
    }
    SECTION("facebook dataset", "[functions]") {
        vector<int> bfs_output = bfs(0, "/Users/neeyad/Desktop/225-project/code/facebook_combined (1).csv", 4038);
        REQUIRE(bfs_output.size() == 4039);
    }
}

TEST_CASE("isValidEdge Prim's Helper Function") {
    SECTION("invalid edge (would create a cycle)", "[functions]") {
        vector<bool> inMST = {1,0,0,1,1,0,0,0};
        bool result = isValidEdge(0,4, inMST);
        REQUIRE(result == false);
    }
    SECTION("valid edge (would create a cycle)", "[functions]") {
        vector<bool> inMST = {1,0,0,1,1,0,0,0};
        bool result = isValidEdge(0,2, inMST);
        REQUIRE(result == true);
    }
}

TEST_CASE("A* algorithm") {
    SECTION("small matrix", "[functions]") {
        vector<bool> inMST = {1,0,0,1,1,0,0,0};
        bool result = isValidEdge(0,4, inMST);
        REQUIRE(result == false);
    }
    SECTION("large matrix", "[functions]") {
        vector<bool> inMST = {1,0,0,1,1,0,0,0};
        bool result = isValidEdge(0,2, inMST);
        REQUIRE(result == true);
    }
}
