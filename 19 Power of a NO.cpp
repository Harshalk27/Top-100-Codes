#include <iostream>
using namespace std;

int main() {
	int base,power,no=1;
	cout<<"Take an input of Base :";
	cin>>base;
	cout<<"Take an input of Power :";
	cin>>power;
	for(int i=1;i<=power;i++){
		no=no*base;
	}
	
	cout<<"Calculation is "<<no;
	return 0;
}