#include <iostream>
using namespace std;

int main() {
	int a,sum=0;
	cout<<"Take an input to Sum upto a Number : ";
	cin>>a;
	
	for(int i=1;i<=a;i++)
		sum=sum+i;
	
	cout<<"sum is :"<<sum;
	
	return 0;
}