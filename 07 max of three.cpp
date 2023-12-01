#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout<<"Take an input to check Max no \n1st no:";
	cin>>a;
	cout<<"2nd no:";
	cin>>b;
	cout<<"3rd no:";
	cin>>c;
	if(a>b)
		if(a>c)
			cout<<a<<" is Greatest ";
		else
			cout<<c<<" is Greatest ";
	else
		if(b>c)
			cout<<b<<" is Greatest ";
		else
			cout<<c<<" is Greatest ";
	
	return 0;
}
