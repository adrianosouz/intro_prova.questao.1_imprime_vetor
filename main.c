#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,i;
    int *v1;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n1);
    v1 = malloc(sizeof(int)*n1);/*a funcao malloc e usada para alocar espaco para armazenar valores de qualquer tipo*/

    if(v1 == NULL)
    {
        printf("memoria insuficiente");
        return 1;
    }
    printf("\n\n");
    printf("Elementos do vetor:\n");
    for(i = 0 ; i < n1 ; i++)
    {
        scanf("%d",v1 + i);
    }
    printf("\n\n");

    printf("VETOR 1\n");
    for(i = 0 ; i < n1 ; i++)
    {
        printf("vetor[%d] = [%d]\n",i + 1, *(v1 + i));
    }
    return 0;
}
