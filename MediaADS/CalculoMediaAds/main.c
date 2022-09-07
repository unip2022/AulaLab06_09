#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float np1,np2,pim,resultadoMedia,resultadoFaltas,faltas;

    /// *** MEDIA
    printf("DIGITE A NOTA DA [NP1]: ");
    scanf("%f",&np1);

    printf("DIGITE A NOTA DA [NP2]: ");
    scanf("%f",&np2);

    printf("DIGITE A NOTA DO [PIM]: ");
    scanf("%f",&pim);

    /// *** REALIZA CALCULO
    resultadoMedia = ( np1 * 0.4 )+ ( np2 * 0.4) + ( pim * 0.2 );
    printf("NOTA FINAL: %f",resultadoMedia);

    printf("\n\nDIGITE A [PRESENÇA]: ");
    scanf("%f",&faltas);

    resultadoFaltas = ( faltas / 50 ) * 100;
    printf("PERCENTUAL DE PRESENÇA: %f",resultadoFaltas);

        if(resultadoFaltas >= 75 && resultadoMedia >= 5){
            printf("\n\n+-----------------------------+\n");
            printf("|       ALUNO APROVADO        |\n");
            printf("+-----------------------------+\n");
        }else{
            printf("\n\n+-----------------------------+\n");
            printf("|       ALUNO REPROVADO       |\n");
            printf("+-----------------------------+\n");
        }

}
