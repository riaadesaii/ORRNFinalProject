# CS225 Final Project: ORRN Final Project

<p align="center">
  <a href="#presentation-video">Presentation Video</a> •
  <a href="#data">Data</a> •
  <a href="#repo-structure">Repo Structure</a> •
  <a href="#running-instructions">Running Instructions</a> •
  <a href="#team">Team</a>
</p>


## [Presentation Video]()

## Data

We are using the [Stanford Large Network Dataset Collection](http://snap.stanford.edu/data/) data and focusing on the following file:

- [Facebook Circles](http://snap.stanford.edu/data/ego-Facebook.html)

## Repo Structure

- All major files that contain our functions and classes are in [`/code`](https://github.com/riaadesaii/ORRNFinalProject/tree/main/code).

- Datasets are stored as txt files in [`/data`](https://github.com/riaadesaii/ORRNFinalProject/tree/main/data).

- Tests are in [`/code/tests`](https://github.com/riaadesaii/ORRNFinalProject/tree/main/code/tests).

- Our development log, contract, and proposal are in [`/documents`](https://github.com/riaadesaii/ORRNFinalProject/tree/main/documents). 

- Our final report and presentation link are in [`/final`](https://github.com/riaadesaii/ORRNFinalProject/tree/main/final)

## Running Instructions

Make sure you are running the program in [Docker](https://www.docker.com/). If not, follow [This Guide](https://courses.engr.illinois.edu/cs225/sp2022/resources/own-machine/) to get started.

### Executable

To use our Complete California Experience program, run `make` then `./main` in the root directory. Follow the instructions of our program and you are good to go!

We call all the functions in `main.cpp` for you (through a fleshed-out `utils.cpp` that will print clear instructions on what your user input should be). The required inputs for each of the functionality are as follows:

1. GPS (Dijkstra's): 
   - Input: starting node number and ending node number (both should be integer between 0 and 21047)
   - Output: the shortest path (nodes it passes through) and the distance of the shortest path (in km)
   - Image Output: `californiaShortestPath.png` that outlines the shortest path on the California map constructed from our nodes
2. Sporadic Tour (Welsh-Powell Colorability):
   - Input: an integer within the given bounds (currently it's 1-3)
   - Output: the node numbers, based on our colorability algorithm, that correspond to your given input and represent places you should visit
3. Nearest Attraction (KD Tree Nearest Neighbors):
   - Input: longitude (-124.389343 ~ -114.294258) and latitude (32.541302 ~ 42.017231)
   - Output: a latitude - longitude pair that indicates a California attraction that is closest to your current location
4. Lazy/Cluster Travel (BFS): 
   - Input: starting node number (integer between 0 and 21047)
   - Output: a traversal path within your current cluster

In addition to the above overarching functions that are called in `main.cpp`, we also have clear input and output definitions in the comments for each small functions, so you can always refer to those.

### Tests

To run the test cases, run `make test` then `./test` in the main directory.

We constructed many small to medium sized datasets in [`/tests`](https://github.com/riaadesaii/ORRNFinalProject/tree/main/code/tests) directory, which are used as test cases to evaluate if the output of our algorithms are as expected. Our tests focus on testing the functionality of the graph construction as an adjacency matrix, Prim's Algorithm, BFS Traversal, and A* algorithm.

## Team 

- Neeya Devanagondi (`neeyati2`)
- Rucha Nandha (`rnandha2`)
- Ojaswee Choudhary (`ojaswee2`)
- Ria Desai (`rndesai2`)


