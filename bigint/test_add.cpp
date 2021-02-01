// bigint Test Program
//
// Tests:  int constructor, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }
    {
      //------------------------------------------------------
      // Setup fixtures
      bigint left(9);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;
      
      // Verify
      assert(left   ==  9);
      assert(right  ==  1);
      assert(result == 10);
    }
    {
      //----------------------------------------------------
      // Setup fixtures
      bigint left(99);
      bigint right(99);
      bigint result;
      
      // Test
      result = left + right;
      
      // Verify
      assert(left   ==  99);
      assert(right  ==  99);
      assert(result == 198);
    }
    {
      //----------------------------------------------------
      // Setup fixtures
      bigint left(999);
      bigint right(999);
      bigint result;

      // Test
      result= left + right;

      // Verify
      assert(left == 999);
      assert(right == 999);
      assert(result == 1998);
    }
    {
      //---------------------------------------------------
      // Setup fixtures
      bigint left("2999999");
      bigint right("1");
      bigint result;

      // Test
      result= left + right;
      
      // Verify
      assert(left == "2999999");
      assert(right == "1");
      assert(result == "3000000");
    }
    {
      //---------------------------------------------------
      // Setup fixtures
      bigint left("299999999999999999999");
      bigint right("700000000000000000001");
      bigint result;

      // Test
      result= left + right;
      
      // Verify
      assert(left == "299999999999999999999");
      assert(right == "700000000000000000001");
      assert(result == "1000000000000000000000");
    }
    {
      //---------------------------------------------------
      // Setup fixtures
      bigint left(2147483647);
      bigint right(1);
      bigint result;

      // Test
      result= left + right;

      // Verify
      assert(left == 2147483647);
      assert(right == 1);
      assert(result == "2147483648");
    }
    {
      //---------------------------------------------------
      // Setup fixtures
      bigint left("9223372036854775807");
      bigint right(1);
      bigint result;

      // Test
      result= left + right;

      // Verify
      assert(left == "9223372036854775807");
      assert(right == 1);
      assert( result == "9223372036854775808");
    }
    std::cout << "Done with testing addition." << std::endl;
}
