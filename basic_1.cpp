#include <iostream>
using namespace std;
int main(){  
    string str;  
    int num[4];  
    cin >> str;  
    for (int i = 0; i < 4; i++){  
        num[i] = (str[i] - '0');  
    }  
  
    string table[10];  
    table[0] = "******   **   **   ******";  
    table[1] = "    *    *    *    *    *";  
    table[2] = "*****    *******    *****";  
    table[3] = "*****    ******    ******";  
    table[4] = "*   **   ******    *    *";  
    table[5] = "******    *****    ******";  
    table[6] = "*    *    ******   ******";  
    table[7] = "*****    *    *    *    *";  
    table[8] = "******   *******   ******";  
    table[9] = "******   ******    *    *"; 
     
  
    for (int i = 0; i < 5; i++){  
        for (int j = 0; j < 4; j++){
            if(j){
                printf(" ");
            }
            int k = 0;
            while(k!=5){  
                cout << table[num[j]][i * 5 + k];  
                k++;  
            }  
              
        }  
          
        cout << endl;  
    }  
  
    return 0;  
}  