#include <iostream>
#include <string>
#include <sstream>
using namespace std;
//Spade > Heart > Diamond > Club
struct card{
    int num;
    char pat;
};
int compare(const void *a, const void *b){
    struct card *aa = (struct card *) a;
    struct card *bb = (struct card *) b;
    if(aa->pat == bb->pat){
        return aa->num < bb->num;
    }
    else{
        return aa->pat < bb->pat;
    }
}
int main(){
    int n;
    string input;
    char c;
    getline(cin, input);
    n = stoi(input);
    while(n--){
        //string token
        struct card set[100];
        int j = 0;
        
        getline(cin, input);
        for(int i = 0; i < input.size(); i++){
            if(isalpha(input[i])){
                set[j].pat =  input[i];
            }
            else if(isdigit(input[i]) && isdigit(input[i+1])){
                set[j++].num = stoi(input.substr(i, 2));
                i++;
            }
            else if(isdigit(input[i])){
                set[j++].num = stoi(input.substr(i, 1));
            }
        }

        
        qsort((void *)set, j, sizeof(struct card), compare);
        
        for (int k = 0; k < j; k++){
            if(k!=j-1)
                cout << set[k].pat << set[k].num << " ";
            else
                cout << set[k].pat << set[k].num << endl;
        }
    }

}
