#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int input;
    while(cin >> input){
        s = to_string(input);
        int i = 0;
        for(; i<s.size()/2; i++){
            if(s[i] != s[s.size()-1-i]){
                cout << "NO" << endl;
                break;
            }
        }
        if(i == s.size()/2)
            cout << "YES" << endl;
    }
    
    return 0;
}
