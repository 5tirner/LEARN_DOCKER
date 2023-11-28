#include <stdio.h> 
#include <stdlib.h>
typedef struct a
{
    char *string;
    struct a *next;
} t_a;

void dle(void *test)
{
    free(test);
}
void    func(t_a *list, void (*del)(void *))
{
    if (list)
    {
        del(list->string);
        free(list);
    }
}

void print(char a)
{
    printf("%c\n", a - 32);
}
void    addBack(t_a *list, char *val)
{
    t_a *test;
    test = malloc(sizeof(t_a));
    test->string = val;
    test->next = NULL;
    if (!(list))
    {
        list = test;
    }
    else
    {
        t_a *ptr = list;
        while ((list)->next)
            (list) = (list)->next;
        (list)->next = test;
        list = ptr;
    }
}

int main()
{
    t_a *list;
    addBack(list, "node1");
    addBack(list, "node2");
    addBack(list, "node3");
    addBack(list, "node4");
    addBack(list, "node1");
    addBack(list, "node2");
    addBack(list, "node3");
    addBack(list, "node4");
    while (list)
    {
        printf("%s\n", list->string);
        list = list->next;
    }
    int (*ptr)(const char *s, ...) = &printf;
    (ptr)("%d\n%s\n%p\n%p", 42, "test", &printf, ptr);
}