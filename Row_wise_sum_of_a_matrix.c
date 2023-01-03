#include<stdio.h>
int main()
{
	int n,m,i,j,sr;
	scanf("%d%d",&n,&m);
   int a[n][m];
   for(i=0;i<n;i++)
   {
   	for(j=0;j<m;j++)
   	{
   	   scanf("%d",&a[i][j]);
	}
}
 for(i=0;i<n;i++)
   {
       sr=0;
   	for(j=0;j<m;j++)
   	{
   	   sr=sr+a[i][j];
	}
	printf("%d ",sr);
   }
} 
  







