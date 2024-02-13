#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    char *word_eng = "developer";
    char *word_eng_upper = "Developer";
    char *word_ukr = "девелопер";
    char *word_ukr_upper = "Девелопер";
    int found_eng = 0;
    int found_ukr = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = 0;

    char *token = strtok(sentence, " ");
    while (token != NULL) {
        if (strcmp(token, word_eng) == 0 || strcmp(token, word_eng_upper) == 0 || strcasecmp(token, word_eng) == 0) {
            found_eng = 1;
        }
        if (strcmp(token, word_ukr) == 0 || strcmp(token, word_ukr_upper) == 0 || strcasecmp(token, word_ukr) == 0) {
            found_ukr = 1;
        }
        token = strtok(NULL, " ");
    }

    if (found_eng) {
        printf("The word \"developer\" is found in the input sentence.\n");
    } else {
        printf("The word \"developer\" is not found in the input sentence.\n");
    }

    if (found_ukr) {
        printf("Слово \"девелопер\" знайдено у введеному реченні.\n");
    } else {
        printf("Слово \"девелопер\" не знайдено у введеному реченні.\n");
    }

    return 0;
}
