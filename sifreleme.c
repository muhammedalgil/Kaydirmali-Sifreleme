#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sifreleme.h"

int secim;
void sifrele()
{
	//indis % 2 == 0 ise 4 karakter ileri
	//indis %2 == 1 ise 5 karakter ileri
	//A=65 a=97
	char metin[1024];
	printf("Sifrelenecek metni giriniz: "); scanf(" %[^\n]s",metin);
	int n= strlen(metin);
	int i=0;
	while(i<n)
	{
		if(i%2==0)
		{
			if(metin[i]>=65 && metin[i]<=90)
			{
				metin[i]+=4;
				if(metin[i]>90)
				{
					metin[i]-=26;
				}
			}
				if(metin[i]>=97 && metin[i]<=122)
			{
				metin[i]+=4;
				if(metin[i]>122)
				{
					metin[i]-=26;
				}
			}
		}
		else
		{
				if(metin[i]>=65 && metin[i]<=90)
			{
				metin[i]+=5;
				if(metin[i]>90)
				{
					metin[i]-=26;
				}
			}
				if(metin[i]>=97 && metin[i]<=122)
			{
				metin[i]+=5;
				if(metin[i]>122)
				{
					metin[i]-=26;
				}
			}
		}
		
		
		i++;
	}
	system("cls");
	printf("\nSifreli Metin: %s\n",metin); 
}
void desifrele()
{
	char metin[1024];
	printf("Desifrelenecek metni giriniz: "); scanf(" %[^\n]s",metin);
	int n= strlen(metin);
	int i=0;
	while(i<n)
	{
		if(i%2==0)
		{
			if(metin[i]>=65 && metin[i]<=90)
			{
				metin[i]-=4;
				if(metin[i]>90)
				{
					metin[i]+=26;
				}
			}
				if(metin[i]>=97 && metin[i]<=122)
			{
				metin[i]-=4;
				if(metin[i]>122)
				{
					metin[i]+=26;
				}
			}
		}
		else
		{
				if(metin[i]>=65 && metin[i]<=90)
			{
				metin[i]-=5;
				if(metin[i]>90)
				{
					metin[i]+=26;
				}
			}
				if(metin[i]>=97 && metin[i]<=122)
			{
				metin[i]-=5;
				if(metin[i]>122)
				{
					metin[i]+=26;
				}
			}
		}
		
		
		i++;
	}
	system("cls");
	printf("\nDesifreli Metin: %s\n",metin);
}
int main()
{
	
	printf("\nKAYDIRMALI SIFRELEME PROGRAMI\n\n"); 
	printf("1- Sifrele \n");
	printf("2- Desifrele \n");
	printf("0- Cikis \n");
	printf("Seciminiz: \n"); scanf("%d",&secim);
	system("cls");
		switch( secim )
		{
			case 1: sifrele(); break;
			case 2: desifrele(); break;
			case 0: break;
			default: printf("Hatali secim ! Tekrar secim yapiniz . \n"); 
			main();break;
		}
 return 0;
 
	}


