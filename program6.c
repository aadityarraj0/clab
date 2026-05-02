#include <stdio.h>
#include <string.h>

int main ()
{
    char course [100];
    char key [20];

    printf("Enter course: ");
    // read full sentence
    gets (course) ;

    printf("Enter keyword: ");
    scanf ("%s", key) ;

    if (strstr(course, key) )
        printf ("Keyword '%s' found in the course description.\n", key) ;
    else
        printf ("Keyword '%s' not found in the course description.\n", key);

    return 0;


}