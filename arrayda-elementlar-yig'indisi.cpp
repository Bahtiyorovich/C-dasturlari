#include <iostream>

using namespace std;

int main() {
	
	int n, s = 0;
	cout << "n = "; cin >> n;
	int arr[n] = {0};
	
	for( int i = 0; i < n; i++){
		cin >> arr[i];
		s += arr[i];
	}
	
	cout << "array elementlar yig'indisi: s = " << s <<endl;
	
	// arrayning elementlari sonini aniqlash uchun arrayning type ni ishga solamiz
	
	cout << "arrayning elementlar sonini : n = " << sizeof(arr) / sizeof(int) << endl;
	
	return 0;
}
