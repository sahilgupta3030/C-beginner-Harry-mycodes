#include <stdio.h>
int main()
{
    int i;
    int marks[4];
    int *ptr = &marks[0];

    for (i = 0; i < 4; i++)
    {
        printf("the marks for the student %d: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (i = 0; i < 4; i++)
    {
        printf("The marks for the student %d is %d \n", i + 1, marks[i]);
        }

    return 0;
}