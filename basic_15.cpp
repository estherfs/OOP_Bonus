#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    int alpha[26] = {0};
    string str;
    getline(cin, str);
    int num = 1;
    for (int i = 0; i < str.size(); i++){
        if (str[i] == ' ')
                num++;
        else if (str[i] != ',' && str[i] != '.')
            alpha[tolower(str[i]) - 'a']++;
    }

    cout << num << endl;
    for (int j = 0; j < 26; j++){
        if(alpha[j] != 0)
            cout << (char)(j + 'a') << " : " << alpha[j] << endl;
    }

    return 0;
}