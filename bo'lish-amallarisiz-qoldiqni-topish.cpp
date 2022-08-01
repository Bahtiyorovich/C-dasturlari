#include <iostream>

using namespace std;

int main() {
	
	int n, m;
	cout<<"n = ";cin>>n;
	cout<<"m = ";cin>>m;
	
	int count = 0;
	int q = n;
	
	while(q >= m){
		q -= m;
		count++;
	}
	
	int qoldiq = n - count * m;
	cout<<"Butun qismi: "<< count <<" qoldiq: "<<qoldiq<< endl;
	
	
	return 0;
}
