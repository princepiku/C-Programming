// Merge Array. 

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],i,j,m,n;
	printf("Enter the size of first array :\n");
	scanf("%d",&m);
	printf("Enter the A array elements :\n");
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the size of second array :\n");
	scanf("%d",&n);
	printf("Enter the B array elements :\n");
	for(j=0;j<n;j++)
	scanf("%d",&b[j]);
	printf("Merge Array :\n");
	merge(a,b,m,n);	// Calling Function	
}
int merge(int p[], int q[], int m, int n)
{
	int i=0,j=0,k=0,c[30],n3;
	n3=m+n;
	while(i<m && j<n)
	{
		if(p[i]<q[j])
		{
			c[k]=p[i];
			i=i+1;
			k=k+1;
		}
		else
		{
			c[k]=q[j];
			j++;
			k++;
		}
	}
	while(i<m)
	{
		c[k]=p[i];
		i++;
		k++;	
	}
	while(j<n)
	{
		c[k]=q[j];
		j++;
		k++;		
	}
	printf("Final Shorted Array List :\n");
	for(k=0;k<n3;k++)
	printf("%d \t",c[k]);
	return;
}
