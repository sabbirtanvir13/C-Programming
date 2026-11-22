#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of Sum N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Total Sum = %d\n", sum);

    return 0;
}
