#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    long long int a, b;
    while (scanf("%lld %lld", &a, &b) != EOF){
        printf("%lld\n", llabs(a - b));
    }
    return 0;
}
