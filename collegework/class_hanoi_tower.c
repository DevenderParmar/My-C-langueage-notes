#include <stdio.h>

// Function to move disks
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }

    // Move n-1 disks from source to auxiliary rod
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    // Move the remaining disk from source to destination
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);

    // Move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n; // Number of disks

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("\nThe sequence of moves involved in the Tower of Hanoi are:\n\n");
    towerOfHanoi(n, 'A', 'C', 'B'); // A = source, C = destination, B = auxiliary

    return 0;
}
