#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int n;
	cout << "n = "; cin >> n;
	
	float arr[n];
	
	for( int i = 0; i < n; i++){
		cin >> arr[i];
	}
	float maxi = arr[0];
	for( int i = 0; i < n; i++){
		if( maxi < arr[i]){
			maxi = arr[i];
		}
	}
	
	float mini = arr[0];
	for( int i = 1; i < n; i++){
		if( mini > arr[i]){
			mini = arr[i];
		}
	}
	
	float maxi1 = arr[0];
	for( int i = 0; i < n; i++){
		if( maxi1 < arr[i]){
			maxi1 = arr[i];
			i++;
		}
	}
	
	float mini1 = arr[1];
	for( int i = 1; i < n; i++){
		if( mini1 > arr[i]){
			mini1 = arr[i];
			i++;
		}
	}
	
	
	cout << "maximum = " << maxi <<endl;
	cout << "minimum = " << mini <<endl;
	cout << "maximum1 = " << maxi1 <<endl;
	cout << "minimum1 = " << mini1 <<endl;
	
	return 0;
}
