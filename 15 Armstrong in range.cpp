#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int start,end;
	cout<<"Take an Range to check if no is Armstrong or Not : \n";
	cout<<"Enter 1st No:";
	cin>>start;
	cout<<"Enter last No:";
	cin>>end;
	
	for(int i=start;i<=end;i++)
	{
	int temp,sum=0,power=0;
	int copy=i;
	int copy1=i;
	
	while(copy>0)
	{
		copy=copy/10;
		power++;		
	}
	//cout<<"Power :"<<power<<endl;
	
	while(copy1>0)
	{
		temp=copy1%10;
		sum=sum+pow(temp,power);
		copy1=copy1/10;			
	}
	
	if(i==sum)
	   cout<<i<<" ";

	}
	return 0;
}