#include <iostream>

#include <math.h>

using namespace std;

int main() {
	
	int n;
	cout<<"n = "; cin>>n;
	float a;
	cout<<"a= "; cin>>a;
	
	float result = 1;
	
	for( int i = 1; i <= n; i++){
		result *= a;
	}
	cout<< result <<endl;
	
	return 0;
}
