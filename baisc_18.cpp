#include <iostream>
#include <string>
using namespace std;
/*輸出鍵盤上右移一格的字*/
int main(){
    string s;
    string qwerty = "!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:""asdfghjkl;''<>??zxcvbnm,.//";
    getline(cin, s);
    for (int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
        for (int j = 0; j < qwerty.size(); j++){
            if(s[i] == ' ')
                break;
            else if(s[i] == qwerty[j]){
                s[i] = qwerty[j + 1];
                break;
            }
        }
    }
    cout << s << endl;
    
    return 0;
}