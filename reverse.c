#include<stdio.h>
void reverse()
{
    int i, j, k;
    char str[100];
    char rev[100];
    printf("\n\nEnter a string:\t");
    scanf("%s", str);
    printf("\nThe original string is %s\n", str);
    for(i = 0; str[i] != '\0'; i++);
    {
        k = i-1;
    }
    for(j = 0; j <= i-1; j++)
    {
        rev[j] = str[k];
        k--;
    }
    printf("\nThe reverse string is %s\n", rev);
}