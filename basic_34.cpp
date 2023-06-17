#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a1;
    int a2;
    while(cin >> a1 >> a2){
        if(a2==1) {
            cout << fixed << setprecision(1) << (a1-80)*0.7 << endl;
        } else {
            cout << fixed << setprecision(1) << (a1-70)*0.6 << endl;
        }
    }
    return 0;
}