#include <stdio.h>

int main(int argc, char const *argv[]){
    char c;
    while (scanf("%c", &c) != EOF){
        printf("%c", (char)(c - 7));
    }
    return 0;
}
