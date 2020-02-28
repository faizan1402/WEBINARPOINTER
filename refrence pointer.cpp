#include<iostream>
using namespace std;


  void update1 (int x)

 void update(int z){
 	z++;

 }



   int main(){
   	   // Refrence variable 
        // Refrence variable means same name and same refrence passs so basically 'y' are value same to 'x' 
   	    int x =10;
   	    int &y=x; //It means y is refrence to x
   	    y=y+1;
   	    cout<<x <<endl;
   	    cout<<y<<endl;

   	    update(x);
   	    update(y);
   	    cout<<x<<endl;
   	    cout<<y<<endl;

   	    return 0;

   }