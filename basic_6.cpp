#include <iostream>
using namespace std;
int main(){
    int mon;
    cin >> mon;
    if(mon<=5 && mon>=3){
        cout << "Spring\n";
    }
    else if(mon<=8 && mon>=6){
        cout << "Summer\n";
    }
    else if(mon<=11 && mon>=9){
        cout << "Autumn\n";
    }
    else{
        cout << "Winter\n";
    }

    return 0;
}