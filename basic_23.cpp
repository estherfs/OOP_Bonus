#include <iostream>
using namespace std;
int main(){
    int N, a, b, c, change;
    int n1 = 0, n2 = 0, n3 = 0;
    scanf("%d,%d,%d,%d", &N, &a, &b, &c);
    change = N - 15 * a - 20 * b - 30 * c;

    if(change < 0){
        cout << 0 <<endl;
    }
    else{
        n3 = change / 50;
        change = change % 50;
        n2 = change / 5;
        n1 = change % 5;
        cout << n1 << "," << n2 << "," << n3 << endl;
    } 
    
    return 0;
}