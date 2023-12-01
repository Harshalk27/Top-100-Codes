#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"Take an input to check Leap year :";
	cin>>a;
	
	if(a%4==0)
		cout<<a<<" is Leap Year ";
	else
		cout<<a<<" is Normal Year ";
	
	return 0;
}