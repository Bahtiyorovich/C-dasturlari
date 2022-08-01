#include <iostream>
using namespace std;

int main(){
	
	int n, x, y, o;
	cout <<"N ning oxirgi qiymatini, birinchi raqamini, raqamlar yig'indisini aniqlovchi dastur"<<endl;
	cout << "n = "; cin >> n;
	
	o = n % 10;
	x = n / 10;
	y = o + x;
	
	cout <<"oxirgi raqami: " << o << endl;
	cout <<"birinchi raqami: "<< x << endl;
	cout <<"raqamlari yig'indisi: "<< y << endl;
	
	return 0;
}
