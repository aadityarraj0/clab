#include <stdio.h>

struct book
{
    char title[50];
    char author[50];
    int year;
};

int main()
{
    struct book b[100];
    int i, n;

    printf("Enter number of books: ");
    scanf("%d", &n);

    getchar();

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Book %d Details\n", i + 1);

        printf("Enter Title: ");
        fgets(b[i].title, sizeof(b[i].title), stdin);

        printf("Enter Author: ");
        fgets(b[i].author, sizeof(b[i].author), stdin);

        printf("Enter Year: ");
        scanf("%d", &b[i].year);

        getchar();
    }

    printf("\nBook Details\n");

    for (i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Title  : %s", b[i].title);
        printf("Author : %s", b[i].author);
        printf("Year   : %d\n", b[i].year);
    }

    return 0;
}