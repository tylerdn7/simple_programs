/**
** Seeding the rand function
** Ahasanul Basher Hamza
** Date: 26/6/18
***/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <windows.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));

    int i;
    for(i = 0;i < 5;i++)
    {
        printf("%d\n",rand());
    }
}
