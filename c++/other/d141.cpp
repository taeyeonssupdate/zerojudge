#include "iostream"
using namespace std;

int main(int argc, char const *argv[]) {
    int count;
    cin >> count;
    for (; count > 0; count--){
        char dot;
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> dot >> y1 >> x2 >> dot >> y2 >> x3 >> dot >> y3;
        x2 -= x1;
        x3 -= x1;
        y2 -= y1;
        y3 -= y1;
        if (x2 * y3 - x3 * y2 != 0){
            cout << "not collinear" << endl;
        } else {
            cout << "collinear" << endl;
        }
    }
    return 0;
}
