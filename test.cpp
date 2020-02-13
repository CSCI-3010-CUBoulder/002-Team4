#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function

TEST_CASE( "Split function works", "[Split]" ) {
    std::vector<std::string> t1 = Split("Test Test 123", " ");
    std::vector<std::string> a1 = {"Test", "Test", "123"};

    REQUIRE( t1 == a1 );

    std::vector<std::string> t2 = Split("Test Test 123", ",");
    std::vector<std::string> a2 = {"Test Test 123"};

    REQUIRE( t2 == a2 );

}

TEST_CASE( "Sum function works", "[Sum]" ) {

    std::vector<int> v1{2, 8, 11, 0, -2};

    REQUIRE( Sum(v1) == 19 );

    std::vector<int> v2{0};

    REQUIRE( Sum(v2) == 0 );

}

// Each SECTION should test one aspect of that functino
