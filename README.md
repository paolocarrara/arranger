arranger
========

Manipulates the arguments received by main.

> void arrange_argv (int, char **, char *);

usage example:

> int main (int argc, char **argv)

> {

>>  /\*It will reorganize the argv in a way that the p parameter will come first, then the t parameter, then the k parameter...\*/

>>  /\*If some of these parameters weren't given, it will simply skip it, and try the next one.\*/

>>  arrange_argv (argc, argv, "ptkl");

> }

========

> void get_optarg (int, char **, char *);

usage example:

> int main (int argc, char **argv)

> {

>> char *argument;

>> /\*It will return the argument of the p parameter\*/

>> /\*If the parameter wasn't given, it will return NULL\*/

>> argument = get_optarg (argc, argv, 'p');

> }
