#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"Take a input :";
	cin>>a;
	
	cout<<"Factors are : ";
	for(int i=1;i<=a;i++){
		if(a%i==0)
			cout<<i<<" ";
	}
	
	return 0;
}