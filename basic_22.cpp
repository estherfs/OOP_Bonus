#include <iostream>
using namespace std;
int main(){
    int map[3][3];
    int check = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> map[i][j];
        }
    }
    //檢查橫、直
    for (int i = 0; i < 3; i++){
        if(map[i][0] == map[i][1] && map[i][1] == map[i][2]){
            cout << "True" << endl;
            check = 1;
            break;
        }
        if(map[0][i] == map[1][i] && map[1][i] == map[2][i]){
            cout << "True" << endl;
            check = 1;
            break;
        }
    }
    //檢查斜
    if(map[0][0] == map[1][1] && map[1][1] == map[2][2]){
        cout << "True" << endl;
        check = 1;
    }
    if(map[0][2] == map[1][1] && map[1][1] == map[2][0]){
        cout << "True" << endl;
        check = 1;
    }
    if(check == 0){
        cout << "False" << endl;
    }

    return 0;
}