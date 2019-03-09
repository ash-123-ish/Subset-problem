#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k,d,b[100],c[100],a[100][100],sum,x,y;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	sum=0;
	scanf("%d %d",&b[i],&c[i]);
	for( j=0;j<c[i];j++)
	{
	    scanf("%d",&a[i][j]);
	}
	for(k=0;k<c[i];k++)
	{
	    x=b[i]&a[i][k];
	    for(d=0;d<c[i];d++)
	    {
		y=x&a[i][d];
		if(y==0)
		sum++;
	    }
	    if(x==0)
	    sum++;
	}
	if(sum>=1)
	printf("Yes\n");
	else
	printf("No\n");
    }
    return 0;
}