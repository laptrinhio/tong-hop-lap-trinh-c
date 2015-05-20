#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
    char *number = "1231726387126312317263871263";
    long count = strlen(number);

    // do {
    //     number /= 10; // number = number / 10;
    //     ++count; // count += 1; count = count + 1;
    // } while(number > 0);

    printf("Ket qua la: %ld\n", count);

    return 0;
}


// ĐẾM SỐ LƯỢNG CHỮ SỐ CỦA MỘT SỐ NGUYÊN

// 12345 -> 5
// 8765  -> 4
// 12    -> 2
// 1     -> 1
// 0     -> 1



// 8765 / 10  =    876 - 1 => 1
// 876  / 10  =    87  - 1 => 2
// 87   / 10  =    8   - 1 => 3
// 8    / 10  =    0   - 1 => 4
// 0    / 10  =    0   - XXX