#include<stdio.h>
#include<stdlib.h>

/*
Quetion 1
 	int INDICE = 13, SOMA = 0, K = 0; 

 	enquanto K < INDICE faça 

	{ 

		K = K + 1; 

		SOMA = SOMA + K; 

	} 

 	imprimir(SOMA); 
*/
// Soma = 91


int soma()
{
    int indice = 13, sum = 0, k = 0;

    while (k < indice)
    {
        k ++;
        sum += k;
    }

    printf("soma: %d %d ", sum, k);
}

/*



*/

int len(char *string)
{
    int i = 0;
    while(string[i] != '\0') i++;
    return i;
}

void inverte(char *string)
{
    printf("%d \n", len(string));
}

int main()
{

    char **string;
    printf("Digite a string: ");
    scanf("%s",string);
 
    printf("%s", &string);

    //inverte(string);

    return 0;
}