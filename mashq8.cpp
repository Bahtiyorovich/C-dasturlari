#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float a, s;
	cout << "Teng tomonli uchburchakning tomoni uzunligini kiriting: "; cin >> a;
	
	s = (sqrt(3) * pow(a, 2))/4;
	
	cout << "Teng tomonli uchburchakning yuzasi: s = "<< s <<endl;
	
	return 0;
}
