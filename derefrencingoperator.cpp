#include<iostream>
using namespace std;
  int main(){
  	   int x =10;
  	   int *y =&x;

  	   cout<< x << endl;
  	   cout<< &x << endl;
  	   cout<< y <<endl;
  	   cout<< &y <<endl;
  	   cout <<*y<<endl;
  	   cout << *(&y) <<endl;
  	   cout <<*(&x) <<endl;
  	   
  	    int randomPointer =0;//when randomPointer is initialise '0' then only run time program will 
  	                          //crash and '0' is not intialise then value either garbage adddres store or run time error or crash the program

  	    // Derefrance a Garbage Address 
  	      cout<<*randomPointer <<endl;  	   

  	   return 0;

  }
  /*
    10     
    0x60ff0c 
    0x60ff0c
    0x60ff08 
    10
    0x60ff0c
    10