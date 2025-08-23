#include <stdio.h>

char* slice(char str[], int m, int n) {
    static char sliced[100];  // Static array to preserve data after function return
    int i = 0;

    // Copy the substring from str[m] to str[n]
    for (int j = m; j <= n; j++) {
        sliced[i] = str[j];
        i++;
    }

    // Null-terminate the sliced string
    sliced[i] = '\0';

    return sliced;
}

int main() {
    char string[100];
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    printf("The sliced string: %s", slice(string, 2, 5));
    return 0;
}
