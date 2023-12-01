#include <iostream>
using namespace std;

int main() {
	int a,temp,power=0;
	cout<<"Take an input to check if no is Armstrong or Not :";
	cin>>a;
	int copy=a;
	int copy1=a;
	
	while(copy>0)
	{
		copy=copy/10;
		power++;		
	}
	
	while(copy1>0)
	{
		temp=copy1%10;
		copy=copy1/10;
				
	}
	
	if(c==b)
	   cout<<c<<" is a Palindrome Number";
	else
		cout<<c<<" is Not a Palindrome Number";
	   
	return 0;
}