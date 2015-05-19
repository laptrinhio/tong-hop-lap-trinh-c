#include "stdio.h"

int main(int argc, char const *argv[])
{

    int n = 1001;

    ( n & 1 ) == 1 ? printf("LE") : printf("CHAN");

    return 0;
}