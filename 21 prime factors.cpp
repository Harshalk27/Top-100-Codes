#include <iostream>
using namespace std;

bool prime(int n){
		if (n<2)
		return false;
	
	for(int i=2;i<=n/2;i++)
		if(n%i==0)
		return false;
		
	return true;
	}	

int main() {
	int a,i;
	cout<<"Take a input :";
	cin>>a;
	
	cout<<"Prime Factors are : ";
	for(i=2;i<=a;i++){
		if(a%i==0)
			if(prime(i))
			cout<<i<<" ";
	}
	
	return 0;
}