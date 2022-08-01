#include <iostream>

#include <math.h>

using namespace std;

int main() {
	
	int n;
	cout<<"n = "; cin>>n;
	float a;
	cout<<"a= "; cin>>a;
	
	float result;
	
	for( int i = 0; i <= n; i++){
		cout<< pow( a, i) <<endl;
	}
	
	return 0;
}
