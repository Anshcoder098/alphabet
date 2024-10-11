#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("enter the values of sides");
	scanf("%d%d%d",&s1,&s2,&s3);
	int t=(s1==s2)+(s2==s3)+(s3==s1);
	switch(t)
	{
		case 3:
			printf("the triangle is equilateral");
			break;
			case 1:
		    printf("the triangle is isosecles");
			break;
			case 0:
			printf("the triangle is scalene");
			break;		
	}
	return 0;
}
