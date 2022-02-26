#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 9

int main()
{
    int i, j;
    char chess[n][n]
            = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
               {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};
    printf("\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%c", chess[i][j]);
        }
        printf("\n");
    }
    return 0;
}
