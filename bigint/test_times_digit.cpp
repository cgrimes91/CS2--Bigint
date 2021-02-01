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
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);  //Will FAIL, fix and add test cases.
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 6);  //Will FAIL, fix and add test cases.
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint bi(9);

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == 81);  //Will FAIL, fix and add test cases.
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint bi(99);

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == 891);  //Will FAIL, fix and add test cases.
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);  //Will FAIL, fix and add test cases.
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint bi(999);

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == 8991);  //Will FAIL, fix and add test cases.
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint bi(9999);

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == 89991);  //Will FAIL, fix and add test cases.
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint bi(99999);

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == 899991);  //Will FAIL, fix and add test cases.
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint bi(999999);

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "8999991");
    }

    //Add test cases as needed.
    
    std::cout << "Done testing bigint * digit" << std::endl;
}
