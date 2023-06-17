#include <iostream>
using namespace std;
//f(n) = n+1, when n=0,1
//f(n) = f(n-1)+f(floor(n/2)), when n>1

int f(int n){
    if(n==0 || n==1){
        return n + 1;
    }
    else{
        return f(n - 1) + f(n / 2);
    }
}
int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;

    return 0;
}