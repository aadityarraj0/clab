#include <stdio.h>

// Call by Value
void swapValue(float a, float b)
{
    float temp;

    temp = a;
    a = b;
    b = temp;

    printf("\nInside Call by Value (Preview Swap):\n");
    printf("Currency1 = %f\n", a);
    printf("Currency2 = %f\n", b);
}

// Call by Reference
void swapReference(float *a, float *b)
{
    float temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("\nInside Call by Reference (Actual Swap):\n");
    printf("Currency1 = %f\n", *a);
    printf("Currency2 = %f\n", *b);
}

int main()
{
    float usd, eur;

    printf("Enter USD amount: ");
    scanf("%f", &usd);

    printf("Enter EUR amount: ");
    scanf("%f", &eur);

    printf("\nOriginal Values:\n");
    printf("USD = %f\n", usd);
    printf("EUR = %f\n", eur);

    // Call by Value
    swapValue(usd, eur);

    printf("\nAfter Call by Value (Original values unchanged):\n");
    printf("USD = %f\n", usd);
    printf("EUR = %f\n", eur);

    // Call by Reference
    swapReference(&usd, &eur);

    printf("\nAfter Call by Reference (Original values changed):\n");
    printf("USD = %f\n", usd);
    printf("EUR = %f\n", eur);

    return 0;
}