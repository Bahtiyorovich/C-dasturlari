#include <iostream>

using namespace std;

int main() {
	
	int a, b;
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
	
	while( true){
		if(a > b && a % b == 0){
			cout<< a <<" va "<< b << " ning Ekubi " << b << " ga teng."<<endl;
			break; 
		if( b > a && b % a == 0){
			cout<< a <<" va "<< b << " ning Ekubi " << a << " ga teng."<<endl;
			break; 
		}else if( a > b && a % b != 0){
			int q = a % b;
			if( b % q == 0){
				cout<< a <<" va "<< b << "ning EKUB i " << q << " ga teng."<<endl;
				break;
			}
		}else if( b > a && b % a != 0){
			int q = b % a;
			if( a % q == 0){
				cout<< a <<" va "<< b << "ning EKUB i " << q << " ga teng."<<endl;
				break;
			}
		}
    }
   }
	
	return 0;
}
