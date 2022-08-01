#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main(){
	
	int n, m;
	cout<<"n = "; cin>>n;
	cout<<"m = "; cin>>m;
	
	srand(time(NULL));
	int arr[n];
	
	for( int i = 0; i < n; i++){
		if( arr[i] != arr[i + 1] ){
			arr[i] = 1 + (rand() % m);
		}
		
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
