#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int n;
	cout<<" n = "; cin>>n;
	
	int sum = 0;
	for( int i = 1; i <= n; i++){
		sum += pow(i, i);
		cout<< pow(i, i) <<endl;
	} 
	
	cout<<"natija: "<< sum <<endl;
	
	return 0;
	
}
