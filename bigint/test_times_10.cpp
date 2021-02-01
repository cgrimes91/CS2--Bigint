// bigint Test Program
//
// Tests:  times_10, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(0);

        // Verify
        assert(bi == 3);  //Wrong. Will FAIL, fix and add tests cases
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(1);

        // Verify
        assert(bi == 30);  //Wrong. Will FAIL, fix and add tests cases
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(2);

        // Verify
        assert(bi == 300);  //Wrong. Will FAIL, fix and add tests cases
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(3);

        // Verify
        assert(bi == 3000);  //Wrong. Will FAIL, fix and add tests cases
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(4);

        // Verify
        assert(bi == 30000);  //Wrong. Will FAIL, fix and add tests cases
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(5);

        // Verify
        assert(bi == 300000);  //Wrong. Will FAIL, fix and add tests cases
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(6);

        // Verify
        assert(bi == "3000000");  //Wrong. Will FAIL, fix and add tests cases
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(7);

        // Verify
        assert(bi == "30000000");  //Wrong. Will FAIL, fix and add tests cases
    }
    
    //Add test cases as needed.

    std::cout << "Done testing times_10" << std::endl;
}

