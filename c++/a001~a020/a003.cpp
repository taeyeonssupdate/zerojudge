#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int M, D;
    cin >> M >> D;
    switch ((M * 2 + D) % 3){
    case 0:
        cout << "普通";
        break;
    case 1:
        cout << "吉";
        break;
    case 2:
        cout << "大吉";
        break;
    }
    return 0;
}
