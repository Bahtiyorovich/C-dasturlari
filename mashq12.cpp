#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	double x, y, n;
	cout<<" x = "; cin >> x;
	cout<<" y = "; cin >> y;
	
	n = (fabs(x) - fabs(y))/ (1 + fabs(x * y));
	
	cout <<" n = "<< n << endl;
	
	return 0;
}
