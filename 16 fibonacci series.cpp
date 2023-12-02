#include <iostream>
using namespace std;

int main() {
	int a,node1=0,node2=1,nextterm;
	cout<<"Take an input to print upto Nth term :";
	cin>>a;
	
	cout<<"Fibonacci Series is = "<<node1<<" "<<node2<<" ";
	for(int i=2;i<a;i++){
		nextterm=node2+node1;
		node1=node2;
		node2=nextterm;
		cout<<nextterm<<" ";
	}
	
	return 0;
}