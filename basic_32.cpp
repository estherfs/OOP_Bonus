#include <iostream>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

int main(){
    char input[101];
    int n;
    fgets(input, 101, stdin);
    fflush(stdin);
    cin >> n;

    for(int i=0; i<strlen(input);i++) {
        int tmp;
        if('A' <= input[i] && 'Z' >= input[i]){
            tmp = (input[i]-'A');
            tmp = (tmp+n)%26;
            cout << (char)('A'+tmp);
        } 
        else if('a' <= input[i] && 'z' >= input[i]) {
            tmp = (input[i]-'a');
            tmp = (tmp+n)%26;
            cout << (char)('a'+tmp);
        } 
        else if('0' <= input[i] && '9' >= input[i]) {
            tmp = (input[i]-'0');
            tmp = (tmp+n)%10;
            cout << (char)('0'+tmp);
        } 
        else {
            cout << input[i];
        }
    }

    return 0;
}