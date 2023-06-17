#include <iostream>
using namespace std;

int main(){
    int n;
    
    while( cin >> n)
    {
        if( n%400==0 || ( n%4==0 && n%100!=0 ) )
            cout << "Bissextile Year" << endl;
        else
            cout << "Common Year" << endl;
    }
    return 0;
}