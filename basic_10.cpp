#include <iostream>
using namespace std;
//輾轉相除法求最大公因數
int main(){
    int a, b;
    cin >> a >> b;
    while(a!=0 && b!=0){
        if(a>b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    if(a==0){
        cout << b << endl;
    }
    else{
        cout << a << endl;
    }

    return 0;
}