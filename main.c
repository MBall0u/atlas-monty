#include "main.h"
/**
*
*
*
*/
int main(char *file_name)
{
	int line_num = 0;
	FILE *file = fopen(file_name, "r");
	if (file == NULL)
	{
		printf("Failed to open file.\n");
		exit(EXIT_FAILURE);
	}
}
