#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	float n, k, s;
	cout<<"n = "; cin>>n;
	
	s = 0;
	k = 1;
	
	do {
		s += 1/pow(k, 5);
		k++;
		
	} while( k <= n);
	
	cout<< "yig'indi =  "<< s <<endl;
	
	return 0;
}
