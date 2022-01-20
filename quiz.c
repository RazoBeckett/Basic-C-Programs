// Made By Mayur Raut
// To learn C Programming 
// 17/01/2022

#include <stdio.h>

int main()
{
    int passed;
    printf("All rights reserved - MAYUR RAUT 2022\n\n");
    printf("Which Exam You have passed? Maths , science or both\n\n");
    printf("Press 1 if you have passed both \nPress 2 if you have just passed 1anyone of them\nPress 0 if you haven't passed anyone \nThen Press ENTER\n");
    scanf("%d", &passed);

    if (passed == 1)
    {
        // Agar tuhne dono pass kiye hai toh ye dikha yega.
        printf("\nYou Got 45 rs gift.\a");
    }
    else if (passed == 2)
    {
        // Agar tuhne dono maise sirf ek pass kiya toh ye dikha yega.
        printf("\nYou got 15 rs gift.\a");
    }
    else
    {
        // Agar dono mai fail ho toh ye dikha yega.
        printf("\nSorry, No gifts for you.\a");
    }


    return 0;
}