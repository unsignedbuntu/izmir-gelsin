#include<stdio.h>
#include<conio.h>
#include<math.h>
#define XORSWAP(a,b)	*a==*b ? 0 : *a^=*b^=*a^=*b

//If they are then placed in numerical order, with any repeats removed, we get the following sequence of 15 distinct terms:
//4, 8, 9, 16, 25, 27, 32, 64, 81, 125, 243, 256, 625, 1024, 3125
//How many distinct terms are in the sequence generated by ab for 2 ? a ? 100 and 2 ? b ? 100?

void siralama(int *dizi,int sayac){
	
int e,f;	
	
	for(e=0;dizi[e];e++)
	{
			for(f=e+1;dizi[f];f++)
			{
				if(dizi[e]>dizi[f])		XORSWAP(&dizi[e],&dizi[f]);
			}
	}

	for(f=0;f<sayac;f++)	f==sayac-1 ? printf("%d",dizi[f]) : printf("%d-",dizi[f]);	
}

int main(){

int sayac=0;
int us,a,b;
int dizi[9801];

for(a=2;a<=100;a++)
{
	for(b=2;b<100;b++,sayac++)
	{
	dizi[sayac]=pow(a,b);	
	}
		
}	
	siralama(dizi,sayac);
	
getch();
return 0;	
}