//
// Created by Rui.Mu on 2019-07-03.
//

#define NROWS 2
#define NCOLS 3

#include <stdio.h>
int main(void) {
    float m[NROWS][NCOLS] = {{1.1, 2.2, 3.3}, {4.4, 5.5, 6.6}};
    float totalxR = 0, totalxC = 0;

    //sum row-by-row
    for (int row = 0; row < NROWS; row++) {
        for (int col = 0; col < NCOLS; col++) {
            totalxR += m[row][col];
        }
    }
    // alternatively sum column-by-column
    for (int col = 0; col < NCOLS; col++) {
        for (int row = 0; row < NROWS; row++) {
            totalxC += m[row][col];
        }
    }
    printf ("totalxR = %lf and totalxC = %lf\n", totalxR, totalxC);
}