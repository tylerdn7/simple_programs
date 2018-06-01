/**
** A simple struct program
** Ahasanul Basher Hamza
** Date: 02/03/16
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

typedef struct
{
    char firstname[40];
    char lastname[40];

}nametype;

typedef struct
{
    int id;
    nametype name;
    char grade[3];
}studenttype;

void calculate_grade(studenttype *s,int mark)
{
    if(mark >= 80)
    {
        strcpy(s->grade,"A+");
    }
    else if(mark >= 70)
    {
        strcpy(s->grade,"B+");
    }
    else if(mark >= 60)
    {
        strcpy((*s).grade,"C+");
    }
}

int main()
{
    studenttype a[3];
    int i,n = 3;
    int marks[] = {78, 82, 60};

    for(i = 0;i < 3;i++)
    {
        printf("Enter the ID for student %d: ",i+1);
        scanf("%d", &a[i].id);
        printf("Enter the first name for student %d: ",i + 1);
        scanf("%s",a[i].name.firstname);
        printf("Enter the last name for student %d: ",i + 1);
        scanf("%s",a[i].name.lastname);
        strcpy(a[i].grade, "");
    }
    for(i = 0;i < n;i++)
    {
        calculate_grade(&a[i],marks[i]);
    }
    for(i = 0;i < n;i++)
    {
        printf("%d\t%s\n",a[i].id,a[i].grade);
    }
    return 0;
}
