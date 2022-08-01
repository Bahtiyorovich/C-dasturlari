#include <iostream>

using namespace std;

int main() {
	
	int n;
	cout << "n = "; cin >>n;
	float arr[n];
	
	for( int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	float mini = arr[0];
	for( int i = 0; i < n; i++){
		for( int j = i +1; j < n; j++ ){
			if( arr[i] > arr[j]){
				swap(arr[i], arr[j]);
			}
		}
		cout << arr[i] <<" ";
		
	}
	
	cout << endl;
	
	float maxi = arr[0];
	for( int i = 0; i < n; i++){
		for( int j = i + 1; j < n; j++){
			if( arr[i] < arr[j]){
				swap(arr[i], arr[j]);
			}
		}
		cout << arr[i] <<" ";
	}
	
	
	return 0;
}
