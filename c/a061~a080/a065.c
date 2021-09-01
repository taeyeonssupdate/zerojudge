#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char ch[7];
    while (scanf("%s", ch) != EOF)
    {
        printf(
            "%d%d%d%d%d%d\n",
            abs(ch[0] - ch[1]),
            abs(ch[1] - ch[2]),
            abs(ch[2] - ch[3]),
            abs(ch[3] - ch[4]),
            abs(ch[4] - ch[5]),
            abs(ch[5] - ch[6])
        );
    }
    return 0;
}