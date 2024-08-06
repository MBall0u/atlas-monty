#include "monty.h"
int global_int;
/**
*
*
*
*/
int main(int argc, char **argv)
{
	char buf[1024];
	size_t i;
	void (*my_func)(stack_t **, unsigned int);
	unsigned int line_num = 0;
	char *str, *str_p, *str2;
	int global_int;
	stack_t *head = NULL;
	FILE *file;
	if (argc == 0 || argc > 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((fgets(buf, sizeof(buf), file)) != NULL)
	{
		line_num++;
		i = strlen(buf);
		if (i > 0 && buf[i - 1] == '\n')
			buf[i - 1] = '\0';
		str = strtok_r(buf, " ", &str_p);
		my_func = get_func(str);
		if (my_func != NULL)
		{
			str2 = strtok_r(NULL, " $\n", &str_p);
			sscanf(str2, "%d", &global_int);
			if (global_int == 0)
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", line_num, str);
			}
			else
				my_func(&head, line_num);
		}
	}
	fclose(file);
	free_list(&head);
	head = NULL;
}
