#include <stdio.h>

void printPrimeFactors(int n) {
    int i;
    printf("Prime factors of %d are: ", n);
    
    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }
    
    for (i = 3; i * i <= n; i = i + 2) {
       
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
  
    if (n > 2) {
        printf("%d ", n);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printPrimeFactors(num);
    return 0;
}

