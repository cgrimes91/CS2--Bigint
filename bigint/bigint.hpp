/**
 * Chris Grimes
 * bigint.hpp
 * CS 23001
 */

#include<iostream>

#ifndef BIGINT_HPP
#define BIGINT_HPP

class bigint{

public:

  bigint(); // default ctor assings 0's to all index's
  bigint(int); // ctor that takes an integer and assigns it to a bigint
  bigint(const char[]); // ctor that takes a char array and assigns it to a bigint
  void debugPrint(std:: ostream&) const; // function prints array seperated by |'s
  bool operator ==(bigint); // directly compares two bigint's returns [T/F]
  friend std::ostream& operator <<(std::ostream&, bigint); // takes a bigint and an ostream as inputs and writes bigint to ostream
  bigint operator +(const bigint&) const; // adds two bigint's together
  friend std::istream& operator >>(std::istream&, bigint&); // takes a user input until ';' and assigns to a bigint
  int operator[](int); // returns the integer at the 10^(parameter) place
  bigint timesDigit(int) const; // multiplies a bigint by an integer 0-9
  bigint times10(int) const; // multiplies a bigint by 10^(parameter)
  bigint operator *(const bigint&) const; // multiplies two bigint's together

private:

  static const int CAPACITY=200;
  int array[CAPACITY];

};

#endif
