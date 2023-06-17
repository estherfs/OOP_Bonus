#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float summer = 0.;
    float normal = 0.;
    int degree;

    cin >> degree;
    if(degree >= 701){
        summer += (degree - 700) * 5.63;
        normal += (degree - 700) * 4.5;
        degree = 700;
    }
    if(degree >= 501){
        summer += (degree - 500) * 4.97;
        normal += (degree - 500) * 4.01;
        degree = 500;
    }  
    if(degree >= 331){
        summer += (degree - 330) * 4.39;
        normal += (degree - 330) * 3.61;
        degree = 330;
    }
    if(degree >= 121){
        summer += (degree - 120) * 3.02;
        normal += (degree - 120) * 2.68;
        degree = 120;
    }

    summer += degree * 2.10;
    normal += degree * 2.10;

    cout << fixed << setprecision(2) << "Summer months:" << summer << endl;
    cout << fixed << setprecision(2) << "Non-Summer months:" << normal << endl;

    return 0;
}