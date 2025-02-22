#include<iostream>
using namespace std;
int main(){
    int sayi=0, durum=1;
    cout << "Enter a number:";
    cin >> sayi;
    for(int i=2;i<sayi;i++)
        if(sayi%i==0){
            cout << "not a prime number";
            durum=0;
            break;
        }
        if(durum==1)
            cout << "a prime number.";
    return 0;
}