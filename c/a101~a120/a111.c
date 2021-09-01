#include "stdio.h"

int main(int argc, char const *argv[]){
    int x;
    while (scanf("%d", &x)){
        if (x == 0){
            break;
        } else {
            printf("%d\n", (int)(x * (x + 1) * (2 * x + 1) / 6));
        }
    }
    return 0;
}
