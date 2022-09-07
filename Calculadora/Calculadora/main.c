#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/// *** CALCULA
int calcula(float valor1, float valor2, int menu, float res){

	switch(menu){

        case 1:
            res = (valor1 + valor2);
            system("cls");
            printf("\n+----------------------------------------+\n");
            printf(" %f ",valor1);
            printf(" + ",valor2);
            printf(" %f ",valor2);
            printf(" = %f ",res);
            printf("\n+----------------------------------------+\n");
        break;

        case 2:
            res = (valor1 - valor2);
            system("cls");
            printf("\n+----------------------------------------+\n");
            printf(" %f ",valor1);
            printf(" - ",valor2);
            printf(" %f ",valor2);
            printf(" = %f ",res);
            printf("\n+----------------------------------------+\n");
        break;

        case 3:
            res = (valor1 * valor2);
            system("cls");
            printf("\n+----------------------------------------+\n");
            printf(" %f ",valor1);
            printf(" x ",valor2);
            printf(" %f ",valor2);
            printf(" = %f ",res);
            printf("\n+----------------------------------------+\n");
        break;

        case 4:
            res = (valor1 / valor2);
            system("cls");
            printf("\n+----------------------------------------+\n");
            printf(" %f ",valor1);
            printf(" / ",valor2);
            printf(" %f ",valor2);
            printf(" = %f ",res);
            printf("\n+----------------------------------------+\n");
        break;

        default:
            system("cls");
            main();
	}

	return res;

}

/// *** CALCULA

int main()
{

    setlocale(LC_ALL,"Portuguese");
    float valor1,valor2,res,calc;
    int menu = 0;
    res = 0;

    INICIO_CALCULADORA:
    system("cls");

  	// ENTRADA DE DADOS CALCULADORA NORMAL
  	printf("DIGITE VALOR 1: ");
	scanf("%f", &valor1);
	res = res + valor1; // ACUMULA RESPOSTA

	system("cls");
    printf("\n+----------------------------------------+\n");
  	printf("VALOR 1: %f | ",valor1);
  	printf("VALOR 2:  | ");
  	printf(" RESP: ");
  	printf("\n+----------------------------------------+\n");

  	printf("DIGITE VALOR 2: ");
	scanf("%f", &valor2);

	system("cls");
    printf("\n+----------------------------------------+\n");
  	printf("VALOR 1: %f | ",valor1);
  	printf("VALOR 2: %f | ",valor2);
  	printf(" RESP: ");
  	printf("\n+----------------------------------------+\n");

	MENU:
	printf("ESCOLHA UM OPERADOR\n");
	printf("1. SOMAR\n");
	printf("2. SUBTRAIR\n");
	printf("3. MUTIPICAR\n");
	printf("4. DIVIDIR\n");
	scanf("%i", &menu);

    res = calcula(valor1,valor2,menu,res);

	/// *** CALCULADORA ACUMULADA
    CALCULADORA:
    valor1 = res; // ACUMULA RESPOSTA

    printf("\n\n+----------------------------------------+\n");
  	printf("VALOR 1: %f | ",valor1);
  	printf("\n+----------------------------------------+\n");

  	printf("\nVALOR 2: ");
	scanf("%f", &valor2);

	system("cls");
    printf("\n+----------------------------------------+\n");
  	printf("VALOR 1: %f | ",valor1);
  	printf("VALOR 2: %f | ",valor2);
  	printf("\n+----------------------------------------+\n");

    MENU2:
	printf("ESCOLHA UM OPERADOR\n");
	printf("1. SOMAR\n");
	printf("2. SUBTRAIR\n");
	printf("3. MUTIPICAR\n");
	printf("4. DIVIDIR\n");
	printf("0. ZERAR CALCULADORA\n");
	scanf("%i", &menu);

    res = calcula(valor1,valor2,menu,res);

    goto CALCULADORA;

}
