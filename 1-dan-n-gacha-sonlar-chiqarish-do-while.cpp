#include <iostream>

using namespace std;

int main() {
	
	int n, number;
	cout<<"n = "; cin>>n;
	
	number = 1;
	
	do {
		cout<< number <<endl;
		number ++;
	} while (number <= n);
	
	return 0;
}
