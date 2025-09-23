#include <stdio.h>

int main() {
    float radius, height, volume;
    float pi = 3.14;

    // Input from user
    printf("Enter radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume
    volume = pi * radius * radius * height;

    // Output result
    printf("The volume of the cylinder is: %.2f\n", volume);

    return 0;
}
