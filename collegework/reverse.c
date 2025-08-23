#include <stdio.h>

int main() {
    int remainder, num, rev = 0;

    printf("Enter the number: ");
    scanf("%d", &num);
    int og = num;

    while (num != 0) {
        remainder = num % 10; // Get last digit
        rev = rev * 10 + remainder; // Append to reversed number
        num = num / 10; // Remove last digit
    }
    if(rev == og){
        printf("palindrome\n");
    }
    else{
        printf("not a palindrome");
    }
    printf("and the number is = %d",rev);

    // printf("Reversed number is %d\n", rev);
    return 0;
}
