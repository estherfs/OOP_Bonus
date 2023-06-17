#include <iostream>
using namespace std;
int main(){
    int arr[9] = {0};
    int num;
    int flag = 0;
    cin >> num;
    if(num == -128){
        arr[7] = 1;
    }
    //遇到第一個1則1<-->0
    else if(num < 0){
        num = -num;
        for (int i = 0; i <= 6; i++){
            if(num%2 == 1){
                flag = i;
                break;
            }
            arr[i] = num % 2;
            num /= 2;
        }
        for (int i = flag; i <= 6; i++){
            arr[i] = num % 2;
            num /= 2;
        }
        for(int i = flag+1; i <= 7; i++){
            if(arr[i] == 0){
                arr[i] = 1;
            }
            else{
                arr[i] = 0;
            }
        }
    }
    else{
        for (int i = 0; i <= 6; i++){
            arr[i] = num % 2;
            num /= 2;
        }
    }
    for (int i = 7; i >= 0; i--){
        cout << arr[i];
    }
    cout << endl;

    return 0;
}