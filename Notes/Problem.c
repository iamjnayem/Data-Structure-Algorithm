#include <stdio.h>
#include <stdbool.h>

#define MAX_WORD_LENGTH 20 // Define the maximum length of words to track

int main() {

    //26-9-2024
//Problem : 1. Write a program to print a histogram of the lengths of words 
//in its input. Print histogram of the word length.
 
    int c; // Use 'int' to handle EOF correctly
    int wordlen = 0; // To track the length of the current word
    bool inside_word = false; // To check if we're currently in a word
    int length_count[MAX_WORD_LENGTH + 1] = {0}; // Array to count lengths

    // Loop through characters until EOF
    while ((c = getchar()) != EOF) {
        // Check for whitespace characters
        if (c == ' ' || c == '\n' || c == '\t') {
            if (inside_word) {
                // If we were inside a word, count its length
                if (wordlen <= MAX_WORD_LENGTH) {
                    length_count[wordlen]++; // Increment the count for this length
                }
                inside_word = false; // We are now outside a word
                wordlen = 0; // Reset word length for the next word
            }
        } else {
            // If it's a non-whitespace character, we're inside a word
            inside_word = true; // We're in a word now
            wordlen++; // Increment the word length
        }
    }

    // Handle the case where input ends without a trailing space/newline
    if (inside_word) {
        if (wordlen <= MAX_WORD_LENGTH) {
            length_count[wordlen]++; // Count the last word
        }
    }

    // Print the histogram
    printf("\nWord Length Histogram:\n");
    for (int i = 1; i <= MAX_WORD_LENGTH; i++) {
        if (length_count[i] > 0) {
            printf("%2d: ", i); // Print the word length
            for (int j = 0; j < length_count[i]; j++) {
                printf("*"); // Print asterisks for each occurrence
            }
            printf("\n"); // New line after each length
        }
    }

    return 0; // End of program
}
