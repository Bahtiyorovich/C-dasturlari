#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float L, T;
	cout <<" L = "; cin >> L;
	
	int g = 10;
	
	T = 2 * M_PI * sqrt(L/g);
	
	cout <<"L uzunlikdagi matematik mayatnikning tebranish davri: "<< T <<endl;
	
	return 0;
}
