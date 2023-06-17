#include <iostream>
using namespace std;
//transpose a matrix
int main(){
    int row, col;
    while(cin >> row >> col){
        int matrix[row][col];
        for(int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                cin >> matrix[i][j];
            }
        }

        int matrix2[col][row];
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                matrix2[j][i] = matrix[i][j];
            }
        }

        for(int i = 0; i < col; i++){
            for(int j = 0; j < row; j++){
                if(j != row-1)
                    cout<< matrix2[i][j] << " ";
                else
                    cout<< matrix2[i][j] << endl;
            }
        }
    }

    return 0;
}

