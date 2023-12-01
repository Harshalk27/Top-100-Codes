#include <iostream>
using namespace std;

int main() {
	int a,flag=0;
	cout<<"Take an input to check Prime No :";
	cin>>a;
	
	for(int i=2;i<=a/2;i++)
		if(a%i==0)
		flag=1;
		
	if(flag==0)
		{
		if(a==0 || a==1)
			cout<<"No is not Prime";
		else
		    cout<<"No is Prime";
		}
	else
		cout<<"No is not Prime";
	
	return 0;
}