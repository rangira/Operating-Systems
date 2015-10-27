/* xsh_reset.c - xsh_reset */

#include <xinu.h>
#include <stdio.h>

/*------------------------------------------------------------------------
 * xhs_reset - resets XINU
 *------------------------------------------------------------------------
 */
shellcmd xsh_reset(int nargs, char *args[])
{

	if (nargs == 2 && strncmp(args[1], "--help", 7) == 0) {
		printf("Usage: %s\n\n", args[0]);
		printf("Description:\n");
		printf("\tMy First XINU Command\n");
		printf("Options (one per invocation):\n");
		printf("\t-f\t Write only one argument\n");
		return 0;
	}

	if(nargs == 1){
		volatile uint32 *prm_rstctrl = (volatile uint32 *) 0x44E00F00;
		*prm_rstctrl = 0x01;
	}
		
	else {
		printf("Too many arguments\n");
		return 1;
	}
}
