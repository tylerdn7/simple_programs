/**
** A simple command line
** countdown program
** which will show how many days
** this year (2018) has left
**
** Ahasanul Basher Hamza
** Date: 11/4/18
***/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int main()
{
    time_t current_time;
    char *s;
    current_time = time(NULL);
    s = ctime(&current_time);
    int i,n = strlen(s),j;
    char *month = malloc(sizeof(char) * 10);
    int *days = malloc(sizeof(int) * 10);
    for(i = 4,j = 0;i < 7;i++,j++)
    {
        month[j] = s[i];
    }
    int day = 0;
    for(i = 8,j = 0;i < 10;i++,j++)
    {
        days[j] = s[i] - 48;
        day = day * 10 + days[j];
    }
    int days_left;
    char jan[4] = "Jan";
    char feb[4] = "Feb";
    char mar[4] = "Mar";
    char apr[4] = "Apr";
    char may[4] = "May";
    char jun[4] = "Jun";
    char jul[4] = "Jul";
    char aug[4] = "Aug";
    char sept[4] = "Sept";
    char oct[4] = "Oct";
    char nov[4] = "Nov";
    char dec[4] = "Dec";
    if(strcasecmp(jan,month) == 0)
    {
        days_left = 31 - day;
        int rest_days = 28+31+30+31+30+31+31+30+31+30+31;
        days_left = days_left + rest_days;
    }
    else if(strcasecmp(feb,month) == 0)
    {
        days_left = 28 - day;
        int rest_days = 31+30+31+30+31+31+30+31+30+31;
        days_left = days_left + rest_days;
    }
    else if(strcasecmp(mar,month) == 0)
    {
        days_left = 31 - day;
        int rest_days = 30+31+30+31+31+30+31+30+31;
        days_left = days_left + rest_days;
    }
    else if(strcasecmp(apr,month) == 0)
    {
        days_left = 30 - day;
        int rest_days = 31+30+31+31+30+31+30+31;
        days_left = days_left + rest_days;
    }
    else if(strcasecmp(may,month) == 0)
    {
        days_left = 31 - day;
        int rest_days = 30+31+31+30+31+30+31;
        days_left = days_left + rest_days;
    }
    else if(strcasecmp(jun,month) == 0)
    {
        days_left = 30 - day;
        int rest_days = 31+31+30+31+30+31;
        days_left = days_left + rest_days;
    }
    else if(strcasecmp(jul,month) == 0)
    {
        days_left = 31 - day;
        int rest_days = 31+30+31+30+31;
        days_left = days_left + rest_days;
    }
    else if(strcasecmp(aug,month) == 0)
    {
        days_left = 31 - day;
        int rest_days = 30+31+30+31;
        days_left = days_left + rest_days;
    }
    else if(strcasecmp(sept,month) == 0)
    {
        days_left = 30 - day;
        int rest_days = 31+30+31;
        days_left = days_left + rest_days;
    }
    else if(strcasecmp(oct,month) == 0)
    {
        days_left = 31 - day;
        int rest_days = 30+31;
        days_left = days_left + rest_days;
    }
    else if(strcasecmp(nov,month) == 0)
    {
        days_left = 30 - day;
        int rest_days = 31;
        days_left = days_left + rest_days;
    }
    else if(strcasecmp(dec,month) == 0)
    {
        days_left = 31 - day;
        int rest_days = 31;
        days_left = days_left + rest_days;
    }
    printf("\t\t   Days left in this year 2018\n\n\n");
    for(i = 0;i < 80;i++)
    {
        printf("_");
    }
    printf("\n\tTodays Time and date : %s\n \t\tAnd days left : %d days\n",s,days_left);
    return 0;
}
