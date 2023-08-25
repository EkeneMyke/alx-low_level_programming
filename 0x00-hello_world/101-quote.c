#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *Description: Using the fprintf function
 *Return: Returns 1 (success)
 */

int main ()
{
	FILE * fp;

	fp = fopen ("file.txt", "w+");
	fprintf((fp, "%s %s %s %s %s %s %s %s %s %s %s %s %d", "and", "that", \
		 "piece", "of", "art", "is", "useful","-", "Dora","Korpar",\,
		 (2015-10-19));

	fclose(fp);

	return(1);
}
