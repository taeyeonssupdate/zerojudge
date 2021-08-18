#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int a, b, c, d, range;
    for (cin >> range; range > 0; range--){
        cin >> a >> b >> c >> d;
        if (d - c == b - a){
            cout << a << " " << b << " " << c << " " << d << " " << (b - a + d) << '\n';
        } else {
            cout << a << " " << b << " " << c << " " << d << " " << (int)(b / a) * d << '\n';
        }
    }
    return 0;
}
