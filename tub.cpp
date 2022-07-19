#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "n= "; cin >> n;
	if(n<0){
		cout << "faqat 0 dan katta va butun qiymat kiriting";
	}
	for(int i=2; i<=n; i++){
		bool tub = false;
		for(int j=2; j<i; j++){
			if(i%j == 0){
				tub = true;
			}
		}
		if(tub != true){
			cout << i << " ";
		}
	}
	
	return 0;
}
