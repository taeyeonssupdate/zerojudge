#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count;
    scanf("%d", &count);
    for (; count > 0; count--)
    {
        char dot;
        int x1, y1, x2, y2, x3, y3;
        scanf("%d%c%d %d%c%d %d%c%d", &x1, &dot, &y1, &x2, &dot, &y2, &x3, &dot, &y3);
        x2 -= x1;
        x3 -= x1;
        y2 -= y1;
        y3 -= y1;
        if (x2 * y3 - x3 * y2 != 0)
        {
            printf("not collinear\n");
        }
        else
        {
            printf("collinear\n");
        }
    }
    return 0;
}
