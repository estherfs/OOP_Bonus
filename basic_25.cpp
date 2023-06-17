#include <iostream>    
#include <string>   
using namespace std;
int main(){    
    string t;    
    getline(cin, t);   
   
    long long n = stoll(t);  // string to long long
    for (long long i = 0; i < n; i++){    
        long long sum = 0;      
        string s; 
           
        getline(cin, s);  

        for (int j = 0; s[j] != '\n' && j < s.length() && s[j] != '\r'; j++){    
            sum += s[j];    
        }    
           
        cout << sum << endl;
    }    
}  