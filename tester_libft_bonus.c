#include <stdio.h>
#include "../libft.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void del_one(void *content)
{
	((char *)(content))[0] = '\0';
}

void iter_lst(void *content)
{
	int i;
	
	i = 0;
	while (((char *)(content))[i])
	{
		((char *)(content))[i] += 2;
		i++;
	}
	
}		

int	main(int argc, char* argv[])
{
	t_list *head;
	char test_first[2] = "1";
	char test_second[4] = "22";
	char test_third[6] = "333";
	char test_fourth[10] = "4444";
	char test_fith[10] = "55555";
	printf("Start Tests\n");
	printf("*****\n");
	printf("Testing ft_lstnew\n");
	t_list *test_lstfirst = ft_lstnew(test_first);
	t_list *test_lstsecond = ft_lstnew(test_second);
	t_list *test_lstthird = ft_lstnew(test_third);
	t_list *test_lstfourth = ft_lstnew(test_fourth);
	t_list *test_lstfith = ft_lstnew(test_fith);
	head = test_lstsecond;
	if ((test_lstsecond->next == NULL) && (((char *)(test_lstsecond->content))[1] == '2'))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_lstadd_front\n");
	ft_lstadd_front(&head, test_lstfirst);
	if ((head->next->next == NULL) && !(head->next == NULL) && (((char *)(head->next->content))[1] == '2')
		&& (((char *)(head->content))[0] == '1'))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_lstadd_back\n");
	ft_lstadd_back(&head, test_lstthird);
	if ((head->next->next->next == NULL) && !(head->next->next == NULL) && (((char *)(head->next->next->content))[1] == '3')
		&& (((char *)(head->content))[0] == '1'))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");

	printf("*****\n");
	printf("Testing ft_lstsize\n");
	if (ft_lstsize(head) == 3)
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_lstlast\n");
	if ((ft_lstlast(head)->next == NULL) && (((char *)(ft_lstlast(head)->content))[1] == '3'))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");

	ft_lstadd_back(&head, test_lstfourth);
	ft_lstadd_back(&head, test_lstfith);
	printf("*****\n");
	printf("Testing ft_lstclear\n");
	ft_lstclear(&head->next->next->next, del_one);
	if ((ft_lstsize(head) == 3) && (head->next->next->next == NULL) && (((char *)(ft_lstlast(head)->content))[1] == '3'))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	
	printf("*****\n");
	printf("Testing ft_lstiter\n");
	ft_lstiter(ft_lstlast(head), iter_lst);
	if (((char *)(ft_lstlast(head)->content))[1] == '5')
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");

	if (!((argc > 1) && !(ft_memcmp(argv[1], "exclude_delone", 14))))
	{
		printf("*****\n");
		printf("Testing ft_delone\n");
		ft_lstdelone(head->next, del_one);
		if (head)
			printf("OK\n");
		else
			printf("KO :(     <------------------------------------------------\n");
		free(test_lstfirst);
	}
	else 
	{
		printf("*****\n");
		printf("ft_lstdelone() not checked\n");
		free(test_lstfirst);
		free(test_lstthird);
		free(test_lstsecond);
	}
		
	return (0);
}