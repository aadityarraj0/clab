#include <stdio.h>

int main()
{
    char first[50], last[50], full[100];
    int i = 0, j = 0, length = 0;

    printf("Enter First Name: ");
    scanf("%s", first);

    printf("Enter Last Name: ");
    scanf("%s", last);

    while (first[i] != '\0')
    {
        full[i] = first[i];
        i++;
    }

    full[i] = ' ';
    i++;

    while (last[j] != '\0')
    {
        full[i] = last[j];
        i++;
        j++;
    }

    full[i] = '\0';

    while (full[length] != '\0')
    {
        length++;
    }

    printf("\nFull Name: %s", full);
    printf("\nLength: %d", length);

    if (length <= 20)
        printf("\nName fits the screen");
    else
        printf("\nName does not fit the screen");

    return 0;
}