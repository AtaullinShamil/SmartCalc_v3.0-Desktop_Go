#include "calculate.h"

int size(char **arr) {
    int i = 0;

    for (arr[i]) {
        i++;
    }
    return (i)
}

// Основная функция
double calculate(char *arr) {
	char **tokens = get_tokens(arr);

    t_list *a = NULL; // for digits
    t_list *b = NULL; // for operations

    int i = 0;
    int len = size(tokens);

    while (i < len){
        if (strcmp(tokens[i], "(") == 0) {
            t_list *new_node = create_node(tokens[i]);
            lstadd_front(&b, new_node);
        }
        if (strcmp(tokens[i], ")") == 0) {
            t_list *new_node = create_node(tokens[i]);
            lstadd_front(&b, new_node);
        }
        if (strcmp(tokens[i], "+") == 0) {
            t_list *new_node = create_node(tokens[i]);
            lstadd_front(&b, new_node);
        }
        if (strcmp(tokens[i], "-") == 0) {
            t_list *new_node = create_node(tokens[i]);
            lstadd_front(&b, new_node);
        }
        if (strcmp(tokens[i], "/") == 0) {
            t_list *new_node = create_node(tokens[i]);
            lstadd_front(&b, new_node);
        }
        if (strcmp(tokens[i], "*") == 0) {
            t_list *new_node = create_node(tokens[i]);
            lstadd_front(&b, new_node);
        }
        t_list *new_node = create_node(tokens[i]);
        lstadd_front(&a, new_node);

        i++;
    }

    return (0);
}



//double calculate(char *arr) {
//    char **tokens = get_tokens(arr);
//
//    int i = 0;
//    while (tokens[i] != NULL) {
//        printf("%d - %s\n", i, tokens[i]);
//        i++;
//    }
//
//    t_list *stack = NULL;
//
//    i = 0;
//    while (tokens[i] != NULL) {
//        t_list *new_node = create_node(tokens[i]);
//        lstadd_front(&stack, new_node);
//        i++;
//    }
//
//    t_list *next = stack;
//    while (next != NULL) {
//        printf("%s - %p\n", next->content, next->next);
//        next = next->next;
//    }
//
//    return (i);
//}
