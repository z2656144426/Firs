#include <stdio.h>
#define N 6
int main()
{
int a[N][N],i,j;
for(i=0;i<N;i++)//确定第一列和对角线上的数都是1
{
a[i][i]=1;
a[i][0]=1;
}
for(i=2;i<N;i++)//从第三行起，确定每行除头尾外的其他数字
{
for(j=1;j<i;j++)
{
a[i][j]=a[i-1][j-1]+a[i-1][j];
}
}
for(i=0;i<N;i++)//打印出左下三角，被视为杨辉三角
{
for(j=0;j<=i;j++)
{
printf("%3d",a[i][j]);
}
printf("\n");
}
return 0;
}
    