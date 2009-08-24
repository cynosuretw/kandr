/*
 * ex1.9.c
 *
 *  Created on: 2009/8/20
 *      Author: lab308
 */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);

/*print longest input line */
int main(int argv, char **arg[])
{
	int len;
	extern int max;
	extern char logest[MAXLINE];

	max = 0;
	while ((len = getline()) >0 )
		if (len >max) {
			max = len;
			copy();
		}
	if (max > 0)
		printf("%s",longest);
	return 0;
}

/* getline: read a line into s, return length */
int getline(void)
{
	int c, i;

	extern char line[MAXLINE];
	
	for ( i=0; i<MAXLINE-1 && ( c = getchar() )!=EOF && c!='\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[i]= c;
		++i;
	}
	line[i]='\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(void)
{
	int i;
	extern char line[MAXLINE], longest[MAXLINE];

	i = 0;
	while ((longest[i]=line[i]) != '\0')
		++i;
}
