#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    char c;
    while (cin >> c){
        cout << (char) (c-7);
    }
    return 0;
}
