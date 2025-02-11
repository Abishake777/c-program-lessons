#include <stdio.h>
#include <stdlib.h>

void findChange(int amount, int denominations[], int size) {
    for (int i = 0; i < size; i++) {
        int count = amount / denominations[i];
        if (count > 0) {
            printf("%d x %d\n", count, denominations[i]);
            amount %= denominations[i];
        }
    }
}
int main() {
    int amount, size;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    printf("Enter the number of denominations: ");
    scanf("%d", &size);
    int *denominations = (int *)malloc(size * sizeof(int));
    printf("Enter the denominations:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &denominations[i]);
    }
    findChange(amount, denominations, size);
    free(denominations);
    return 0;
}

