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
	int a,b,i;
	cout<<"Take an input to check prime Between Two Number \n1st NO : ";
	cin>>a;
	cout<<"2nd NO : ";
	cin>>b;
	
	cout<<"Primes no are :";
	for(int i=a;i<=b;i++)
		if(prime(i))
		cout<<i<<" ";
		
	return 0;
}