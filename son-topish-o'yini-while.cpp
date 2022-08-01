#include <iostream>

#include <ctime>

#include <stdlib.h> // rand - funksiyasidan foydalanish uchun

using namespace std;

int main() {
	
	int x, y = 0, u = 0;
	srand(time(NULL));
	
	x = rand() % 1000 + 1;
	cout<<"Kompyuter o'ylagan sonni toping"<<endl;
	while( x != y){
	 	cin >> y;
	 	u++;
	 	if( x > y){
	 		cout<<"Kompyuter o'ylagan son taxminingizdan kattaroq"<<endl;
		 } else if( x < y){
		 	cout<<"Kompyuter o'ylagan son tahminingizdan kichikroq"<<endl;
		 } else if( x == y){
		 	cout<<"Tahminingiz to'g'ri !!!"<<endl;
	 		cout<<"Urinishlar soni: " << u <<endl;
		 }
		if( u == 5){
		 	cout<<"Urinishlar soni tugadi, Siz Yutkazdingiz !!!"<<endl;
		 	break;
		 }
	}
	cout<<"Yana o'ynashni hohlasangiz dasturni qayta ishga tushiring!!!"<<endl;
	cout<<"See you again !!!"<<endl;
	 
	return 0;
}
