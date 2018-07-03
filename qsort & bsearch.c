/**
** Use of qsort & bsearch function
** Ahasanul Basher Hamza
** Date: 03/7/18
***/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <windows.h>

int comparefunc(const void * a , const void * b)
{
    return (*(int * ) a - *(int * ) b);
}
void clrscr()
{
    system("@cls||clear");
}
int main()
{
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *ara = (int *) malloc(sizeof(int) * n);
    printf("Enter the values: \n");

    for(i = 0;i < n;i++)
    {
        scanf("%d", &ara[i]);
    }
    printf("Please wait while the data structure is sorting:\n");
    qsort(ara,5,sizeof(int),comparefunc);
    Sleep(3500);
    printf("Sorted\n");
    Sleep(2500);
    clrscr();
    while(1)
    {
        printf("Enter the value of the key (0 to exit): ");
        int key;
        scanf("%d", &key);
        if(key == 0)
        {
            break;
        }
        int *item;
        item = (int *) bsearch(&key,ara,5,sizeof(int),comparefunc);
        if(item != NULL)
        {
            printf("Item found %d\n",*item);
        }
        else
        {
            printf("Item not found\n");
        }
    }
    free(ara);
    return 0;
}
