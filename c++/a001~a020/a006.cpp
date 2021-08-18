#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){
    double a, b, c;
    cin >> a >> b >> c;
    if (b * b - 4 * a * c < 0){
        cout << "No real root";
    }
    if (b * b - 4 * a * c == 0){
        cout << "Two same roots x="<< (int)(-b / (2 * a));
    }
    if (b * b - 4 * a * c > 0){
        double temp = sqrt(b * b - 4 * a * c);
        cout << "Two different roots x1=" << (int)((-b + temp) / (2 * a)) << " , x2=" << (int)((-b - temp) / (2 * a));
    }
    return 0;
}
