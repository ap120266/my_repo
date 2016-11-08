/*
** Copyright (C) 2010 Teradata Corporation
** All Rights Reserved
** TERADATA CONFIDENTIAL AND TRADE SECRET
**
** File: src/sizes.c
**
** Description: used to determine the sizeof built-in data types
** 
*/

#include <stdio.h>

int main() 
{
     printf("sizeof(char)    = %d\n" , sizeof(char));
     printf("sizeof(short)   = %d\n" , sizeof(short));
     printf("sizeof(int)     = %d\n" , sizeof(int));
     printf("sizeof(long)    = %d\n" , sizeof(long));
     printf("sizeof(lg long) = %d\n" , sizeof(long long));
     printf("sizeof(float)   = %d\n" , sizeof(float));
     printf("sizeof(double)  = %d\n" , sizeof(double));
     printf("sizeof(void*)   = %d\n" , sizeof(void*));
     printf("sizeof(char*)   = %d\n" , sizeof(char*));
     printf("sizeof(size_t)  = %d\n" , sizeof(size_t));
     printf("sizeof(size_t*) = %d\n" , sizeof(size_t*));
     return 0;
}
