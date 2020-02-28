#include<iostream>
using namespace std ;

    // Pass by value
void update(int x){
	 x =x+1;
	 cout<<"In Update"<<" "<< x << endl; //Ans will be 11
	}
	  // Pass by Refrence

	 void updateActual(int *x){
	 	*x =*x+1;

	 }

  int main(){
  	// Pointers and functions
  	int x =10;
  	update(x);

  	cout<<x<<endl; //Ans will be 10
  	updateActual(&x);
  	cout<<x<<endl; // 11
  	return 0;
  }
  /*
  Explaination -
   Measn pass by value and update condition and real condition
    In update -11
    Output print is -10
    */