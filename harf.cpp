#include <iostream>
using namespace std;

int main()
{
    int j, x;

    cout <<"Butun sonlarda qiymat kiriting: ";
    cin >> x;

    for(int i = 1, k = 0; i <= x; i++, k = 0)
    {
        for(j = 1; j <= x-i; j++)
        {
            cout <<"  ";
        }
		int p=1;
        while(k != 2*i-1)
        {
        	if(k<i){
            	cout <<(char)(k+65)<< " ";
			}
            else{
            	cout <<(char)(k-2*p+65)<< " ";
            	p++;
			}
            k++;
        }
        cout << endl;
    }    
    return 0;
}
