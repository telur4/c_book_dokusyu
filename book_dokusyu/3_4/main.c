#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("INT_MIN    = %i\n", INT_MIN);
    printf("INT_MAX    = %i\n", INT_MAX);
    printf("UINT_MAX   = %u\n", UINT_MAX);
    printf("LONG_MIN   = %li\n", LONG_MIN);
    printf("LONG_MAX   = %li\n", LONG_MAX);
    printf("ULONG_MAX  = %lu\n", ULONG_MAX);
    printf("LLONG_MIN  = %lli\n", LLONG_MIN);
    printf("LLONG_MAX  = %lli\n", LLONG_MAX);
    printf("ULLONG_MAX = %llu\n", ULLONG_MAX);
    printf("FLT_MIN    = %f\n", FLT_MIN);
    printf("FLT_MAX    = %f\n", FLT_MAX);
    printf("DBL_MIN    = %f\n", DBL_MIN);
    printf("DBL_MAX    = %f\n", DBL_MAX);
    printf("LDBL_MIN   = %Lf\n", LDBL_MIN);
    printf("LDBL_MAX   = %Lf\n", LDBL_MAX);
}