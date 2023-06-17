#include <iostream>
using namespace std;
  
int main(){   
    long long arr[7];   
    for(int i=0; i<6; i++){   
        cin >> arr[i];   
    }   
    for (int i = 5; i >= 0; i--){   
        if(i!=5) cout << " ";  
        cout << arr[i];  
    }   
    cout << endl; 
    return 0;
}  