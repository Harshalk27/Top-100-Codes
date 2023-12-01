#include <iostream>
using namespace std;

int main() {
	int a,b,sum=0;
	cout<<"Take an input to Sum Between Two Number \n1st NO : ";
	cin>>a;
	cout<<"2nd NO : ";
	cin>>b;

	for(int i=a; i<=b; i++)
		sum=sum+i;

	cout<<"sum is :"<<sum;

	return 0;
}