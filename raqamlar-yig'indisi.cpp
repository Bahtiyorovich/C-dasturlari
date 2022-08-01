#include <iostream>

using namespace std;

int main() {
	
	int n;
	cout<<"n = ";cin>>n;
	
	int sum = 0, r;
	
	while(n > 0){
		
		r = n % 10;
		sum += r;
		n = n / 10;
	
	}
	cout<< sum <<endl;
	
	return 0;	
}
