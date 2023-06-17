#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float num[10];
    cin >> num[0];
    float max = num[0], min = num[0];

    for (int i = 1; i < 10; i++){
        cin >> num[i];
        if(num[i] > max)
            max = num[i];
        if(num[i] < min)
            min = num[i];
    }
        
    cout << "maximum:" << fixed << setprecision(2) << max << endl;
    cout << "minimum:" << min << endl;

    return 0;
}