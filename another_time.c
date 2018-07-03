/**
** To count how much time has elapsed
** Ahasanul Basher Hamza
** Date: 03/07/18
***/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <windows.h>
#include <time.h>

void fnc(int x, int n)
{
    x = n * 2;
}

int main()
{
    int i,j,x,n;
    clock_t start_time,end_time;
    double time_elapsed;

    start_time = clock();

    n = 12345678;
    for(i = 0;i < 10000000;i++)
    {
        for(j = 0;j < 10;j++)
        {
            x = n * 2;
        }
    }
    end_time = clock();
    time_elapsed = (double) (end_time - start_time) / CLOCKS_PER_SEC;

    printf("Time: %lf seconds\n",time_elapsed);
    
    start_time = clock();

    n = 12345678;
    for(i = 0;i < 10000000;i++)
    {
        for(j = 0;j < 10;j++)
        {
            fnc(x,n);
        }
    }
    end_time = clock();
    time_elapsed = (double) (end_time - start_time) / CLOCKS_PER_SEC;

    printf("Time: %lf seconds\n",time_elapsed);

    return 0;
}
