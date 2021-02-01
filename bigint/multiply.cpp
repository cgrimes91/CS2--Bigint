// Chris Grimes
// CS23001
// add.cpp (test file)
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream file ("data1-2.txt");    // Define stream for input
    if(!file.is_open()) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }
    else{
      std::cout<<"success the file is open"<<std::endl;
    }
    {
      bigint::bigint lhs(0), rhs(0),result(0);
      std::cout<<" left "<<lhs<<" right "<<rhs<<" result "<<result<<std::endl;
      if(!file.eof()){
	file>>lhs;
        std::cout<<"left hand side is "<<lhs<<std::endl;
      }
      if(!file.eof()){
	file>>rhs;
	std::cout<<"right hand side is "<<rhs<<std::endl;
      }
      result= lhs*rhs;
      std::cout<<"the result of the left hand side and the right hand side is "<<result<<std::endl;
    }
    {
      bigint::bigint lhs(0), rhs(0),result(0);
      std::cout<<" left "<<lhs<<" right "<<rhs<<" result "<<result<<std::endl;
      if(!file.eof()){
	file>>lhs;
        std::cout<<"left hand side is "<<lhs<<std::endl;
      }
      if(!file.eof()){
	file>>rhs;
	std::cout<<"right hand side is "<<rhs<<std::endl;
      }
      result= lhs*rhs;
      std::cout<<"the result of the left hand side and the right hand side is "<<result<<std::endl;
    }
    {
      bigint::bigint lhs(0), rhs(0),result(0);
      std::cout<<" left "<<lhs<<" right "<<rhs<<" result "<<result<<std::endl;
      if(!file.eof()){
	file>>lhs;
        std::cout<<"left hand side is "<<lhs<<std::endl;
      }
      if(!file.eof()){
	file>>rhs;
	std::cout<<"right hand side is "<<rhs<<std::endl;
      }
      result= lhs*rhs;
      std::cout<<"the result of the left hand side and the right hand side is "<<result<<std::endl;
    }
    {
      bigint::bigint lhs(0), rhs(0),result(0);
      std::cout<<" left "<<lhs<<" right "<<rhs<<" result "<<result<<std::endl;
      if(!file.eof()){
	file>>lhs;
        std::cout<<"left hand side is "<<lhs<<std::endl;
      }
      if(!file.eof()){
	file>>rhs;
	std::cout<<"right hand side is "<<rhs<<std::endl;
      }
      result= lhs*rhs;
      std::cout<<"the result of the left hand side and the right hand side is "<<result<<std::endl;
    }
     {
      bigint::bigint lhs(0), rhs(0),result(0);
      std::cout<<" left "<<lhs<<" right "<<rhs<<" result "<<result<<std::endl;
      if(!file.eof()){
	file>>lhs;
        std::cout<<"left hand side is "<<lhs<<std::endl;
      }
      if(!file.eof()){
	file>>rhs;
	std::cout<<"right hand side is "<<rhs<<std::endl;
      }
      result= lhs*rhs;
      std::cout<<"the result of the left hand side and the right hand side is "<<result<<std::endl;
     } 
    file.close();
}

