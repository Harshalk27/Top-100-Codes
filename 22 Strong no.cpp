#include <iostream>
using namespace std;

int facto(int n){
    int fact = 1;
    
    for(int i = 1; i <= n; i++)
            fact = fact * i;
    
    return fact;
}

int main() {
	int a,fact=1,sum=0,temp;
	cout<<"Take an input to check if no is Strong NO or Not :";
	cin>>a;
	int copy=a;
	
	while(copy>0)
	{
		temp=copy%10;
		copy=copy/10;
		sum=sum+facto(temp);		
	}
	
	if(a==sum)
	   cout<<a<<" is a Strong Number";
	else
		cout<<a<<" is Not a Strong Number";
	   
	return 0;
}