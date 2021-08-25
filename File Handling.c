//[program that append multiple lines in a text file]


#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * text;
    char char1[200], char2[200], char3;
    int line, i;
//Ask user input file location
    printf("Input the file location : ");
    scanf("%s", &char1);

    text = fopen (char1, "a");
    if (text == NULL) {
        printf("Null");
        exit(1);
    }
//ask user how many lines appended
    printf("Input how many lines to be appended : ");
    scanf(" %d", &line);

    //scan and counts text
    for (i = 0; i < line; i++) {
        scanf("%s", &char2);
        fprintf(text, "%s\n", &char2);
    }
    fclose(text);

    //open
    text = fopen (char1, "r");
    char3 = fgetc(text);

    printf("\n\nInside of the %s\n", char1);
    while (char3 != EOF) {
        printf("%c", char3);
        char3 = fgetc(text);
    }

    fclose(text);
    return 0;
}
