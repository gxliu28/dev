/* echo2 - write characters to standard error
           Option: [-n] do not append newline
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	short nl = 1;

	if (argv[1] != NULL && strcmp(argv[1], "-n") == 0)
	{
		nl = 0;
		argc--;
		argv++;
	}

	while (--argc)
	{
		fputs(*++argv, stderr);
		if (argc > 1)
			putc(' ', stderr);
	}

	if (nl)
		putc('\n', stderr);

	exit(0);
}
