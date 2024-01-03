#include "stack.h"

void	lstadd_front(t_list **lst, t_list *new) {
    if (lst && new)
    {
        new -> next = *lst;
        *lst = new;
    }
}

char *get_first(t_list **lst) {
    if (lst) {
        return ((*lst)->content);
    } else {
        return (NULL);
    }
}

void delete_first(t_list **lst) {
    t_list *second;
    t_list *first;

    second = (*lst)->next;
    first = *lst;
    *lst = second;
    free(first);
}

t_list *create_node(char *content) {
    t_list *new_node = malloc(sizeof(t_list));
    if (!new_node) {
        return NULL;
    }
    new_node->content = content;
    new_node->next = NULL;

    return new_node;
}

int	ft_lstsize(t_list *lst){
    int	i;

    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}

