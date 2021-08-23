#include <stdio.h>
#include <string.h>

int main(void) {
    int num;
    scanf("%d", &num);
    char ans[100], temp[100];
    for (int prime = 2; prime < num+1; prime++) {
        int times = 0;
        while (num % prime == 0) {
            times++;
            num /= prime;
        }
        if (times != 0){
            if (times > 1) {
                sprintf(temp, "%d^%d", prime, times);
                strcat(ans, temp);
            } else {
                sprintf(temp, "%d", prime);
                strcat(ans, temp);
            }
            if (num != 1) {
                sprintf(temp, "%s", " * ");
                strcat(ans, temp);
            }
        }
    }
    printf("%s\n", ans);
    return 0;
}