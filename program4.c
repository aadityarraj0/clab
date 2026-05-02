#include <stdio.h> 
#include <math.h> 
int main() 
{ 
    float a, b, c, root1, root2, disc, real, imag; 
    printf("Enter coefficients of quadratic equation (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c); 
    if (a == 0 && b == 0) 
    { 
        printf("Invalid Coefficients!\n"); 
    } 
    else if (a == 0) 
    { 
        // Linear equation bx + c = 0 
        root1 = -c / b; 
        printf("Linear Equation with root: %.2f\n", root1); 
    } 
    else 
    { 
        // Quadratic equation 
        disc = b * b - 4 * a * c; 
        printf("Discriminant = %.2f\n", disc); 
        if (disc > 0) 
        { 
            root1 = (-b + sqrt(disc)) / (2 * a); 
            root2 = (-b - sqrt(disc)) / (2 * a); 
            printf("Two distinct real roots: %.2f and %.2f\n", root1, root2); 
        } 
        else if (disc == 0) 
        { 
            root1 = -b / (2 * a); 
            printf("One real root: %.2f\n", root1); 
        } 
        else 
        { 
            real = -b / (2 * a); 
            imag = sqrt(-disc) / (2 * a); 
            printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n", real, imag, real, imag); 
        } 
    } 
    return 0; 
}