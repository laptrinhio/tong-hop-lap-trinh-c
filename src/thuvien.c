#include "thuvien.h"

/**
 * Get user input
 *
 * @return int
 */
int get_user_input()
{
    int n = 0;

    printf("Nhap so canh: ");
    scanf("%d", &n);

    return n;
}

/**
 * Draw a triangle
 *
 * @param size size of triangle to draw
 */
void draw(int size)
{
    int row = 0, col = 0;

    for(row = 0; row < size; ++row) {
        for(col = 0; col < row + 1; ++col) {
            STAR;
        }
        LINE;
    }
}