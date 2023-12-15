#include <iostream>

 
int main( ) {
	int x,z,y;
	float a,b,c;
	
	cout<<"Please enter value for x : ";
	cin>> x;
	cout<<"Please enter value for y : ";
	cin>> y;
	cout<<"Please enter value for z : ";
	cin>> z;
	
	
	a=((x-y)*(x+z));
	b=(((x+z+y)*(x+y+z))+1)
	c=a/b
	
	cout<< "the answer is :"<<c;
 
}