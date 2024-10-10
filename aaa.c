#include <stdio.h>
#include <stdlib.h>

int getorder(void)
{
    unsigned int order;
    char input[64];
    do {
        printf("Enter an order [1-7]: ");
        gets(input);
        order = strtoul(input, NULL, 10);
    } while (order == 0 | order > 7);
    return order;
}

int main()
{
    int x, y, i;
    int order, size;
    order = getorder();
    size = 1 << order;
    for (y = size - 1; y >= 0; y--, putchar('\n')) {
        for (i = 0; i < y; i++) putchar(' ');
        for (x = 0; x + y < size; x++)
            printf((x & y) ? "  " : "* ");
    }
    printf("Press Enter to contine...");
    getchar();
    return 0;
}
