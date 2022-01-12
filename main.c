#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[3][3];
    int dimension;
    int i, j, k;
    int det = 1;



    printf("Dimensionality Degree: ");
    scanf("%d", &dimension);

    printf("\n");

    printf("Elements of A: \n");
    for(i=0; i<dimension; i++){
        for(j=0; j<dimension; j++){
            scanf("%d", &a[i][j]);
        }
    }


        printf("\n");


        printf("Matrix A: \n");
         for(i=0; i<dimension; i++){
            for(j=0; j<dimension; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }


        if(dimension == 2) {
            det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
        } else if(dimension == 3) {
            det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
        } else {
            printf("break");
        }


        printf("\n");
        printf("Determinant: %d \n", det);

    return 0;

}
