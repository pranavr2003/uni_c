#include <stdio.h>

int mult_str(char str[], int times) {    // Func that multiplies strings and prints it out

    for (int i = 1; i <= times; i++)
        printf(str);

return 0;    // I had lots of issues trying to return the string itself, concatenation with strcat()
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
// Fib. nos. start from 0, but the HW specifies it as 1, hence I've started from 1

    int fib_index;
    int prev_fib_no = 1;
    int next_fib_no = 1;
    int new_fib_no;

    printf("Enter the Fibonacci number's index starting from 1: ");
    scanf("%d", &fib_index);

    for (int i = 2; i <= fib_index; i++) {       // i = 2 and not 1 since the series starts
                                                 // from the next number

        // printf("%d, %d, %d\n", prev_fib_no, next_fib_no, new_fib_no);
        new_fib_no = prev_fib_no + next_fib_no;
        prev_fib_no = next_fib_no;
        next_fib_no = new_fib_no;
        
    }

    printf("The fibonacci number at that index is: %d \n", new_fib_no);

return 0;

}

int strEquality() {

// Qn. 5

// Function to check if two strings are exactly equal

    int len_str1;
    int len_str2;

    printf("Check if two strings are equal\nEnter length of string 1: ");
    scanf("%d", &len_str1); getchar();
    printf("Enter length of string 2: ");
    scanf("%d", &len_str2); getchar();

    if (len_str1 != len_str2) {
        printf("\nThese strings aren't equal\n");
    }

    else {

        char str1[len_str1];
        char str2[len_str2];

        int count = 0;

        printf("Enter string 1: ");
        scanf("%[^\n]s", &str1); getchar();
        // fgets(str1, len_str1, stdin);    // Doesn't work, needed scanset and getchar to skip newlines
        printf("Enter string 2: ");
        scanf("%[^\n]s", &str2); getchar();

        // printf("%c%c", str1, str2);

        for (int index = 0; index < len_str1; index++) {
            
            if (str1[index] == str2[index])
                count++;

        }

        // printf("%d", count);
        if (count == len_str1)
            printf("\n1");
        else
            printf("\n0");

    }

return 0;

}

void sortedArray() {

// Qn. 6

// Returns specified output for a sorted array

    int count;
    int index;
    int number;

    printf("Enter the number of integers: ");
    scanf("%d", &count);

    int number_array[count];

    for (int index = 0; index < count; index++) {
        printf("Enter the integers: ");
        scanf("%d", &number); getchar();
        
        number_array[index] = number;
    }
    // printf("%d", count);

    int count_asc = 0;
    int count_desc = 0;

    // for (int i = 0; i < count; i++)
    //     printf("%d\n", number_array[i]);

    for (int i = 0; i < count-1; i++) {

        int prev_num = number_array[i];
        int next_num = number_array[i+1];

        if (prev_num > next_num)
            count_desc ++;
        else if (prev_num < next_num)
            count_asc++;
        else if (prev_num == next_num) {
            printf("\nMultiple numbers you've entered are equal. By default, the first will be considered greater than the other");
            count_desc++;
        }

    }

    // printf("%d%d%d\n", count_asc, count_desc, count);

    if (count_asc == count-1)
        printf("1\n");
    else if (count_desc == count-1)
        printf("-1\n");
    else if ((count_asc && count_desc) > 0)
        printf("0\n");
    else
        printf("None\n");

}

void primes() {

// Qn. 7

// Prints the nth prime number

    int n;
    printf("Enter n for which the nth prime number will be printed: ");
    scanf("%d", &n);

    int prime_count = 0;
    int prime_number = 0;

    for (int i = 2; prime_count < n; i++) {

        int is_prime = 1;       // 1 if prime, 0 if not - boolean value

        for (int j = 2; j < i; j++) {

            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            prime_count++;
            prime_number = i;
        }
    }

    printf("%d\n", prime_number);

}

int main() {
    
    printf("Qn. 1\n");
    rightTriangle(); printf("\n");
    printf("Qn. 2\n");
    isoTriangle(); printf("\n");
    printf("Qn. 3\n");
    rightTriangleNos(); printf("\n");
    printf("Qn. 4\n");
    fibSeries(); printf("\n");
    printf("Qn. 5\n");
    strEquality(); printf("\n");
    printf("Qn. 6\n");
    sortedArray(); printf("\n");
    printf("Qn. 7\n");
    primes(); printf("\n");
    
    return 0;
}