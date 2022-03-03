#include <stdio.h>

int main() {

char greetings[5] = {'H', 'E', 'L', 'L', 'O'};

//print each letter in array greetings
for (int i = 0; i < 5; i++)
{
    printf("%c", greetings[i]);
}

return 0;
}