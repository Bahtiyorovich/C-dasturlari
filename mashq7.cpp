#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	float h, t;
	cout <<"Tosh tushgan balandlikni metrlarda kiriting: "; cin >> h;
	int g = 10;
	t = sqrt(2*h)/g;
	cout <<"tosh tushguncha ketgan vaqt: t = "<< t <<" sekund"<<endl;
	return 0;
	
}
