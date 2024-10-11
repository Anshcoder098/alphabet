#include<stdio.h>
int main()
{
	char ch;
	printf("enter the value of alphabets in english\n");
	scanf("%c",&ch);
	switch(ch){
		case 'a':
		case 'e':
	    case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		printf("is vowels");
		break;
		default:
		printf("is constants");
}
		return 0;
	}
