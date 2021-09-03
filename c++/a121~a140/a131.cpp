#include "iostream"
using namespace std;


int main(int argc, char const *argv[]){
    char buf[25];
    // char map[92] = "                                                                  123 12  22455 12623 1 2 2";
    int ascii_map[91] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 1, 2, 3, 0,
        1, 2, 0, 0, 2, 2, 4, 5, 5, 0,
        1, 2, 6, 2, 3, 0, 1, 0, 2, 0,
        2};
    while (cin >> buf) {
        cout << buf[0];
        int value = 0;
        for (int i = 1; buf[i] && value < 100; ++i){
            if (ascii_map[buf[i]] != 0 && ascii_map[buf[i - 1]] != ascii_map[buf[i]])
            {
                value = value * 10 + ascii_map[buf[i]];
            }
        }
        cout << value;
        if (value < 100){
            cout << "0";
        }
        if (value < 10){
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}
