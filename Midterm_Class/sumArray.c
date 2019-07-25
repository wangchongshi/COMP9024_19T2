//
// Created by Rui.Mu on 2019-07-03.
//

int sumArray(int harry[], int length) {
    int total = 0;
    for (int i=0; i<length; i++) {
        total += harry[i]; // could be written total = total + harry[i]
    }
    return total;
}

int main(void) {
    int v[]  = {1,2,3,4,5};
    printf ("Sum of array is %d\n", sumArray(v, 5));
}
