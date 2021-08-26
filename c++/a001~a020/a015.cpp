#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    int row, col, temp;
    while (cin >> row >> col){
        vector<vector<int>> array(col, vector<int>(row, 0));
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                cin >> temp;
                array[j][i] = temp;
            }
        }
        for (vector<int> a : array){
            for (int b : a){
                cout << b << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}
