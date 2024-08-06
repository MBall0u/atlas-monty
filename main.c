#include "monty.h"
/**
*
*
*
*/
int main(char *file_name)
{
	char buf[1024];
	size_t i;
	int (*my_func)(stack_t **, unsigned int);
	unsigned int line_num = 0;
	char *str, str_p;
	int global_int;
	stack_t *head = NULL;
	FILE *file = fopen(file_name, "r");
	if (file == NULL)
	{
		printf("Failed to open file.\n");
		exit(EXIT_FAILURE);
	}

	while (fgets(buf, sizeof(buf), file))
	{
		line_num++;
		i = strlen(buf);
		if (i > 0 && buf[i - 1] == '\n')
			buf[i - 1] = '\0';
		str = strtok_r(buf, " ", &str_p);
		my_func = get_func(str);
		if (my_func != NULL)
		{
			str = strtok_r(NULL, "$", &str_p);
			sscanf(str, "%d", &global_int);
			if (global_int != 0)
				my_func(&head, line_num);
		}
	}
}
