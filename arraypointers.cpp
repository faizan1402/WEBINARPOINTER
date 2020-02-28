#include<iostream>
using namespace std;
   void print(int a[]){
   	   cout<<a<<endl;
   }  
   // Both notations a[] and int *a are same case of arrays
     void print2(int *a){
     	cout<<a<<endl;
     	cout<<sizeof a<<endl; // 4 bytes store the value becuause my compiler is 32 bit 
     }

   int main(){
   	    int a[] ={1,2,3,4};

   	    cout<<a<<endl;
   	    cout<<&a<<endl;
   	    cout<<sizeof a<<endl; // memory space 16 bytes beacuse 4 element is present 4 boxes and single box  4 bytes store the value in 64 bit compiler  
   	    print(a);
   	    print2(a);


   }
   /*
         0x60ff00
         0x60ff00
         0x60ff00 function call
         0x60ff00 2nd function call

         */