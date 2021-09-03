#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char buf[25];
    int map[92] = "                                                                  123 12  22455 12623 1 2 2";
    while (scanf("%s", buf) != EOF)
    {
        printf("%c", buf[0]);
        for (int i = 1; buf[i]; i++)
        {
            if (map[buf[i]] != ' ' || map[buf[i - 1]] != map[buf[i]])
            {
            }
        }
    }
    return 0;
}
