#include<stdio.h>
/*
Name: K M Nuzaf Naim Saikat
E-Mail: hello@nuzafnaim.dev
Web: https://nuzafnaim.dev
*/

int main(){
    int row,col,n;
    printf("Enter Number Of Row = ");
    scanf("%d",&n);
for (row=1;row<=n; row++)
    {
        for (col=1; col<=n-row; col++)
        printf(" ");
        for (col=1; col<=2*row-1; col++)
        printf("#");
        printf("\n");
    }

    return 0;
}