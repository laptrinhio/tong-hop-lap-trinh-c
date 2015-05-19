#include <stdio.h>

#define log(name, value) printf("%s = %d\n", (name), (value))

#define SEP printf("---------\n")


int main(int argc, char const *argv[])
{

    int i = 0, s = 0;

    for(; i < 10; ++i) {
        s += i;
        log("i", i);
        log("s", s);
        SEP;
    }

    printf("Ket qua la: %d\n", s);

    return 0;
}