#include <stdio.h>
#include <string.h>
#include "GPS_TOOLS.h"

// Exercice 3
char* findChar(const char *str, char c, int pos)
{
    size_t str_size = strlen(str);
    for(int i = pos - 1; i < str_size; i++){
        if(str[i] != c) continue;
        return (char *) &str[i];
    }
    return NULL;
}

// Exercice 4
char* findStr(const char *str, const char *s, int pos)
{
    return strstr(str, s);
}


// Exercice 5
int isValidHeader(const char *frame)
{
    if(findStr(frame, "GGA", 3)){
        return XGGA_FRAME;
    }
    else if(findStr(frame, "RMC", 3)){
        return XRMC_FRAME;
    }
    else if(findStr(frame, "GLL", 3)){
        return XGLL_FRAME;
    }
    else if(findStr(frame, "GNS", 3)){
        return XGNS_FRAME;
    }
    return UNKNOWN_FRAME;
}

// Exercice 6
int getFieldsCount(const char *frame)
{
    int i=0, size=0, count=1;
    while ('$'<frame[size]<'*')
    {
        size++;
    }
    for (i=0 ; i<=size ; i++)
    {
        if ( frame[i]==',')
        {
            count=count+1;
        }
    }
    return count;
}

int main()
{
    printf("%s\n", findChar("Hello World", 'l', 5));
    printf("%s\n", findStr("this is my sample example", "mdr", 1));
    return 0;
}