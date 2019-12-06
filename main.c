#include<stdio.h>
main()
{
	int m,p,c,tot;
	float avg;
	printf("\n enter m");
	printf("\n enter p");
	printf("\n enter c");
	scanf("%d%d%d",&m,&p,&c);
	tot = m+p+c;
	avg =(float) tot/3;
	printf("\n total marks are = %d",tot);
	printf("\n average marks are = %f",avg);
}