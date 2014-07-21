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

char *get_optarg (int argc, char **argv, char opt)
{
	char *opt_p = NULL;
	int i;

	for (i = 0; i < argc; i++) {
		if (opt == argv[i][1]) {
			opt_p = malloc ( (strlen (argv[i])-1) * sizeof (char) );
			memcpy (opt_p, argv[i]+2, strlen (argv[i])-1);
			i = argc;
		}
	}

	return opt_p;
}
