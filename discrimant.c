/*
Name : Shourya Srivastava
Section : CE
Roll NO : 2017377 (38)
*/
#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, D, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

   D= b * b - 4 * a * c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("root1 = %.2lf \nroot2 = %.2lf", root1, root2);
    }

    else if (D == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);
        printf("root1 = %.2lf+%.2lfi \nroot2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
}