#include <iostream>
using namespace std;

int main() {
	int a,fact=1;
	cout<<"Take an input to print factorial :";
	cin>>a;
	
	for(int i=1;i<=a;i++){
		fact=fact*i;
	}
	
	cout<<"Factorial is "<<fact;
	return 0;
}