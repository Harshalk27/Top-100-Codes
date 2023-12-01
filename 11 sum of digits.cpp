#include <iostream>
using namespace std;

int main() {
	int a,sum=0,temp;
	cout<<"Take an input to calculate sum of digits :";
	cin>>a;
	
	while(a>0)
	{
		temp=a%10;
		sum=sum+temp;
		a=a/10;
	}
	cout<<"Sum :"<<sum;
	return 0;
}