/* xsh_hello.c - xsh_hello */

#include <xinu.h>
#include <stdio.h>

/*------------------------------------------------------------------------
 * xhs_hello - write argument strings to stdout
 *------------------------------------------------------------------------
 */
shellcmd xsh_hello(int nargs, char *args[])
{

	if (nargs == 2 && strncmp(args[1], "--help", 7) == 0) {
		printf("Usage: %s\n\n", args[0]);
		printf("Description:\n");
		printf("\tMy First XINU Command\n");
		printf("Options (one per invocation):\n");
		printf("\t-f\t Write only one argument\n");
		return 0;
	}

	if(nargs < 2){
		printf("Too less arguments\n");
		return 1;
	}
	else if (nargs == 2){
		printf("%s, Welcome to world of XINU!!\n", args[1]);
		return 0;
	}
	else {
		printf("Too many arguments\n");
		return 1;
	}
}
