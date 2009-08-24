/*
 * ex1.9.c
 *
 *  Created on: 2009/8/20
 *      Author: lab308
 */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getline(char [], int maxline);
void copy(char to[], char from[]);

/*print longest input line */
main()
{
	int len;
	int max;
	char line[MAXLINE];
	char logest[MAXLINE];

	max = 0;
	while ((len = getline(line, MAXLINE)) >0 )
		if (len >max) {
			max = len;
			copy(logest, line);
		}
	if (max > 0)
		printf("%s",logest);
	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i;

	for ( i=0; i<lim-1 && ( c = getchar() )!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i]= c;
		++i;
	}
	s[i]='\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i]=from[i]) != '\0')
		++i;
}
