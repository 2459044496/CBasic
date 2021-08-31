#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary being."

int main(void) {
    char name[40];

    printf("What's your name?");
    scanf("%s", name);

    printf("Hello, %s. %s\n", name ,PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);

    printf("The phrase of paraise has %zd letters ", strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);

    // What's your name?CuiPai
    // Hello, CuiPai. You are an extraordinary being.
    // Your name of 6 letters occupies 40 memory cells.
    // The phrase of paraise has 31 letters and occupies 32 memory cells.
    return 0;
}