#include <iostream>

#include <math.h>

using namespace std;

int main() {
	
	int n, result ;
	cout<<"n = "; cin>>n;
	result = 1;
	
	for( int i = 0; i <= n; i++){
		if( i == 0 && n == 0){
			i = 1;
		}
		result *= i;
	}
	
	cout<< "1 dan n gacha sonlar ko'paytmasi (n faktoriali):"<< result <<endl;
	return 0;
}
