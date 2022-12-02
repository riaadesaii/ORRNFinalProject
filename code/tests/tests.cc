#ifndef CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN
#endif

#include "catch.hpp"
#include "adjacency_list.hpp"

#include <iostream> 

using namespace std;

TEST_CASE("Loading Matrix") {
    SECTION("small matrix", "[functions]") {
        vector<vector<int>> result = readCSV("/Users/owner/Documents/cs225/225-project/ORRNFinalProject/code/tests/small_data.csv", 3);
        vector<vector<int>> answer = {{0,1,1,0}, {1,0,1,0}, {1,1,0,1}, {0,0,1,0}};
        REQUIRE(result == answer);
    }
    SECTION("large matrix", "[functions]") {
        vector<vector<int>> result = readCSV("/Users/owner/Documents/cs225/225-project/ORRNFinalProject/code/tests/large_data.csv", 14);
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
{0,0,0,1,0,0,0,0,0,0,0,0,1,0,0}
};
        REQUIRE(result == answer);
    }
}