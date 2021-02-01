// bigint Test Program
//
// Tests:  subscript, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);
        assert(digit == 4);
    }
    {
      // Setup
      bigint a(19);

      // Test
      int digit= a[1];

      // Verify
      assert(a == 19);
      assert(digit == 1);
    }
    {
      // Setup
      bigint b(299793);

      // Test
      int digit= b[2];

      //Verify
      assert(b == 299793);
      assert(digit == 7);
    }
    {
      // Setup
      bigint c(299793);

      // Test
      int digit= c[3];

      // Verify
      assert(c == 299793);
      assert( digit == 9);
    }
    {
      // Setup
      bigint d(299793);

      // Test
      int digit = d[4];

      // Verify
      assert(d == 299793);
      assert( digit == 9);
    }
    {
      // Setup
      bigint e(299793);

      // Test
      int digit= e[5];

      // Verify
      assert( e == 299793);
      assert(digit == 2);
    }
    //Add test cases!!

    std::cout << "Done testing subscript." << std::endl;
}

