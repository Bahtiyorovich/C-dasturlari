#include <iostream> 
#include <math.h>

using namespace std;

int main( ){
	
	int n;
	cout << "array o'lchamini kiriting: n = "; cin >> n;
	
	float arr[n] = {0};
	float s = 0, k = 1, abss = 0, absk = 1, e = 0;
	
	for( int i = 0; i < n; i++){
		
		cin >> arr[i];
		s += arr[i];
		k *= arr[i];
		abss += abs(arr[i]);
		absk *= abs(arr[i]);
		e += pow(arr[i], 2);
	}
	
	cout << endl;
	cout <<"Yig'indisi: "<< s <<endl;
	cout <<"Ko'paytmasi: "<< k <<endl;
	cout <<"absolyut qiymatlar yig'indisi: "<< abss <<endl;
	cout <<"absolyut qiymatlar kopaytmasi: "<< absk <<endl;
	cout << "kvadratlari yig'indisi: "<< e <<endl;
	
	return 0;
}
