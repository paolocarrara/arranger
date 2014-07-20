#include "../inc/arranger.h"

void arrange_argv (int argc, char **argv, char *argopt)
{
	char opt;
	int ndx, argopt_len;
	int i, j;

	argopt_len = strlen (argopt);

	for (i = 0, ndx = 1; i < argopt_len; i++) {
		opt = argopt[i];
		for (j = 1; j < argc; j++) {
			if (opt == argv[j][1]) {
				char *aux;
				aux = argv[ndx];
				argv[ndx] = argv[j];
				argv[j] = aux;
				ndx++;
				j = argc;
			}
		}

	}
}
