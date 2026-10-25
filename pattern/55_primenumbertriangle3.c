#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        int num = 2, count = 0;
        while (count < i) {
            int isPrime = 1;
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                printf("%d ", num);
                count++;
            }
            num++;
        }
        printf("\n");
    }
}
