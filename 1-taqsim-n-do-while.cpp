#include <iostream> 

using namespace std;

int main() {
	
	float n, s, i;
	cout<<"n = "; cin>>n;
	
	i = 1;
	s = 0;
	
	do {
		s += 1/i;
		i++;
	} while( i <= n);
	
	cout<<"natija: "<< s <<endl;
	
	return 0;
}
