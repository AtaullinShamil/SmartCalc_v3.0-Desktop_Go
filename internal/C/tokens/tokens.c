#include "tokens.h"

int number_of_tokens(char *arr) {
    int i;
    int count = 0;
    int len = strlen(arr);

    for (i = 0; i < len; i++) {
        if (arr[i] >= '0' && arr[i] <= '9') {
            while ((i < len) && (arr[i] >= '0' && arr[i] <= '9') || (arr[i] == '.')) {
                i++;
            }
            i--;
            count++;
            continue;
        }
        if (arr[i] == '+' || arr[i] == '-' || arr[i] == '/' || arr[i] == '*' || \
                arr[i] == '^' || arr[i] == '(' || arr[i] == ')') {
            count++;
            continue;
        }
        if (arr[i] == 'm') {
            i +=2;
            count++;
            continue;
        }
        while (i < len && arr[i] != '(') {
            i++;
        }
        i--;
        count++;
        continue;
    }
    return (count);
}

char **get_tokens(char *arr) {
    char **result =  malloc(sizeof(char *) * number_of_tokens(arr));
    int i;
    int j = 0;

    int start;
    int finish;
    char *token;

    int ln = strlen(arr);

    int temporary;

    for (i=0; i<ln; i++) {
        if (arr[i] >= '0' && arr[i] <= '9') {
            start = i;
            finish = i;
            while ((finish < ln) && (arr[finish] >= '0' && arr[finish] <= '9') || (arr[finish] == '.')) {
                finish++;
            }
            token = malloc(sizeof(char) * (finish - start));
            temporary = 0;
            for (;start < finish; start++){
                token[temporary] = arr[start];
                temporary++;
            }
            result[j] = token;
            j++;
            i = finish - 1;
            continue;
        }
        if (arr[i] == '+' || arr[i] == '-' || arr[i] == '/' || arr[i] == '*' || \
                arr[i] == '^' || arr[i] == '(' || arr[i] == ')') {
            token = malloc(sizeof(char));
            token[0] = arr[i];
            result[j] = token;
            j++;
            continue;
        }
        if (arr[i] == 'm') {
            token = malloc(sizeof(char) * 3);
            token[0] = 'm';
            token[1] = 'o';
            token[2] = 'd';
            result[j] = token;
            j++;
            i +=2;
            continue;
        }
        start = i;
        finish = i;
        while ((finish < ln) && (arr[finish] != '(')) {
            finish++;
        }
        token = malloc(sizeof(char) * (finish - start));
        temporary = 0;
        for (;start < finish; start++){
            token[temporary] = arr[start];
            temporary++;
        }
        result[j] = token;
        j++;
        i = finish - 1;
        continue;
    }
    return result;
}


