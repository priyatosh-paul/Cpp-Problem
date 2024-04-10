#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char* str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse a sentence by word
void reverseSentence(char* sentence) {
    int length = strlen(sentence);
    int start = 0;

    // Reverse the whole sentence
    reverseString(sentence, 0, length - 1);

    // Reverse each word individually
    for (int i = 0; i < length; i++) {
        if (sentence[i] == ' ') {
            reverseString(sentence, start, i - 1);
            start = i + 1;
        }
    }

    // Reverse the last word
    reverseString(sentence, start, length - 1);
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove trailing newline character
    if (sentence[strlen(sentence) - 1] == '\n')
        sentence[strlen(sentence) - 1] = '\0';

    // Reverse the sentence
    reverseSentence(sentence);

    printf("Reversed sentence: %s\n", sentence);

    return 0;
}
