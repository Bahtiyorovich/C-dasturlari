#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int n, k;
	cout<<" n = "; cin>>n;
	cout<<"k = "; cin>>k;
	
	int sum = 0;
	for( int i = 1; i <= n; i++){
		sum += pow(i, k);
	} 
	
	cout<<"natija: "<< sum <<endl;
	
	return 0;
	
}
