#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int n;
	cout << "n = "; cin >> n;
	
	float arr[n] = {0};
	float sum = 0;
	float kop = 1;
	float arf = 0;
	float geo = 0;
	
	for( int i = 0; i < n; i++){
		cin >> arr[i];
		arf += arr[i];
		geo *= arr[i];
	}
	
	for( int i = 0; i < n; i++){
		if( arr[i] < 0){
			break;
		} else {
			sum += arr[i];
			kop *= arr[i];
		}
	}
	
	cout << "sum = " << sum <<endl;
	cout << "kop = " << kop <<endl;
	cout << "geo = " << pow(geo, 1/n) <<endl;
	cout << "arf = " << arf/n <<endl;
	
	return 0;
}
