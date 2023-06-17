#include <iostream>
using namespace std;
int main(){
    int hr1, min1, hr2, min2, hr, min;
    cin >> hr1 >> min1 >> hr2 >> min2;
    int fee = 0;
    if(min2 >= min1){
        min = min2 - min1;
        hr = hr2 - hr1;
    }
    else{
        min = min2 + 60 - min1;
        hr = hr2 - 1 - hr1;
    }
    min = min + hr * 60;
    if(min > 240){
        fee += ((min - 240) / 30) * 60;
        min = 240;
    }
    if(min <= 240 && min >= 120){
        fee += ((min - 120) / 30) * 40;
        min = 120;
    }
    if(min <= 120){
        fee += (min / 30) * 30;
    }
    cout << fee << endl;

    return 0;
}