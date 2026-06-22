#include<stdio.h>
int main()
{
    int nationality, age;
    printf("Enter your nationality (1 for Indian, 0 for others): \n");
    scanf("%d", &nationality);

    printf("Enter your age: \n");
    scanf("%d", &age);

    if(nationality == 1 && age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}