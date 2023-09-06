#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	FILE *file;
	char ch[100];

	file = fopen("text.txt", "r");
	if (file == NULL) {
        printf("Error: Could not open file 'text.txt'\n");
        return 1;
    }
	printf("%s\n", fgets(ch, 10, file));
	fclose(file);
	return (0);
}
