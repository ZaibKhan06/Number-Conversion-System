#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

void dec_binary		();															//1
void dec_oct 		();															//2
void dec_hexa 		();															//3
int	 binary_oct		();															//4
int	 binary_dec		();															//5
int	 binary_hexa 	();															//6
int	 oct_binary		();															//7
int  oct_dec 		();															//8
int  oct_hexa 		();															//9
int  hexa_binary 	();															//10
int  hexa_oct 		();															//11
int  hexa_dec 		();															//12

main ()
{
int ch;
char desire;
printf ("\t\t\t\t\t***NUMBER CONVERSION SYSTEM***\n\n");
	do
	{
		printf ("\nEnter your desired choice:\n\n");
		printf ("Press  1 for decimal to binary\n");
		printf ("Press  2 for decimal to octal\n");
		printf ("Press  3 for decimal to hexa decimal\n");
		printf ("Press  4 for binary to octal\n");
		printf ("Press  5 for binary to decimal\n");
		printf ("Press  6 for binary to hexa decimal\n");
		printf ("Press  7 for octal to binary\n");
		printf ("Press  8 for octal to decimal\n");
		printf ("Press  9 for octal to hexa decimal\n");
		printf ("Press 10 for hexa decimal to binary\n");
		printf ("Press 11 for hexa decimal to octal\n");
		printf ("Press 12 for hexa decimal to decimal\n");
		scanf ("%d",&ch);
	switch(ch){
		case 1:
			dec_binary();
			break;
		case 2:
			dec_oct();
			break;
		case 3:
			dec_hexa();
			break;
		case 4:
			binary_oct();
			break;
		case 5:
			binary_dec();
			break;
		case 6:
			binary_hexa();
			break;
		case 7:
			oct_binary();
			break;
		case 8:
			oct_dec();
			break;
		case 9:
			oct_hexa();
			break;
		case 10:
			hexa_binary();
			break;
		case 11:
			hexa_oct();
			break;
		case 12:
			hexa_dec();
			break;
	default:
			printf("\nYou entered the invalid choice\n");
			}
			printf("\n\nYou want to continue Y or N \n");
			desire=getche();	
	}
	while(desire == 'Y' || desire == 'y');	
//getch ();
}

void dec_binary		()
{
int y[100],n,i=0;
printf ("\nEnter a decimal number\n");
scanf ("%d",&n);
	do
	{
		y[i]=n%2;
		n=n/2;
		i++;
	}
	while (n!=0);
int x=i-1;
for (int j=0;j<i;j++)
	{
		printf("%d",y[x]);
		x--;
	}
}

void dec_oct 		()
{
int y[100],n,i=0;
printf ("\nEnter a decimal number\n");
scanf ("%d",&n);
	do
	{
		y[i]=n%8;
		n=n/8;
		i++;
	}
	while (n!=0);
int x=i-1;
for (int j=0;j<i;j++)
	{
		printf("%d",y[x]);
		x--;
	}
}

void dec_hexa 		()
{
int y[100],n,i=0;
printf ("\nEnter a decimal number\n");
scanf ("%d",&n);
	do
	{
		y[i]=n%16;
	n=n/16;
	i++;
	}
	while (n!=0);
int x=i-1;
for (int j=0;j<i;j++)
	{
	if (y[x]<10)
		{
		printf("%d",y[x]);
		}
	else if (y[x]==10)
		{
		printf ("A");
		}
	else if (y[x]==11)
		{
		printf ("B");
		}
	else if (y[x]==12)
		{
		printf ("C");
		}
	else if (y[x]==13)
		{
		printf ("D");
		}
	else if (y[x]==14)
		{
		printf ("E");
		}
	else if (y[x]==15)
		{
		printf ("F");
		}
	x--;			
	}
}

int binary_oct		()
{
int a,r,p,x=0,y[100],z[100],n,i=0,j=0;
printf ("\nEnter a binary Number\n");
scanf ("%d",&n);
r=n;
	do
	{
	p=r%10;
	if (p<0 || p>1)
		{
		printf ("ERROR:You Enter a wrong number\n");
		return 0;
		break;
		}
	r=r/10;
	}
	while (r!=0);
	do
	{
	a=n%10;
	y[i]=pow(2,i)*a;
	x=x+y[i];
	n=n/10;
	i++;
	}
	while (n!=0);
	do
	{
		z[j]=x%8;
		x=x/8;
		j++;
	}
	while (x!=0);
int b=j-1;
for (int k=0;k<j;k++)
	{
	printf("%d",z[b]);
	b--;
	}
}

int binary_dec		()
{
int a,p,r,x=0,y[100],n,i=0;
printf ("\nEnter a binary Number\n");
scanf ("%d",&n);
r=n;
	do
	{
	p=r%10;
	if (p<0 || p>1)
		{
		printf ("ERROR:You Enter a wrong number\n");
		return 0;
		break;
		}
	r=r/10;
	}
	while (r!=0);
	do
	{
	a=n%10;
	y[i]=pow(2,i)*a;
	x=x+y[i];
	n=n/10;
	i++;
	}
	while (n!=0);
printf ("%d",x);
}

