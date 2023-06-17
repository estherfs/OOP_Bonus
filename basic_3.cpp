#include <iostream>
using namespace std;
int main(){
    int x, y;
    cin >> x;
    cin >> y;
    if(x*x + y*y > 10000){
        cout << "outside\n";
    }
    else{
        cout << "inside\n";
    }

    return 0;
}