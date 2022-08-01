#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int a, b;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	
	int c, s;
	
	c = sqrt(pow(a,2) + pow(b, 2));
	s = (a*b/2);
	
	cout << " To'g'ri burchakli uchburchakning gipotenuzasi: c = " << c <<endl;
	cout << " Yuzasi: s = "<< s <<endl;
	
	return 0;
}
