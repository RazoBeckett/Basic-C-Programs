/*
Made By Mayur Raut
To learn C Programming
17/01/2022
*/

#include <stdio.h>

int main()
{

    // a variable is number which to be multiplied.
    int a;

    // exit is add to let the program remain open so user can read the tables.
    char exit;

    // Kudh Ko credits toh dena banta hai.
    printf("All rights reserved - MAYUR RAUT 2022\n\n");

    // questioning statement.
    printf("which number's table you want?\n");

    // scanf is used for taking inputs from user.
    scanf("%d", &a);

    printf("\nThe Table of %d is:\n", a);

    // This code will represent table means this performs multiplication.
    printf("%d * 1  = %d\n", a, a * 1);
    printf("%d * 2  = %d\n", a, a * 2);
    printf("%d * 3  = %d\n", a, a * 3);
    printf("%d * 4  = %d\n", a, a * 4);
    printf("%d * 5  = %d\n", a, a * 5);
    printf("%d * 6  = %d\n", a, a * 6);
    printf("%d * 7  = %d\n", a, a * 7);
    printf("%d * 8  = %d\n", a, a * 8);
    printf("%d * 9  = %d\n", a, a * 9);
    printf("%d * 10 = %d\n\n", a, a * 10);

    // Nothing just exiting text
    printf("Enter Any Digit Then Press Enter To Exit\n");

    // Exit Input
    scanf("%d", &exit);
    return 0;
}