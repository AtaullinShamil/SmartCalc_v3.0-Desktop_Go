#include "tokens.h"

char **get_tokens(char *arr) {
    char **result;

    result = ft_split(arr, ' ');
    return (result);
}


