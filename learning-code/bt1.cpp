#include <stdio.h>
#include <math.h>
int main() {
    //Ti?p t?c hoàn thi?n mã ngu?n
    int n,s1=0;
    float x,s3=0,s4=0;
    long long s2=0;

   scanf("%d%f",&n,&x);

    // Tinh s1 = 1 + 2 + ... + n
    for (int i = 1; i <= n; i++) {
        s1=s1+i;
    }

    // Tinh s2 = 1 * 2 * ... * n
    for (int i = 1; i <= n; i++) {
        s2=s2+i;
    }

    // Tinh s3 = 1/2 + 2/3 + ... + n/(n+1)
    for (int i = 1; i <= n; i++) {
        s3 += (float) i/(1+i);
    }

    // Tinh s4 = x^n
    for (int i = 1; i <= n; i++) {
        s4 =(float) pow(x,i);
    }

    printf("%d\n",s1);
    printf("%11f\n",s2);
    printf("%.2f\n",s3);
    printf("%.2f\n",s4);
    return 0;
}
