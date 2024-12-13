/*
 2047.A.c
A. Alyona and a Square Jigsaw Puzzle

*/

#include <stdio.h>

int main()
{

    int t, day, assembles, total_pieces;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &day);
        total_pieces = 0;
        while (day--)
        {

            scanf("%d", &assembles);
            total_pieces += assembles;
        }
        int result = ((total_pieces - 1) / 8)+1;
        printf("%d\n", result);
    }

    return 0;
}
