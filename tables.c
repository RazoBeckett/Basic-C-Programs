/*
Made By Mayur Raut
To learn C Programming
17/01/2022
Last Edit By Author: 20/01/2022
*/

#include <stdio.h>

int main()
{

    // a variable is number which to be multiplied.
    int usr_input, exit;

    // Giving credits to me, 'YOU CAN ADD YOUR NAME INSTEAD FOR MINE'
    printf("All rights reserved - Mayur Raut 2022\n\n");

    // do is a loop statement.
    do
    {
        // Asking user for input.
        printf("which number's table you want?\nEnter 0 if want to exit\n");

        // 'scanf' is used for taking inputs from user.
        scanf("%d", &usr_input);

        // 'if' is is conditional statements
        if (usr_input == 0)
        {
            printf("exitting...");
            break;
        }
        printf("\nThe Table of %d is:\n", usr_input);

        // This code will represent table means this performs multiplication.
        printf("%d * 1  = %d\n", usr_input, usr_input * 1);
        printf("%d * 2  = %d\n", usr_input, usr_input * 2);
        printf("%d * 3  = %d\n", usr_input, usr_input * 3);
        printf("%d * 4  = %d\n", usr_input, usr_input * 4);
        printf("%d * 5  = %d\n", usr_input, usr_input * 5);
        printf("%d * 6  = %d\n", usr_input, usr_input * 6);
        printf("%d * 7  = %d\n", usr_input, usr_input * 7);
        printf("%d * 8  = %d\n", usr_input, usr_input * 8);
        printf("%d * 9  = %d\n", usr_input, usr_input * 9);
        printf("%d * 10 = %d\n\n", usr_input, usr_input * 10);

    } while (usr_input != 0);

    return 0;
}