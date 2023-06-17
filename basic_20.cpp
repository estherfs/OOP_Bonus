#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
/*大數加法*/
string add(string a, string b){
    string sum;
    int carry = 0;
    int len = a.size()<b.size()?a.size():b.size();

    for (int i = 0; i < len; i++){
        sum += (((a[i]-'0') + (b[i]-'0') + carry)%10 + '0');
        if((a[i]-'0') + (b[i]-'0') + carry >= 10)
            carry = 1;
        else
            carry = 0;
    }
    if(a.size() < b.size()){
        for (int i = len; i < b.size(); i++){
            sum += (((b[i]-'0') + carry)%10 + '0');
            if((b[i]-'0') + carry >= 10)
                carry = 1;
            else
                carry = 0;
        }
    }
    else if(a.size() > b.size()){
        for (int i = len; i < a.size(); i++){
            sum += (((a[i]-'0') + carry)%10 + '0');
            if((a[i]-'0') + carry >= 10)
                carry = 1;
            else
                carry = 0;
        }
    }
    if(carry == 1)
        sum = sum + "1";

    return sum;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string ans = add(a,b);
        
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    

    return 0;
}
