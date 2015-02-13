/* Marlies Ruck (mruck)
 * 
 * CTF Problem 1
 * 2/12/15
 */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_LEN 64
#define MAX_LOG 512

int main(int argc, char **argv){
	char syslog[MAX_LOG];
	char user[MAX_LEN];
	int password;
	int secret;

	/* Initialize random seed */
	srand(time(NULL));

	/* Get the password */
	secret = rand();

	/* Prompt user for the username */
	printf("Username:\n");
	read(0,user,MAX_LEN); 

	/* Prompt user for the password */
	printf("Password:\n");
	scanf("%d", &password);
	
	if (password == secret){
		/* You win! */
		printf("Welcome %s\n", user);
	}
	else {
		/* You lose */
		printf("Access denied\n");

		/* Record failed logins */
		sprintf(syslog, user);
	}

	return 0;
}
