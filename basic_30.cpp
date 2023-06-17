#include <iostream>
using namespace std;
int main(){
    int mon, day;
    cin >> mon >> day;
    int code = mon * 100 + day;
    if(code >= 121 && code <= 218){
        cout << "Aquarius" << endl;
    }
    else if(code >= 219 && code <= 320){
        cout << "Pisces" << endl;
    }
    else if(code >= 321 && code <= 420){
        cout << "Aries" << endl;
    }
    else if(code >= 421 && code <= 521){
        cout << "Taurus" << endl;
    }
    else if(code >= 522 && code <= 621){
        cout << "Gemini" << endl;
    }
    else if(code >= 622 && code <= 722){
        cout << "Cancer" << endl;
    }
    else if(code >= 723 && code <= 823){
        cout << "Leo" << endl;
    }
    else if(code >= 824 && code <= 923){
        cout << "Virgo" << endl;
    }
    else if(code >= 924 && code <= 1023){
        cout << "Libra" << endl;
    }
    else if(code >= 1024 && code <= 1122){
        cout << "Scorpio" << endl;
    }
    else if(code >= 1123 && code <= 1221){
        cout << "Sagittarius" << endl;
    }
    else{
        cout << "Capricorn" << endl;
    }

    return 0;
}