typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#include <stdlib.h>


void ft_list_remove_if(t_list **lst, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	if (!lst || !*lst) return;

	if (!cmp((*lst)->next, data_ref))
	{
		tmp = *lst, *lst = (*lst)->next;
		free(tmp);
		ft_list_remove_if(lst, data_ref, cmp);
	}
	else ft_list_remove_if((*lst), data_ref, cmp);
}