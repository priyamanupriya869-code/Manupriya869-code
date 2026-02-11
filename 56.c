//area of circle
#include <stdio.h>
#define PI 3.14159
struct Circle {
    float radius;
};
float calculateArea(struct Circle c) {
    return PI * c.radius * c.radius;
}
int main() {
    struct Circle c1;
    printf("Enter the radius of the circle: ");
    scanf("%f", &c1.radius);
    float area = calculateArea(c1);
    printf("Area of circle = %.2f\n", area);
return 0;
}

