CXX = g++
CXX_FLAGS = -c -Wall
LD_FLAGS = -L /usr/local/lib -lgtest -lpthread

all: test

test: unittest
	./unittest

unittest: unittest.cpp sol.hpp
	$(CXX) unittest.cpp $(CXX_FLAGS)
	$(CXX) sol.hpp $(CXX_FLAGS)
	$(CXX) *.o -o unittest $(LD_FLAGS)

clean:
	rm -rf unittest *.o
