# CS225 Final Project: ORRN Final Project

<p align="center">
  <a href="#presentation-video">Presentation Video</a> •
  <a href="#data">Data</a> •
  <a href="#repo-structure">Repo Structure</a> •
  <a href="#running-instructions">Running Instructions</a> •
  <a href="#team">Team</a>
</p>


## [Presentation Video](https://youtu.be/5SEYeWdOb2Q)

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

To use our program, run `make` then `./main` in the root directory. Follow the instructions of our program and you are all set!

We call all the functions in `main.cpp` for you, with clear prompts on what inputs to use. The required inputs for each of the functionality are as follows:

1. BFS: 
   - Input: Starting user ID (between 0 and 4038)
   - Output: The distance from this user's ID to the "root" user ID in the data set
2. Prim's MST:
   - Input: Starting user ID (between 0 and 4038)
   - Output: The spanning tree of the graph with this starting node (this user's "friend circle")!
3. A* Search:
   - Input: Two user ID's (between 0 and 4038)
   - Output: The "path" between these two users- how many degrees they are separated by!

### Tests

To run the test cases, run `make tests` then `./tests` in the main directory.

We constructed many small to medium sized datasets in [`/tests`](https://github.com/riaadesaii/ORRNFinalProject/tree/main/code/tests) directory, which are used as test cases to evaluate if the output of our algorithms are as expected. Our tests focus on testing the functionality of the graph construction as an adjacency matrix, Prim's Algorithm, BFS Traversal, and A* algorithm.

## Team 

- Neeya Devanagondi (`neeyati2`)
- Rucha Nandha (`rnandha2`)
- Ojaswee Choudhary (`ojaswee2`)
- Ria Desai (`rndesai2`)


