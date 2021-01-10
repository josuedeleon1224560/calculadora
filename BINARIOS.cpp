#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	int opcion;
	printf("------------------------\n");
	printf("1- Conversor de Decimal a Binario\n");
	printf("2- Sumatoria de Binarios\n");
	printf("3- Resta de Binarios\n");
	printf("4- Multiplicacion de Binarios\n");
	printf("------------------------\n");
	scanf("%d", &opcion);
	system("cls");

if (opcion==1)
{
	int num1[8], residuo, a;
	char resultado, resultado1;
	printf("Ingrese un numero decimal mayor que 0\n");
	scanf("%d", &a);

for (int i=0;i<8;i++)
{
	num1[i]= a%2;
	a/=2;
}
for (int i=7;i>=0;i--)
{
	printf("%d", num1[i]);
}
printf("\n");

}
else if (opcion==2)
{
	string bin1, bin2;
	int pot=1, pot1=1;
	int acumulador=0, acumulador2=0,suma,bin[8];
	printf("Ingrese su primer numero en Binario\n");
	cin>>bin1;
	printf("Ingrese su segundo numero en Binario\n");
	cin>>bin2;
	for(int i=bin1.length()-1;i>=0;i--)
	{
		if(bin1[i]=='1')
		{
			acumulador+=1*pot;
		}
		pot*=2;
	}
		for(int j=bin2.length()-1;j>=0;j--)
	{
		if(bin2[j]=='1')
		{
			acumulador2+=1*pot1;
		}
		pot1*=2;
	}
suma=acumulador2+acumulador;

	for (int k=0;k<8;k++)
{
	bin[k]= suma%2;
	suma/=2;
}
for (int k=7;k>=0;k--)
{
	printf("%d", bin[k]);
}
printf("\n");
	
	
}
else if (opcion==3)
{
	string bin1, bin2;
	int pot=1, pot1=1;
	int acumulador=0, acumulador2=0,suma,bin[8];
	printf("Ingrese su primer numero en Binario\n");
	cin>>bin1;
	printf("Ingrese su segundo numero en Binario\n");
	cin>>bin2;
	for(int i=bin1.length()-1;i>=0;i--)
	{
		if(bin1[i]=='1')
		{
			acumulador+=1*pot;
		}
		pot*=2;
	}
		for(int j=bin2.length()-1;j>=0;j--)
	{
		if(bin2[j]=='1')
		{
			acumulador2+=1*pot1;
		}
		pot1*=2;
	}
suma=acumulador-acumulador2;

	for (int k=0;k<8;k++)
{
	bin[k]= suma%2;
	suma/=2;
}
for (int k=7;k>=0;k--)
{
	printf("%d", bin[k]);
}
printf("\n");
}
else if(opcion==4)
{
		string bin1, bin2;
	int pot=1, pot1=1;
	int acumulador=0, acumulador2=0,suma,bin[8];
	printf("Ingrese su primer numero en Binario\n");
	cin>>bin1;
	printf("Ingrese su segundo numero en Binario\n");
	cin>>bin2;
	for(int i=bin1.length()-1;i>=0;i--)
	{
		if(bin1[i]=='1')
		{
			acumulador+=1*pot;
		}
		pot*=2;
	}
		for(int j=bin2.length()-1;j>=0;j--)
	{
		if(bin2[j]=='1')
		{
			acumulador2+=1*pot1;
		}
		pot1*=2;
	}
suma=acumulador*acumulador2;

	for (int k=0;k<8;k++)
{
	bin[k]= suma%2;
	suma/=2;
}
for (int k=7;k>=0;k--)
{
	printf("%d", bin[k]);
}
printf("\n");
}
system("PAUSE");
return 0;
}
