CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: main

clean:
	rm UtilityFunctions.o test

main: UtilityFunctions.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunctions.o -o test

Player.o: UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp
