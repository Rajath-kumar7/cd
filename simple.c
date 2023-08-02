#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
void main()
{
	int digit,x=0,n,i=0,j=0;
	void *p,*address[5];
	char ch,search,a[15],b[15],c;
	printf("Input the expression ending with $ sign:");
	while(c='$')
	{
		a[i]=c;
		i++;
	}
	n=i-1;
	printf("Given Expression:");
	for(i=0;i<=n;i++)
    {
    	printf("%c",a[i]);
	}
	printf("\n Symbol Table display\n");
	printf("Symbol \t addr \t type");
	while(j<=n)
    {
    	c=a[j];
    	if(isalpha(toascii(c)))
    	{
    		p=malloc(c);
    		address[x]=p;
    		b[x]=c;
    		printf("\n%c \t %d \t identifier\n",c,p);
            x++;
            j++;
		}
		else if(ch=c)
		{
			if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='=')
			{
				p=malloc(ch);
    		    address[x]=p;
    		    b[x]=ch;
    		    printf("\n %c \t %d \t operator\n",ch,p);
				x++;
				j++;
			}
		}
		else
		{
			ch=digit;
			if(ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9')
		{
			p=malloc(ch);
			address[x]=p;
			b[x]=ch;
			printf("\n%c \t%d\t digit\n",ch,p);
			x++;
			j++;
		}
			
		}
	}
}
