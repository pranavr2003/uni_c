#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double pi = 3.14;

float circum(float radius) {

float circumference =  2*pi*radius;
return circumference;

}

float area(float radius) {

float area =  pow(radius, 2) * pi;
return area;

}

int main(void) {

printf("Circumference when radius is 5: %f", circum(5));
printf("\nArea when radius is 5: %f%s", area(5), "\n");

return 0;

}
