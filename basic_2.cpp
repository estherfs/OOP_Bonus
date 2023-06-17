#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    //英哩轉公里
    int len;
    cin >> len;
    double new_len = len*1.6;
    //固定取到小數後一位
    cout << fixed << setprecision(1) << new_len << endl;

    return 0;
}