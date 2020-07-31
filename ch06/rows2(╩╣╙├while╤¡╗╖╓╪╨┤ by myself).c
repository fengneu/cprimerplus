// rows2.c -- using dependent nested loops
#include <stdio.h>
int main(void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;

    row = 0;
    while (row < ROWS)
    {
        ch = ('A' + row);

        while (ch < ('A' + CHARS))
        {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
        row++;
    }

    getchar();
    return 0;
}
