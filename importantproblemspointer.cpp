#include<iostream>
using namespace std;
   int main(){

   	   int x =10;
   	   int *xptr=&x;
   	     

   	   cout << xptr << endl;//Return the address

   	   cout << &x << endl;
   	   cout << x <<  endl;
   	   cout << &xptr << endl;// Address of the pointer bucket
       
       int **xxptr =&xptr ;
       cout<<xxptr <<endl; // **xxptr basically points the xptr and address hold the xptr
       // NOw hold the address of char data type 
        char ch ='A';
        cout<<ch<<endl;
        cout<<(void*)&ch<<endl;
        // Cout treates char address differently ,instead of printing the address it printing the contents in the memory until a null character .
   	   return 0;
   }
   	  

/*  
  0x60ff08- return the address 
  0x60ff08- return the address
  10 bucket the value
  0x60ff08 - bucket of xptr address store 
  0x60ff04
  A- print the char value
  0x60ff03- hold the char data type address

*/