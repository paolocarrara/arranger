#include "../inc/arranger.h"

char **arrange (int argc, char **argv, char *argopt)
{
	char **ordered_argv = NULL;
	int i;

	ordered_argv = malloc ( argc*sizeof (char *) );

	ordered_argv[0] = malloc ( ( strlen ( argv[0])+1 )*sizeof(char) );

	for (i = 0; i < argc; i++) {
		ordered_argv[i] = malloc ( (strlen(argv[i])+1)*sizeof (char) );
	}

	return ordered_argv;
}
