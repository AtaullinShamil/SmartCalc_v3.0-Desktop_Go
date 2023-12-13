#include "calculate.h"

// Основная функция
double calculate(char *arr) {
	char **tokens = get_tokens(arr);

    int i = 0;
    while (tokens[i] != NULL) {
        printf("%d - %s\n", i, tokens[i]);
        i++;
    }

    return (i);
}
