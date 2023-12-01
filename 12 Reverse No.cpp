#include <iostream>
using namespace std;

int main() {
	int a,b=0,sum=0,temp;
	cout<<"Take an input to Reverse a Number :";
	cin>>a;
	
	while(a>0)
	{
		temp=a%10;
		a=a/10;
		
		b=(b*10)+temp;
		
	}
	cout<<"Reverse No :"<<b;
	return 0;
}