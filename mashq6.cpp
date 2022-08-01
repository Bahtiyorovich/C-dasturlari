#include <iostream>

#include <math.h>

using namespace std;

int main(){
	
	float a, b;
	
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	
	float arif, geo;
	
	arif = (a + b)/2;
	geo = sqrt(a * b);
	
	cout << "O'rta arifmetik qiymati: "<< arif <<endl;
	cout << " O'rta geometrigi: "<< geo <<endl;
	
	return 0;
}
