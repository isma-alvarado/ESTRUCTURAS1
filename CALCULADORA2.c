#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void menu();

void SumaPorReferencia(float num1,float num2,float *res);

void RestaPorReferencia(float num1,float num2,float  *res);

void MultiPorReferencia(float num1,float num2,float  *res);

void DiviPorReferencia(float num1,float num2,float  *res);

void RaizPorReferencia(float num1,float num2,float *res,float *res2);

void ModuloPorReferencia(int num1,int num2);

void PotenciaPorReferencia(float num1,float num2,float *res);

int main()
{
    float numero1,numero2,resultado,resultado2;
    int opcion, resultado3,opcion2;
    

menu();
system("pause");
system("cls");


do{
		printf("\n ¿Que operacion deseas realizar?:\n");
		
		menu();
		printf("\n");
	scanf("%d",&opcion);
	
	  menu();
		system("cls");
		
		
		
	

		
  if(opcion!=5) {
     		
	printf("\n Dime el primer numero: \n");
	scanf("%f",&numero1);
	
	printf("Dime el segundo numero: \n");
	scanf("%f",&numero2);
  }
	else 
	{
	
	printf("\n Dime el numero a elevar: \n");
	scanf("%f",&numero1);
	
	printf("Dime la potencia: \n");
	scanf("%f",&numero2);
	}
	
	 
		
	
	
	switch(opcion)
	{ 
	
	case 1:
	
		
	SumaPorReferencia(numero1,numero2,&resultado);	
	
	printf("El resultado de la suma es: %0.2f",resultado);
	
	break;
	
	
	
	case 2:
	
		
	RestaPorReferencia(numero1,numero2,&resultado);	
	
	printf("El resultado de la Resta es: %0.2f",resultado);
	
	break; 
	
	case 3:
	
		
	MultiPorReferencia(numero1,numero2,&resultado);	
	
	printf("El resultado de la Multiplicacion es: %0.2f",resultado);
	
	break;
	
		case 4:
	
		
	DiviPorReferencia(numero1,numero2,&resultado);	
	
	printf("El resultado de la Division es: %0.2f",resultado);
	
	break;
	
	
		case 5:
	
		
	PotenciaPorReferencia(numero1,numero2,&resultado);	
	
	printf("El resultado de la elevacion exponencial es: %0.2f",resultado);
	
	break;
	
	
		case 6:
	
		
	ModuloPorReferencia(numero1,numero2);	
	

	
	break;
	
	
	
		case 7:
	
		
	RaizPorReferencia(numero1,numero2,&resultado,&resultado2);	
	
	printf("\n La Raiz Cuadrada del numero %f  es: %0.2f \n",numero1,resultado);
	
	
	
	printf("\n La Raiz Cuadrada del numero %f es: %0.2 f\n",numero2,resultado2);
	
	break;
	
	
	
	
	
	
	
	default: 
	printf("\n No elegiste ninguna opcion \n");
	break;
	}
	  
	  
	  printf("\n \n Deseas continuar: \n");
	  
	  printf("1.Si  \n");
	  printf("2. No \n \n");
	  scanf("%d",&opcion2);
	  
	   system("pause");
	  system("cls");
}
	 while(opcion2==1);
	  system("cls");
	
	return 0;
	
}




void SumaPorReferencia(float num1,float num2,float  *res)
{
   	*res= num1+num2;	
}


void RestaPorReferencia(float num1,float num2,float *res)
{
   	*res= num1-num2;	
}

void MultiPorReferencia(float num1,float num2,float *res)
{
   	*res= num1*num2;	
}


void DiviPorReferencia(float num1,float num2,float  *res)
{
   	*res= num1/num2;	
}


//solo funciona con enteros

void ModuloPorReferencia(int num1,int  num2)
{
   	
   
   	
  	if(num1 %2 ==0)
   	{
   		printf("\n El numero %d: es Par \n",num1);
   	}
   	else {
   	
   		printf("\n El numero %d: no es Par \n",num1);	
   	}	
   			if(num2 %2 ==0)
   	{
   		printf("\n El numero %d: es Par \n",num2);
   	}
   	else {
   	
   		printf("\n El numero %d: no es Par \n",num2);	
   	}
}




void PotenciaPorReferencia(float num1,float num2,float *res)
{
   	*res= pow(num1,num2);
   		
}




void RaizPorReferencia(float num1,float num2,float  *res,float *res2)
{
   	*res= sqrt(num1);
   	*res2=sqrt(num2);	
}

void menu()
{
	
		printf("\n CALCULADORA \n");
	printf("1.Suma\n");
	printf("2.Resta\n");
	printf("3.Multiplicacion\n");
	printf("4.Division\n");
	printf("5.Potencia\n");
	printf("6.Modulo\n");
	printf("7.Raiz Cuadrada\n");
}