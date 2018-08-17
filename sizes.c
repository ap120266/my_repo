/*
** Copyright (C) 2010 Teradata Corporation
** All Rights Reserved
** TERADATA CONFIDENTIAL AND TRADE SECRET
**
** File: src/sizes.c
**
** Description: used to determine the sizeof built-in data types on a particular platform
** 
*/

#include <stdio.h>

int main() 
{
     printf("sizeof(char)    = %d\n"
            "sizeof(short)   = %d\n"
            "sizeof(int)     = %d\n"
            "sizeof(long)    = %d\n"
            "sizeof(lg int)  = %d\n"
            "sizeof(lg long) = %d\n"
            "sizeof(float)   = %d\n"
            "sizeof(double)  = %d\n"
            "sizeof(void*)   = %d\n"
            "sizeof(char*)   = %d\n"
            "sizeof(size_t)  = %d\n"
            "sizeof(size_t*) = %d\n"
            ,sizeof(char)
            ,sizeof(short)
            ,sizeof(int)
            ,sizeof(long)
            ,sizeof(long int)
            ,sizeof(long long)
            ,sizeof(float)
            ,sizeof(double)
            ,sizeof(void*)
            ,sizeof(char*)
            ,sizeof(size_t)
            ,sizeof(size_t*));

    return 0;
}
