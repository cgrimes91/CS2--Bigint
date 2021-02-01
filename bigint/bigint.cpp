/**
* Chris Grimes
* Big Int.cpp
* CS 23001
*/

#include<iostream>
#include"bigint.hpp"

bigint::bigint(){ // default ctor assigns 0 to all index's
  for(int i=0; i<CAPACITY; ++i)
    array[i]=0;
}

bigint::bigint(int x){ // ctor takes a integer and assigns it to the corresponding index(s)
  if(x>= 10)
    array[CAPACITY-1]= x%10;
  else
    array[CAPACITY-1]=x;
  for(int i=CAPACITY-2; i>=0; --i){
    x=x/10;
    array[i]= x%10;
  }
}

bigint::bigint(const char a[]){ // ctor that takes a c-string literal and assigns it to the corresponding index(s)
  for(int i=0; i<CAPACITY; ++i)
    array[i]=0;
  int p=0,i=0;
  int j= CAPACITY-1;
  while(a[i]!=0){ // counts the number of indexs until a 0 is found
    ++p;
    ++i;
 }
  for(p=p-1; p>=0; --p){ // fills array with chars
    int x=a[p]-'0';
    array[j]=x;
    --j;
  }
}

void bigint::debugPrint(std:: ostream& out) const{ // prints out the index's of the bigint seperated by |'s (ommits 0's)
  bool notLead0= false; 
 for(int i=0; i<CAPACITY; ++i){
   if(array[i]>0||notLead0== true){
     out<<array[i]<<'|';
      notLead0= true;
   }
 }
}

std::ostream& operator <<(std::ostream& out, bigint a){ // takes a bigint and an ostream and outputs the bigint to said ostream
  bool notLead0= false;
  for(int i=0; i<bigint::CAPACITY; ++i){
    if(a.array[i]>0||notLead0 == true){
      out<< a.array[i];
      notLead0= true;
    }
  }
  if(notLead0== false)
    std::cout<<a.array[bigint::CAPACITY-1];
 return out;
}

bool bigint:: operator ==(bigint x){ // directly compares two bigint's
  int  j=1;
  for(int i=0; i<CAPACITY; ++i){
    if(array[i]!= x.array[i])
       j=0;
  }
  return j;
}

bigint bigint:: operator +( const bigint& x) const{ // takes two bigint's and adds them together, returns the sum
  int tmp=0;
  bigint sum(0);
  for(int i=CAPACITY-1; i>=0; --i ){
    tmp = array[i]+x.array[i];
    if(tmp>9){ // carrys over ints > 10
      sum.array[i]=sum.array[i]+(tmp%10);
      if(i>0)
        sum.array[i-1]=sum.array[i-1]+(tmp/10);
    }
    else if(tmp<=9){
      sum.array[i]=sum.array[i]+tmp;
      if(sum.array[i]>9){ // carrys over ints > 10 if tmp is smaller than 10
        if(i>0){
          sum.array[i-1]= sum.array[i-1]+(sum.array[i]/10);
          sum.array[i]= sum.array[i]%10;
        }
        else if(!(i>0))
          sum.array[i]= sum.array[i]%10;
      }
    }
  }
  return sum;
}

int bigint:: operator[](int x){ // takes an integer and returns the 10^(integer position)
  return array[CAPACITY-(x+1)];
}

std::istream& operator>>(std::istream& in, bigint& x){ // takes inputs until ';' is reached and assing to a bigint
  char a, b[bigint::CAPACITY]; // creates chars needed to fill bigint
  for(int j =0; j< bigint::CAPACITY; ++j) // fill char array with char 0's
    b[j]= '0'; 
  in>>a;
  while(a != ';'){
    if(a != ' '){
      for(int i=0;i<bigint::CAPACITY; ++i){
	if(i< bigint::CAPACITY-2) // if index is not the one's place, moves char left one position     
	  b[i]= b[i+1];
	else if(i== bigint::CAPACITY -2) // if index is ones place assigns the char to it     
	  b[i]= a;
	else if(i== bigint::CAPACITY-1)
	  b[i]=0;
      }
    }   
    in>>a;  
  }
 x= bigint(b);
 return in;
}

bigint bigint::timesDigit(int x) const{ // multiplies a bigint by an int x
  int tmp=0;
  bigint product(0);
  for(int i =CAPACITY-1; i>=0;--i){
    tmp= array[i]*x;
    if(tmp>9){ // carrys over products > 9
      product.array[i]=product.array[i]+(tmp%10);
      if(i>0)
        product.array[i-1]=product.array[i-1]+(tmp/10);
    }
    else if(tmp<=9){ //carrys over excess if tmp is <=9
      product.array[i]=product.array[i]+tmp;
      if(product.array[i]>9){
        if(i>0){
          product.array[i-1]= product.array[i-1]+(product.array[i]/10);
          product.array[i]= product.array[i]%10;
        }
        else if(!(i>0)){
          product.array[i]= product.array[i]%10;
        }
      }
    }
  }
  return product;
}

bigint bigint::times10(int x) const{
  bigint result(0);
  for(int j=0; j<CAPACITY;++j) // creates a bigint int and fills in with lhs bigint (this)
    result.array[j]=array[j];
  for(int power=0; power<x; ++power){ // loop to keep track of the exponet
    for(int i=0;i<(bigint::CAPACITY-1); ++i){ // loop to move bigint one space to the left
      result.array[i]=result.array[i+1];
    }
  result.array[bigint::CAPACITY-1]=0; // fill the one's place with a 0
  }
  return result;
}

bigint bigint::operator *(const bigint& rhs) const{
  bigint product(0);
  for(int i=bigint::CAPACITY-1; i>=0; --i){ 
    bigint tmp=0;
    tmp= (*this).timesDigit(rhs.array[i]); // multiplies bigint by index of rhs
    tmp=tmp.times10((bigint::CAPACITY-1)-i); // multiplies tmp by 10^ith
    product= product+tmp; // adds tmp to existing product
  }
  return product;
}
