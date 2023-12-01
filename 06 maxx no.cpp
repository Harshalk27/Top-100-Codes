#include <iostream>
using namespace std;

int main() {
	int a,b;
	cout<<"Take an input to check Max no \n1st no:";
	cin>>a;
	cout<<"2nd no:";
	cin>>b;
	if(a>b)
		cout<<a<<" is Greatest ";
	else
		cout<<b<<" is Greatest ";
	
	return 0;
}