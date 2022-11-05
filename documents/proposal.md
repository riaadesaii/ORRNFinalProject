## Leading Question 
What can we discover about the interconnectedness of humans using a dataset that describes Facebook users and their networks?

Our project will investigate the level of connectivity between two individuals using data from research on Facebook users and their networks. One part of our project will test “the theory that any person on the planet can be connected to any other person on the planet through a chain of acquaintances that has no more than five intermediaries” (Kirvan, WhatIs.com). This is called the theory of 6 Degrees of Separation and it emphasizes the fact that every person in this seemingly large world is actually less of a stranger to others than expected. We can generalize this thought by contemplating its effects on disease transmission, spread of social movements, and globalization in general. Many claim that social media, especially Facebook, has reduced the degrees of separation to 3.5. Our project will hopefully produce similar findings using A* Search and shortest path algorithms. Once we create our graph, we will implement A* Search to locate our target Facebook user and navigate through our structure to uncover the shortest path to another user. Another part of our project will further describe the relationships between Facebook users. How much of an impact does one person have over an entire social network? Is it possible to quantify “popularity” using our dataset? These questions will be answered with different algorithms such as PageRank. PageRank is perfect to accomplish these goals because the algorithm utilizes the links between entities to describe their importance. As a whole, our project will take the names of two individuals as our input, parse through our data structure built from the dataset we have chosen, and deliver a thorough description of the individual’s networks and how closely related they are.

## Dataset Acquisition

We decided to look at the Stanford Large Network Dataset Collection, and we chose a dataset produced by J. McAuley and J. Leskovec who answered similar questions to our own during their research. Although they provide data for Google+ and Twitter along with Facebook, we are choosing to only use the Facebook data to make our problem size more approachable. Their goal was to automate the creation of friendship circles of Facebook users based on similar features (political affiliation, family ties, education). Observing the overlap of these circles would provide information on the strength of the connections between people. The data was produced using mathematical and statistical algorithms regarding likelihood functions and gradient ascent, so we gained an overarching understanding of these processes. The input to their equations was an ego-network G that consisted of a user’s friends. Their math predicted a set of circles that formed within G because of shared characteristics between the users. They investigated two properties: connections between the user’s friends and connections between the user, themself, and their friends.

## Data Format
As explained above, the source of this dataset is the research of two scientists J. McAuley and J. Leskovec. Considering the Facebook, Google+, and Twitter subsets all together, the dataset is quite large. The size of the dataset can be represented by the number of users per social media network. We decided to only use the Facebook data which consists of 4,039 users, but the researchers also had 106,674 users of Google+ and 81,362 users from Twitter. We chose to use the Facebook data not only because the size seemed most manageable considering our data analysis skill levels, but also because we were most familiar with how Facebook worked and it seemed that the research focused most on Facebook. For each user, the researchers also provide data of 26 qualitative categories including hometowns, birthdays, political affiliations, etc. The actual dataset comes in multiple text files labeled “circles”, “edges”, “egofeat”, “feat”, and “featnames”. There are 9 sets of these file packages, and we have decided to use just the first one. One package represents the data associated with one user and their friend circles. Most of the data is in numerical form, some are even in binary, so we will decode what each number means using the helper files. For example, the “feat” files are in binary, but the “featnames” file helped us understand that each binary value represents whether or not the user possesses the feature in question.

## Data Correction
The main input data that we will parse are the edges and circles files because they contribute to the construction of our graph. Except for the first column of the circles file, these two files are all in numerical format with no decimals or irrational values. In order to maintain proper data and weed out irregular data, we can set a range for each value type. We believe that each user is represented by a single number ranging from 1 through about 350. If we encounter any value outside of this range, we will mark it as irregular and manually observe if it should be included in our graph or not. Additionally, when looking at the feature files, since there are about 223 features that are being observed, we can weed out any additional data that exceeds the maximum quantity of 223. We will set alerts for ourselves if our parsing encounters any missing entries. A missing entry in this dataset is primarily characterized by missing feature data for a user. Although it is unlikely that there will be missing entries, we will tackle the issue if it comes our way. The dataset is formatted in an organized fashion and recognizable pattern which makes parsing seem more approachable.


## Data Storage
We will be constructing an unweighted undirected graph out of the dataset. We will be implementing an adjacency list to keep track of the data and perform the operations in our later methods.

## Algorithm 
We will be using the Breadth-First Search (BFS) algorithm, the A* Search algorithm, and Prim’s Algorithm for Minimum Spanning Trees.The BFS algorithm will be used to assist us in traversing our graphical representation of the data set, in order to find a “target” node, or Facebook user, to unlock information about.  The time complexity of the BFS algorithm is O(n). Using BFS, we will find a target user in a find() function, and use this function in the implementation of the following algorithms in order to first obtain a starting node to return specific information on.

We will use the A* search algorithm in order to test our leading question, that given two users, there are less than six degrees of separation between them. This can be done by finding the shortest path between two passed users, which the A* algorithm assists with. This algorithm has an O(b^d) space complexity, where b is the branching factor. Prim’s algorithm will be used to identify how big one user’s “network” is, by identifying the minimum spanning tree associated with that user’s node in the graph. When a starting user, or starting node, is passed, a string representation of the minimum spanning tree will be returned, in the form of a list of all of the users in the passed user’s network, and the size of the network (number of nodes in the minimum spanning tree). Prim’s algorithm has a time complexity of O(V^2) with v being the number of vertices in the graph.




## Timeline
10/31 through 12/8

-Project proposal

-Team contract

-Data acquisition 

-Interpreting data

-Creating graph

-Implementing BFS

-Implementing Prim’s implementation of Minimum Spanning Tree

-Implementing A* Search

-Creating report

-Make the video


Week 1: 10/31 - 11/04 → Project proposal, Team contract, Data acquisition

Week 2: 11/07-11/11 → Interpretting the data, Creating a graph, Implement BFS

Week 3: 11/14-11/18 → Implement Prim’s MST and start Implementing A* 

Week 4: 11/21-11/25 → Finish implementing A*, start creating report 

Week 5: 11/28-12/4 → Finish report, and make video
