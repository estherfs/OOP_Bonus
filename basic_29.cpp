#include <iostream>
using namespace std;

int main(){
    string id;
    int num[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23,
                    24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

    cin >> id;
    int P = 0;

    P = num[id[0]-'A']/10 + (9*num[id[0]-'A']%10) + (8*(id[1]-'0')) 
        + (7*(id[2]-'0')) + (6*(id[3]-'0')) + (5*(id[4]-'0')) 
        + (4*(id[5]-'0')) + (3*(id[6]-'0')) + (2*(id[7]-'0')) 
        + (id[8]-'0') + (id[9]-'0'); 

    if(P%10==0) {
        cout << "CORRECT!!!" << endl;
    } else {
        cout << "WRONG!!!" << endl;
    }
    return 0;
}