#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "sbmem.h"

int main()
{
    int i, ret;
    char *p;
    printf("Hello\n");
    ret = sbmem_open();
    printf("as\n");

    if (ret == -1)
        exit (1);

    p = sbmem_alloc(256); // allocate space to hold 1024 characters


    for (i = 0; i < 256; ++i)
        p[i] = 'a'; // init all chars to ‘a’
    //sbmem_free (p);

    //sbmem_close();
    printf("%c", p[30]);
    //sbmem_remove();
    return (0);
}
