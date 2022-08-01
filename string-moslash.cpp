#include <iostream>
#include <string.h>

using namespace std;
int main() {
	
	string str1, str2, str3;
	cout << "Bir nechta so'zdan iborat matn kiriting: "<<endl; 
	cin >> str1;
	
	str2 = "foundation";
	
	
	for( int i = 0; i <= str1.length(); i++){
		for( int j = 0; j <= str2.length(); j++){
			str1.find(j);
			str3 = "";
			if(j == i){
				str3.append(str1.assign(i, 1));
			}
				
		}
	}
	cout <<"sucsesfull: "<< str3 <<endl;
	return 0;
}
