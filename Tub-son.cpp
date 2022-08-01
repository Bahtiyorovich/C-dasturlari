#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"n = "; cin>>n;
	
	for( int i = 1; i <= n; i++){
		if( n % i == 0 && i == 1 && i == n){
			cout << "Tub son" << n <<endl;
			break;
		} else {
			cout << "Tub son emas" << n <<endl;
			break;
		}
	}
	
	return 0;
}
