#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int n ;
	cout<<"n = "; cin>>n;
	
	float s = 0;
	
	for( int i = 1; i <= n; i++){
		s += 1/i;
	}
	
	cout<< s <<endl;
	
	return 0;
}
