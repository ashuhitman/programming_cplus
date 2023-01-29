#include<stdio.h>
#include<conio.h>
int main()
{
    int days;
    float FINE_PER_DAY = 1;
    float total_fine;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    if (days > 30)
    {
        printf("Your membership would be canceled.\n");
    }
    total_fine = days * FINE_PER_DAY;
    printf("You have to pay Rs. %.2f fine.", total_fine);
    return 0;
}