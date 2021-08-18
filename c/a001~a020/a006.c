#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    if (b * b - 4 * a * c < 0){
        printf("No real root");
    }
    if (b * b - 4 * a * c == 0){
        printf("Two same roots x=%d", (int)(-b / (2 * a)));
    }
    if (b * b - 4 * a * c > 0){
        double temp = sqrt(b * b - 4 * a * c);
        printf("Two different roots x1=%d , x2=%d", (int)((-b + temp) / (2 * a)), (int)((-b - temp) / (2 * a)));
    }
    return 0;
}
