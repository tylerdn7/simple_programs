/**
** Removes A File
** Ahasanul Basher Hamza
** Date: 01/06/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
    int return_value;
    char *filename = "abc.txt";

    return_value = remove(filename);

    if(return_value != 0)
    {
        perror("File Remove Failed\n");
        return 1;
    }
    printf("%s removed successfully\n",filename);
    return 0;
}


