/*
Question 1
*/

#include <stdio.h>
#include <ctype.h>

int letterT() {

// Prints out the letter 'T'

printf("\n----------");
printf("\n    |     ");
printf("\n    |     ");
printf("\n    |     ");
printf("\n    |     ");
printf("\n    |     \n");

return 0;

}

int letterE() {

// Prints out the letter 'E'

printf("\n --------");
printf("\n |");
printf("\n |");
printf("\n --------");
printf("\n |");
printf("\n |");
printf("\n --------\n");

return 0;

}

int letterA() {

// Prints out the letter 'A'

printf("\n     /\\");               // Using an extra backslash as escape sequence
printf("\n    /  \\");
printf("\n   /    \\");
printf("\n  /------\\");
printf("\n /        \\");
printf("\n/          \\\n");

return 0;

}

// Func to handle input

void switch_handle_tea_inputs(char letter) {

    switch(letter) {

	case 'T':
	    letterT();
	    break;
	case 'E':
	    letterE();
	    break;
	case 'A':
	    letterA();
	    break;
	default:
	    printf("\nTakes in only one of the chars\n\n");
    }

}

void if_handle_tea_inputs(char letter) {

    if (letter == 'T') {

    letterT();

    }

    else if (letter == 'E') {

    letterE();

    }

    else if (letter == 'A') {

    letterA();

    }

    else {

    printf("\nTakes in only one of the chars\n\n");

    }


}

char if_switch () {

char input_if_switch;       // Input to use conditional/switch statements for execution

printf("\nEnter 'i' or 's' - \n'i' uses conditional st. to execute and 's' uses switch case: ");

scanf("%c", &input_if_switch); getchar();            // Multiple single char inputs (in int main()) don't work without getchar()
char upper_if_switch = toupper(input_if_switch);     // Lowercase to upper

return upper_if_switch;

}

char tea_input() {

char get_letter;      // Char input

printf("\nEnter one of the characters - 'T', 'E' or 'A': ");
scanf("%c", &get_letter); getchar();           // Multiple single char inputs (in int main()) don't work without getchar()
char upper_letter = toupper(get_letter);       // Converts any lowercase letter to upper

return upper_letter;

}

int main (void) {

char get_letter = tea_input();
char input_if_switch = if_switch();

if (input_if_switch == 'S') {

switch_handle_tea_inputs(get_letter);

}

else if (input_if_switch == 'I') {

if_handle_tea_inputs(get_letter);

}

else {

printf("\nOnly chars 'i' or 's' are accepted\n\n");

}

return 0;

}


/*

Question 2

Thorough and systematic
To the point
Thought provoking
Forming connections and thinking fundamentally

*/
