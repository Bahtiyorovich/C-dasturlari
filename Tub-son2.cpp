#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"n = "; cin>>n;
	
	int counter = 0;
	
	for( int i = 1; i <= n; i++){
		if( n % i == 0){
			cout<< i <<endl;
			counter += 1;
		} 
	}
	if( counter == 2){
		cout<<"Tub son "<<endl;
	} else {
		cout<<"Tub son emas"<<endl;
	}
	
	return 0;
}
