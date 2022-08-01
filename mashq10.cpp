#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float t1, V1, t2, V2, T, V;
	cout <<"t1 = "; cin >>t1;
	cout << "t2 = "; cin >> t2;
	cout << "V1 = "; cin >> V1;
	cout << "V2 = "; cin >> V2;
	
	T = ((V1 + V2)*t2 + V1*t1)/(2 * V1 + V2);
	V = V1 + V2;
	
	cout <<" T = "<<T<<endl;
	cout << "V = "<<V<<endl;
	
	return 0;
}
