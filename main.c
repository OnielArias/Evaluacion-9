#include <stdio.h>

int main()
{
    static int num;
    int contador = 0;

    printf("Ingrese cualquier numero: ");
    scanf("%d", &num);

    do
    {
        contador++;

        num /= 10;
    } while(num != 0);

    printf("Digitos totales: %d", contador);

    return 0;
}
