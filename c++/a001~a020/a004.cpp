#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int year;
    while(cin>>year) {
        if (year % 400 == 0){
            cout << "閏年\n";
        }
        else if (year % 100 == 0) {
            cout << "平年\n";
        }
        else if (year % 4 == 0) {
            cout << "閏年\n";
        }
        else {
            cout << "平年\n";
        }
    }
    return 0;
}
