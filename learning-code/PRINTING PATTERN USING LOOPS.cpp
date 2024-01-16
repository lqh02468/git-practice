#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int a[2*n-1][2*n-1];

    for(int i =n;i>0;i--){
        int x = n-i,y =n*2-2-n+i;
        for(int j =x;j<=n*2-2-n+i;j++){
            a[x][j] = i;
            a[y][j] = i;
            a[j][x] = i;
            a[j][y] = i;
        }
    }
    
    for(int i =0;i<2*n-1;i++){
        for(int j =0;j<2*n-1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
