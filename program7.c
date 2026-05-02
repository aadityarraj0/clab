#include <stdio.h>
int checkPass (int a, int b, int c)
{
    return (a >= 40 && b >= 40 && c >= 40);
}
int main ()
{
    int a, b, c;
    float avg;

    printf ("Enter marks: ");
    scanf ("%d %d %d", &a, &b, &c) ;

    avg = (a + b + c) / 3.0;
    printf("Average = %.2f\n", avg);

    if (checkPass (a, b, c))
        printf ("PASS\n");
    else
        printf("FAIL\n");
    return 0;
}

