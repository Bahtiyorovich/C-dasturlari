#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	double n, k, s;
	cout<<"n = "; cin>>n;
	
	s = 0;
	k = 1;
	
	do {
		s += 1/pow(2*k + 1, 2);
		k++;
		
	} while( k <= n);
	
	cout<< "yig'indi =  "<< s <<endl;
	
	return 0;
}
