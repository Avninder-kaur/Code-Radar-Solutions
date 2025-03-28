#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {  // Loop for rows
        for (int j = i; j >= 1; j--) {  // Loop for reverse numbers in the current row
            printf("%d ", j);
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}