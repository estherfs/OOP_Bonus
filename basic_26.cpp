#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
struct number{
    int origin_value;
    string convert_str;
    int value;
};
/*比較數字和大小*/
int main(){
    int n;
    cin >> n;

    vector<struct number> set(n);
    for (int i = 0; i < n; i++){
        cin >> set[i].origin_value;
        stringstream ss;
        ss << set[i].origin_value; //int寫入stringstream

        ss >> set[i].convert_str; //stringstream寫入string

        set[i].value = 0;
        for (int j = 0; j < set[i].convert_str.size(); j++){
            set[i].value += (set[i].convert_str[j]-'0'); //各位數字和
        }
    }


    sort(set.begin(), set.end(), [](struct number &a, struct number &b) -> bool {
        if(a.value == b.value) {
            return a.origin_value < b.origin_value;
        } else {
            return a.value < b.value;
        }
    });


    for (int i = 0; i < n; i++){
        if(i){
            cout << " ";
        }
        cout << set[i].origin_value;
    }
    cout << endl;
    
    return 0;
}
