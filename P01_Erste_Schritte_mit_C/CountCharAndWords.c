#include <stdio.h>

int main()  {
    int lineamount;

    printf("Welcome to the char & word counter!\n");
    printf("Please enter the amount of lines you want to count. \n");
    scanf("%d", &lineamount); // Scan the lineamout of the user

    getchar(); // clears the enter, which is in the buffer



    for (int i = 0; i < lineamount; ++i) {

        int chars = 0;
        int words = 0;
        int inWord = 0;
        char c;

        while ((c = getchar()) != '\n'){
            chars++;

            if (c != ' ' && c != '\t') {
                if (!inWord) {
                    words++;
                    inWord = 1;
                }
            } else {
                inWord = 0;
            }

        }

        printf("Line %d: %d Chars, %d Words\n", i + 1, chars, words);
    }
    
    return 0;
}