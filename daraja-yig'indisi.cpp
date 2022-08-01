#include <iostream>

#include <math.h>

using namespace std;

int main() {
	
	int n;
	cout<<"n = "; cin>>n;
	float a;
	cout<<"a= "; cin>>a;
	
	float result;
	float sum = 0;
	
	for( int i = 0; i <= n; i++){
		sum += pow(a, i);
		cout<< pow( a, i) <<endl;
	}
	cout<<"darajalar yig'indisi: "<<sum<<endl;
	
	return 0;
}
