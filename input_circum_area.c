#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float pi = 3.14;

float circum(float rad) {

float circumference = 2*pi*rad;
return circumference;

}

float ar(float rad) {

float area = pi*pow(rad, 2);
return area;

}


int main(void) {

float radius;

printf("Enter radius: ");
scanf("Enter dude! %f", &radius);

printf("\nThe circumference is: %f%s", circum(radius), "\n");
printf("The area is: %f%s", ar(radius), "\n");

return 0;

}
