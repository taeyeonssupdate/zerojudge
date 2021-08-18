#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    for (int range = scanf("%d", &range); range >= 0; --range){
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (d - c == b - a){
            printf("%d %d %d %d %d\n", a, b, c, d, (b - a + d));
        } else {
            printf("%d %d %d %d %d\n", a, b, c, d, (int)(b / a) * d);
        }
    }
    return 0;
}
