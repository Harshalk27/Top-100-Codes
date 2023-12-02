#include <iostream>
using namespace std;

int main() {
	int a,node1=0,node2=1,nextterm;
	cout<<"Take an input to print upto Nth term :";
	cin>>a;
	
	if(a==1)
		cout<<"Fibonacci 1st term "<<node1;
	
	if(a==2)
		cout<<"Fibonacci 2nd term "<<node2;
	
	if(a>2){
		for(int i=2;i<a;i++){
			nextterm=node2+node1;	
			node1=node2;
			node2=nextterm;
		}
		cout<<"Fibonacci "<<a<<"th term "<<nextterm;
	}	
	return 0;
}