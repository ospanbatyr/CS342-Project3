
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/mman.h>
#include <semaphore.h>

#include "sbmem.h"

int main()
{

    sbmem_init(32768);

    printf ("memory segment is created and initialized \n");

    return (0);
}
