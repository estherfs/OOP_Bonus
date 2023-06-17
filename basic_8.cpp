#include <iostream>
using namespace std;
int main(){
    int n, i=2;
    cin >> n;
    if(n==1){
        cout << "NO\n";
        return 0;
    }
    while(i<n){
        if(n%i == 0){
            cout << "NO\n";
            return 0;
        }
        i++;
    }

    cout << "YES\n";
    return 0;
}