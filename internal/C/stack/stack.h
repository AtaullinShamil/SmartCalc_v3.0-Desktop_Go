#ifndef STACK_H
#define STACK_H


#include <stdlib.h>

typedef struct s_list
{
    char			*content;
    struct s_list	*next;
}					t_list;

void    lstadd_front(t_list **lst, t_list *new);
char    *get_first(t_list **lst);
void    delete_first(t_list **lst);
t_list  *create_node(char *content);
int     ft_lstsize(t_list *lst);

#endif
