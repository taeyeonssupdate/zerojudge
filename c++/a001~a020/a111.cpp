#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int x;
    while (cin >> x){
        if (x == 0){
            break;
        } else {
            cout << (int)(x * (x + 1) * (2 * x + 1) / 6) << endl;
        }
    }
    return 0;
}
