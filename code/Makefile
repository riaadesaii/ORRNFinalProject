CXX=clang++
INCLUDES=-Iincludes/
CXXFLAGS=-std=c++20 -g -fstandalone-debug -Wall -Wextra -pedantic $(INCLUDES)

exec: bin/exec
tests: bin/tests

bin/exec: ./src/main.cc ./src/adjacency_list.cc ./includes/adjacency_list.hpp
	$(CXX) $(CXXFLAGS) ./src/main.cc ./src/adjacency_list.cc  -o $@

bin/tests: ./tests/tests.cc ./src/adjacency_list.cc ./includes/adjacency_list.hpp
	$(CXX) $(CXXFLAGS) ./tests/tests.cc ./src/adjacency_list.cc -o $@

.DEFAULT_GOAL := exec
.PHONY: clean exec tests

clean:
	rm -rf ./bin/*

############################################
# EXENAME = main
# OBJS = main.o

# CXX = clang++
# CXXFLAGS = -std=c++0x -c -g -O0 -Wall
# LD = clang++
# LDFLAGS = -std=c++0x

# all: $(EXENAME)

# $(EXENAME): $(OBJS)
# 	$(LD) $^ $(LDFLAGS) -o $@

# main.o: main.cpp
# 	$(CXX) $< $(CXXFLAGS)

# adjacency_list.o: adjacency_list.cpp
# 	$(CXX) $< $(CXXFLAGS)

# clean:
# 	-rm -f *.o $(EXENAME)

# tests.o: tests.cpp
# 	$(CXX) $< $(CXXFLAGS)

#####################################
# CXX=clang++
# CXXFLAGS=-std=c++20 -g -fstandalone-debug -O0 -Wall -Wextra -Werror

# exec: bin/exec
# tests: bin/tests

# bin/exec: ./main.cpp ./adjacency_list.cpp
# 	$(CXX) $(CXXFLAGS) $^ -o $@

# bin/tests: ./tests/tests.cpp ./adjacency_list.cpp
# 	$(CXX) $(CXXFLAGS) $^ -o $@

# obj/catch.o: ./tests/catch.cpp
# 	$(CXX) $(CXXFLAGS) -c $^ -o $@

# .DEFAULT_GOAL := exec
# .PHONY: exec tests clean

# clean:
# 	rm -fr bin/* obj/*