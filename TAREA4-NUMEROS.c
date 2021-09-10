#include<stdio.h>
#include<stdlib.h>
// Declaración de prototipos - funciones prototipo
//void pares(int numero);
//void triplicado(int v, int *res);

int duplicar(int valor);
void numeros(int num1, int num2, int auxiliar2);
void numeros2(int num1, int num2, int auxiliar2);
void numeros3(int num1,int num2,int auxilar2);
void numeros4(int num1,int num2,int auxiliar2);
void numeros5(int num1,int num2,int auxiliar2);
void numeros(int num1,int num2,int auxiliar2);


int main()
{

    int limite,limite2; // Las variables se declaran al inicio de la función
    int i;
    int auxiliar;
    int resultado;

    printf("\n Dame el primer numero: \n");
    scanf("%d",&limite);  // scanf siempre necesita la dirección de la variable en donde almacenara el valor/dato

    printf("Dame el segundo numero: \n");
    scanf("%d",&limite2);

        printf("\n \n");

    if(limite<=limite2)
    {



    printf("\n \n");
     printf(" Valores entre el numero %d y el numero %d con ciclo FOR\n \n",limite,limite2);

    numeros(limite,limite2,auxiliar);
     printf("\n");

     printf(" Valores entre el numero %d y el numero %d con ciclo WHILE\n \n",limite,limite2);

    numeros3(limite,limite2,auxiliar);

    printf("\n");

    printf(" Valores entre el numero %d y el numero %d con ciclo DO WHILE\n \n",limite,limite2);

    numeros5(limite,limite2,auxiliar);

    }
    if(limite>limite2)


    {


    printf("\n \n");

    printf(" Valores entre el numero %d y el numero %d con ciclo FOR \n \n",limite,limite2);

    numeros2(limite,limite2,auxiliar);
    printf("\n");

     printf(" Valores entre el numero %d y el numero %d con ciclo WHILE\n \n",limite,limite2);

    numeros4(limite,limite2,auxiliar);

     printf("\n");

     printf(" Valores entre el numero %d y el numero %d con ciclo DO WHILE\n \n",limite,limite2);

    numeros6(limite,limite2,auxiliar);

}


    return 0;
}




/*

void pares(int numero)
{
    // if -> Validación, si la condición es verdadera hace lo que está dentro del if
        //    -> Si tiene mas de una instrucción lleva llaves, si solo lleva una instrucción puede o no llevar llaves
    if(numero % 2 == 0)
        printf("%d es par\n", numero); // Función, que usa el dato después de la coma para imprimirlo, no para modificarlo, no es necesario pasar la dirección
}*/

int duplicar(int valor)
{
    int duplicado;
    duplicado=valor;

    return duplicado;
    // Otra opción puede ser:
    // return valor * 2;
}


void numeros(int num1, int num2, int auxiliar2)
{
    int i;
      for(i = num1; i<=num2; i++)
    {
        auxiliar2 = duplicar(i);
        printf("Valor No.%d \n",i);
    }


}

void numeros2(int num1, int num2, int auxiliar2)
{
    int i;
      for(i=num1; i>=num2; i--)
    {
        duplicar(i);
        printf("Valor No. %d \n",i);
    }


    }


void numeros3(int num1,int num2,int auxiliar2)
{
    while(num1<=num2)
    {
        printf("Valor No.%d \n",num1);

        auxiliar2=num1++;  // se va a estar guardando en la misma varable hasta que termine

    }

}


void numeros4(int num1,int num2,int auxiliar2)
{
    while(num1>=num2)
    {
        printf("Valor No.%d \n",num1);

        auxiliar2=num1--;  // se va a estar guardando en la misma varable hasta que termine

    }

}




void numeros5(int num1,int num2,int auxiliar2)
{
    do
    {
        printf("Valor No.%d \n",num1);

        auxiliar2=num1++;  // se va a estar guardando en la misma varable hasta que termine

    }
    while(num1<=num2);
}





void numeros6(int num1,int num2,int auxiliar2)
{
 do
    {
        printf("Valor No.%d \n",num1);

        auxiliar2=num1--;  // se va a estar guardando en la misma varable hasta que termine

    }
    while(num1>=num2);

}



