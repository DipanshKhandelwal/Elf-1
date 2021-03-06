#define _GNU_SOURCE // to avoid "implicit declaration of function `asprintf'"

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h> // for readdir
#include <fcntl.h> 
#include <ftw.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/unistd.h>
#include <sys/dir.h>
#include <sys/param.h>

int pwd() {
	char cwd[1024];
	if (getcwd(cwd, sizeof(cwd)) != NULL) //stores the value of current directory to cwd
		fprintf(stdout, "%s\n", cwd); 
	else
		perror("Null Pointer Error");
	return 0;
}