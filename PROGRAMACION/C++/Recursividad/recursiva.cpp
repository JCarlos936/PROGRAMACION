
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int factorial(int);
int main(){
	
	cout<<factorial(3);
	
	return 0;
}


int factorial(int n){

	if(n==0){
	n=1;
	}
	
	else{
	n = n*factorial(n-1);
	}
	
	return n;
}





