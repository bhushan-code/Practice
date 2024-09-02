#include<stdio.h>
int main()
{
    int side1 = 0, side2 = 2, Area = 0, Peri = 0;

    printf("Enter the first side of rectangle : ");
    scanf("%d", &side1);

    printf("Enter the second side of the rectangle : ");
    scanf ("%d", &side2);

    Area = side1 * side2;
    Peri = 2*side1 + 2*side2;

    printf("Are of the rectangle is : %d\n", Area);
    printf("Perimeter of the rectangle is : %d\n", Peri);

    return 0;

}