
#include <stdio.h>

int main() {
    int num, i;

    printf("Prime numbers from 1 to 100:\n");

    for (num = 2; num <= 100; num= num + 1) {
        for (i = 2; i < num; i= i+1) 
            if (num % i == 0) {
                break; // Not prime
            }
        

        if (i == num) {
            printf("%d\n", num);  // is prime
        }
    }

    return 0;
}     

