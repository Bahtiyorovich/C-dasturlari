#include <iostream>

using namespace std;

int main() {
	
	int n, k;
	cout<<"n, k ga qiymat bering: "; cin>>n>>k;
	
	int b, r, q = n;
	
	while( q >= k){
		q -= k;
		b++;
	}
	r = n - b * k;
	cout<<"Butun qism: "<< b << " qoldiq: " << r <<endl;
	
	return 0;
}
