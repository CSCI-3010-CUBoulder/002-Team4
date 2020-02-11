CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: main

clean:
	rm UtilityFunctions.o test

test: test.cpp UtilityFunctions.o
	$(CXX) $(CXXFLAGS) test.cpp UtilityFunctions.o -o test

main: UtilityFunctions.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunctions.o -o main

Player.o: UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp
