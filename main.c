#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <semaphore.h>
#include <fcntl.h>
#include <sys/stat.h>


int main (int c, char **v)
{
	const char *fn = "/test.sem";
	sem_unlink(fn);

	sem_t *sem = sem_open(fn, O_CREAT, 0666,66);
	//unlock
	// sem_post(sem);
	


	return 0;
}
