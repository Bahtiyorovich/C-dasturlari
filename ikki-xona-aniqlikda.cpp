// muallif: Yoqubov Sherzod
// sana: 26.07.2022
// dastur maqsadi: Aniqlangan qiymatni ikki xona aniqlikda chop etish

#include <iostream>

#include <iomanip>

using namespace std;

int main() {
	float a, b;
	cout << "a sonini b soniga bo'lib 2 xona aniqlikda chiqarish!"<<endl;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	
	a = a/b;
	
	cout << a << endl;
	cout << setprecision(2) << fixed << a << endl; // setprecision(x) - necha xona aniqlikda chop etmoqchi bo'lsangiz shu qiymatni kiriting;
	
	return 0;
	
} 
