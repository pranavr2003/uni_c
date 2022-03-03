#include <stdio.h>
#include <ctype.h>

int mult_str(char str[], int times) {    // Func that multiplies strings and prints it out

    for (int i = 1; i <= times; i++)
        printf(str);

return 0;    // I had lots of issues trying to return the string itself, concatenation
             // was also not possible due to some issues
             // Hence, I print the string out multiplied directly, into the terminal, 
             // and omit any newlines at the end so that the stars can be added 
             // immediately after that in isoTriangle()

}

int rightTriangle() {

//Qn. 1
// Function to take input and print a right angled triangle
// from the input - no of stars increase each row starting from 1

    int rows;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {

        for (int stars_to_print = 1; stars_to_print <= i; stars_to_print++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

int isoTriangle() {

// Qn. 2
// Function to take input and print an isosceles triangle
// from the input - no of stars increase each row starting from 1

    int rows;
    int spaces;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    spaces = rows;

    for (int i = 1; i <= rows; i++) {

        mult_str(" ", spaces);
        spaces--;                  // no of spaces decrease with each iteration - starting
                                   // with the no of rows

        for (int stars_to_print = 1; stars_to_print <= i; stars_to_print++) {
            
            printf("* ");
        }

        printf("\n");
    }

    return 0;

}

int rightTriangleNos() {

//Qn. 3
// Function to take input and print a right angled triangle of numbers

    int rows;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {

        for (int nos_to_print = 1; nos_to_print <= i; nos_to_print++) {
            printf("%d ", nos_to_print);
        }

        printf("\n");
    }

    return 0;
}

int fibSeries() {

// Qn. 4
// Func to print fibonacci number in that index
// Fibonacci numbers (according to the HW) - 1, 1, 2, 3, 5, 8, 13...
// Fib. nos. start from 0, but the HW specifies a1 as 1, hence I've started from 1

    int fib_index;
    int prev_fib_no = 1;
    int next_fib_no = 1;
    int new_fib_no;

    printf("Enter the Fibonacci number's index starting from 1: ");
    scanf("%d", &fib_index);

    for (int i = 2; i <= fib_index; i++) {

        // printf("%d, %d, %d\n", prev_fib_no, next_fib_no, new_fib_no);
        new_fib_no = prev_fib_no + next_fib_no;
        prev_fib_no = next_fib_no;
        next_fib_no = new_fib_no;
        
    }

    printf("The fibonacci number at that index is: %d \n", new_fib_no);

return 0;

}

int main() {
    
    rightTriangle();
    isoTriangle();
    rightTriangleNos();
    fibSeries();

    
    return 0;
}