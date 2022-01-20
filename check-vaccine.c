/*
Made By Mayur Raut
To learn C Programming 
18/01/2022
*/

#include<stdio.h>

int main(){
    int age, vaccine, exit;
    // credits.
    printf("All rights reserved - MAYUR RAUT 2022\n\n");
    // Title.
    printf("VACCINATION ONLY FOR 15 TO 18 AGE GROUP!!\n");
    //start.
    printf("What is your age?\n");
    scanf("%d", &age);
    // asking user to choose a vaccince.
    printf("\nWhich vaccine would you like to take?\n1)Covishield\n2)Covxin\nEnter 1 or 2 for prociding further\n");
    scanf("%d", &vaccine);
    // main switch case statements.
    switch (age)
    {
    case 15:
        printf("\nAge is 15, You can get vaccinated.\n");
        switch (vaccine)
        {
        case 1:
            printf("But, Covishield is not avaliable.\n");
            break;
        case 2:
            printf("Covxin is avaliable.\n\nRegister with your mobile number on www.cowin.gov.in\n\n");
            break;
        default:
            printf("You have press invalid number please try again by relaunching.\n");
            break;
        }
        break;
    case 16:
        printf("\nAge is 16, You can get vaccinated.\n");
        switch (vaccine)
        {
        case 1:
            printf("But, Covishield is not avaliable.\n");
            break;
        case 2:
            printf("Covxin is avaliable.\n\nRegister with your mobile number on www.cowin.gov.in\n\n");
            break;       
        default:
            printf("You have press invalid number please try again by relaunching.\n");
            break;
        }
        break;
    case 17:
        printf("\nAge is 17, You can get vaccinated.\n");
        switch (vaccine)
        {
        case 1:
            printf("But, Covishield is not avaliable.\n");
            break;
        case 2:
            printf("Covxin is avaliable.\n\nRegister with your mobile number on www.cowin.gov.in\n\n");
            break;
        default:
            printf("You have press invalid number please try again by relaunching.\n");
            break;
        }
        break;
    case 18:
        printf("\nAge is 18, You can get vaccinated.\n");
        switch (vaccine)
        {
        case 1:
            printf("But, Covishield is not avaliable.\n");
            break;
        case 2:
            printf("Covxin is avaliable.\n\nRegister with your mobile number on www.cowin.gov.in\n\n");
            break;
        default:
            printf("You have press invalid number please try again by relaunching.\n");
            break;
        }
        break;
    
    default:
        printf("sorry you cannot get vaccinated because you not comes in 15-18\n");
        break;
    }

    // text for exiting 
    printf("Enter Any Digit Then Press Enter To Exit\n");

    // Exit Input
    scanf("%d", &exit);
    
    return 0;
}