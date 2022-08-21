#include<stdio.h>

struct num
{
    int value, Count;
};

int check(int n )
{
	int last = n%10;
	n /= 10;
	while(n > 0)
	{
		int a=n%10;
		if(a>last)return 0;
		last=a;
		n=n/10;
	}
	return 1;
}
void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int i=1;
	int a;
	while(scanf("%d",&a))
	{
		if(check(a)==1)
		{
			int dem=0;
			for(int j=1;j<=i;j++)
			{
				if(a==b[j])
				{
					dd[j]++;
					dem=1;
				}
			}
			if(dem==0)
				{
					b[i]=a;
					dd[i]++;
				}

		}
		i++;
	}
	for(int j=1;j<i;j++)
	{
		for(int k=j+1;k<=i;j++)
		{
			if(dd[j]<dd[k])
			{
				swap(&dd[j],&dd[k]);
				swap(&b[j],&b[k]);
			}
		}
	}
	for(int j=1;j<=i;j++)
	{
		printf("%d %d",b[j],dd[j]);
		printf("\n");
	}
	return 0;

}
