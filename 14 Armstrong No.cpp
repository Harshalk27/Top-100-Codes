#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a,temp,sum=0,power=0;
	cout<<"Take an input to check if no is Armstrong or Not :";
	cin>>a;
	int copy=a;
	int copy1=a;
	
	while(copy>0)
	{
		copy=copy/10;
		power++;		
	}
	cout<<"Power :"<<power<<endl;
	
	while(copy1>0)
	{
		temp=copy1%10;
		sum=sum+pow(temp,power);
		copy1=copy1/10;
				
	}
	cout<<"sum :"<<sum<<endl;
	
	if(a==sum)
	   cout<<a<<" is an Armstrong Number";
	else
		cout<<a<<" is Not an Armstrong Number";
	   
	return 0;
}