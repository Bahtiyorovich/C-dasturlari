#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float R1, R2, R3, R;
	cout <<"R1 = "; cin >> R1;
	cout <<"R2 = "; cin >> R2;
	cout <<"R3 = "; cin >> R3;
	
	R = (R1 * R2 * R3)/(R1 * R2 + R1 * R3 + R2*R3);
	
	cout << "Natija: " << R <<endl;
	
	return 0;
}
