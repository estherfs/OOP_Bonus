#include <iostream>
using namespace std;
int main(){
    int n;
    char op;
    int a1, b1, a2, b2;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> op >> a1 >> b1 >> a2 >> b2;
        if(op == '+'){
            cout << (a1 + a2) << " " << (b1 + b2) << endl;
        }
        else if (op == '-'){
            cout << (a1 - a2) << " " << (b1 - b2) << endl;
        }
        else{
            cout << (a1 * a2 - b1 * b2) << " " << (a1 * b2 + b1 * a2) << endl;
        }
    }
    

    return 0;
}