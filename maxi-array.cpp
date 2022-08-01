#include <iostream>

using namespace std;

int main() {
	
	int n = 5;
	int arr[5] = {7, 5, 8, 3, 1};
	
	int maxi = arr[0];
	for( int i = 0; i < 5; i++ ){
		if( maxi < arr[i]){
			maxi = arr[i];
		}
	}
	cout <<"maximal qiymat: "<< maxi <<endl;
	return 0;
}
