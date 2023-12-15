#include <iostream>

  using namespace std;
  
  
int main( ) {
	float a,b,c,d,e;
	int f;
	
	cout<<"Pleas enter value for a : ";
	cin>> a;
	cout<<"Pleas enter value for b : ";
	cin>> b;
	
	c=a+b;
	d+a-b;
	e=a*b;
	f=(int)a%(int)b;
	
	cout<<" a plus b is : "<<c;
	cout<<" a minus b is : "<<d;
	cout<<" a times b is : "<<e;
	cout<<" remainder of a over b is : "<<f;
	
 
}