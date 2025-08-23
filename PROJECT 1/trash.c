#include <stdio.h>
int main() {
    int n;
    char input[10];
    printf("Enter number = ");
    fflush(stdout);
    fgets(input, sizeof(input), stdin);  // Read as string first
    sscanf(input, "%d", &n);  // Then convert to int

    for (int i = 1; i <= n; i++) {
        printf("Hello world %d\n", i);
    }
    return 0;
}