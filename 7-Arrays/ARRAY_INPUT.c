#include <stdio.h>
int main()
{
    int marks[4];

    printf("Enter the Marks for 1st Student: ");
    scanf("%d", &marks[0]);

    printf("Enter the Marks for 2nd Student: ");
    scanf("%d", &marks[1]);

    printf("Enter the Marks for 3rd Student: ");
    scanf("%d", &marks[2]);

    printf("Enter the Marks for 4th Student: ");
    scanf("%d", &marks[3]);

    printf("The marks are %d , %d , %d and %d \n", marks[0], marks[1], marks[2], marks[3]);

    return 0;
}