int binary_hexa 	()
{
int a,p,r,x=0,y[100],z[100],j=0,n,i=0;
printf ("\nEnter a Binary Number\n");
scanf ("%d",&n);
r=n;
	do
	{
		p=r%10;
	if (p<0 || p>1)
		{
		printf ("ERROR:You Enter a wrong number\n");
		return 0;
		break;
		}
	r=r/10;
	}
	while (r!=0);
	do
	{
		a=n%10;
		n=n/10;
		y[i]=pow(2,i)*a;
		x=x+y[i];
		i++;
	}
	while (n!=0);
	do
	{
		z[j]=x%16;
		x=x/16;
		j++;
	}
	while (x!=0);
int b=j-1;
for (int k=0;k<j;k++)
	{
	if (z[b]<10)
		{
		printf("%d",z[b]);
		}
	else if (z[b]==10)
		{
		printf ("A");
		}
	else if (z[b]==11)
		{
		printf ("B");
		}
	else if (z[b]==12)
		{
		printf ("C");
		}
	else if (z[b]==13)
		{
		printf ("D");
		}
	else if (z[b]==14)
		{
		printf ("E");
		}
	else if (z[b]==15)
		{
		printf ("F");
		}
	b--;
	}
}

int oct_binary		()
{
int a,r,p,x=0,y[100],z[100],n,i=0,j=0;
printf ("\nEnter an octal Number\n");
scanf ("%d",&n);
r=n;
	do
	{
	p=r%10;
	if (p<0 || p>7)
		{
		printf ("ERROR:You Enter a wrong number\n");
		return 0;
		break;
		}
	r=r/10;
	}
	while (r!=0);
	do
	{
		a=n%10;
		y[i]=pow(8,i)*a;
		x=x+y[i];
		n=n/10;
		i++;
	}
	while (n!=0);
	do
	{
		z[j]=x%2;
		x=x/2;
		j++;
	}
while (x!=0);

int b=j-1;
for (int k=0;k<j;k++)
	{
		printf("%d",z[b]);
		b--;
	}
}

int oct_dec 		()
{
int a,p,r,x=0,y[100],n,i=0;
printf ("\nEnter an octal Number\n");
scanf ("%d",&n);
r=n;
	do
	{
		p=r%10;
	if (p<0 || p>7)
		{
		printf ("ERROR:You Enter a wrong number\n");
		return 0;
		break;
		}
	r=r/10;
	}
	while (r!=0);
	do
	{
		a=n%10;
		y[i]=pow(8,i)*a;
		x=x+y[i];
		n=n/10;
		i++;
	}
	while (n!=0);
printf ("%d",x);
}

int oct_hexa 		()
{
int a,p,r,x=0,y[100],z[100],j=0,n,i=0;
printf ("\nEnter an octal Number\n");
scanf ("%d",&n);
r=n;
	do
	{
		p=r%10;
	if (p<0 || p>7)
		{
		printf ("ERROR:You Enter a wrong number\n");
		return 0;
		break;
		}
	r=r/10;
	}
	while (r!=0);
	do
	{
		a=n%10;
		n=n/10;
		y[i]=pow(8,i)*a;
		x=x+y[i];
		i++;
	}
	while (n!=0);
	do
	{
		z[j]=x%16;
		x=x/16;
		j++;
	}
	while (x!=0);
int b=j-1;
for (int k=0;k<j;k++)
	{
	if (z[b]<10)
		{
		printf("%d",z[b]);
		}
	else if (z[b]==10)
		{
		printf ("A");
		}
	else if (z[b]==11)
		{
		printf ("B");
		}
	else if (z[b]==12)
		{
		printf ("C");
		}
	else if (z[b]==13)
		{
		printf ("D");
		}
	else if (z[b]==14)
		{
		printf ("E");
		}
	else if (z[b]==15)
		{
		printf ("F");
		}
	b--;
	}
}

int hexa_binary 	()
{
int a,y,x=0,i,k=0,z[100];
char n[100];
printf ("\nEnter a hexa decimal number in Capital letters\n");
scanf ("%s",&n);
i=strlen (n);
int b=i-1;
for (int j=0;j<i;j++)
	{
	if (n[j]>'F')	
		{
			printf ("ERROR:you entered the wrong number or you forgot to on Capslock\n");
			return 0;
			break;
		}
	else if (n[j]>='A')
		{
			y=n[j]-55;
		}
	else
		{
			y=n[j]-48;
		}
x=x+pow (16,b)*y;
b--;
	}
	do
	{
		z[k]=x%2;
		x=x/2;
		k++;
	}
	while (x!=0);
int c=k-1;
for (int l=0;l<k;l++)
	{
		printf("%d",z[c]);
		c--;
	}
}

int hexa_oct 		()
{
int a,y,x=0,z[100],i,k=0;
char n[100];
printf ("\nEnter a hexa decimal number in Capital letters\n");
scanf ("%s",&n);
i=strlen (n);
int b=i-1;
for (int j=0;j<i;j++)
	{
	if (n[j]>'F')	
		{
			printf ("ERROR:you entered the wrong number or you forgot to on Capslock\n");
			return 0;
			break;
		}
	else if (n[j]>='A')
		{
			y=n[j]-55;
		}
	else
		{
			y=n[j]-48;
		}
	x=x+pow (16,b)*y;
	b--;
	}
	do
	{
		z[k]=x%8;
		x=x/8;
		k++;
	}
	while (x!=0);
int c=k-1;
for (int l=0;l<k;l++)
	{
	printf("%d",z[c]);
	c--;
	}
}

int hexa_dec 		()
{
int a,y,x=0,i;
char n[100];
printf ("\nEnter a hexa decimal number in Capital letters\n");
scanf ("%s",&n);
i=strlen (n);
int b=i-1;
for (int j=0;j<i;j++)
	{
	if (n[j]>'F')	
		{
		printf ("ERROR:you entered the wrong number or you forgot to on Capslock\n");
		return 0;
		break;
		}
	else if (n[j]>='A')
		{y=n[j]-55;}
	else
		{y=n[j]-48;}
	x=x+pow (16,b)*y;
	b--;
	}
printf ("%d",x);
}
