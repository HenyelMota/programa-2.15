#include <stdio.h>

int main()
{
    int TRA, EDA, DIA; // Declara las variables enteras TRA (tipo de tratamiento), EDA (edad) y DIA (días)
    float COS;         // Declara la variable flotante COS (costo)

    // Pide al usuario que ingrese el tipo de tratamiento, la edad y los días
    printf("Ingrese tipo de tratamiento, edad y dias: ");
    // Lee tres valores enteros del usuario y los asigna a TRA, EDA y DIA
    scanf("%d %d %d", &TRA, &EDA, &DIA);

    // Utiliza una estructura switch para determinar el costo según el tipo de tratamiento
    switch(TRA)
    {
        case 1: COS = DIA * 2800; break;  // Calcula el costo para el tratamiento tipo 1
        case 2: COS = DIA * 1950; break;  // Calcula el costo para el tratamiento tipo 2
        case 3: COS = DIA * 2500; break;  // Calcula el costo para el tratamiento tipo 3
        case 4: COS = DIA * 1150; break;  // Calcula el costo para el tratamiento tipo 4
        default: COS = -1; break;   // Para cualquier otro tipo de tratamiento, asigna -1 a COS
    }
    if(COS != -1)     // Verifica si el costo es válido (diferente de -1)
    {
        if(EDA >= 60) // Si la edad es mayor o igual a 60, aplica un descuento del 25%
        {
            COS = COS * 0.75;
        }else
        {
            // Si la edad es menor o igual a 25, aplica un descuento del 15%
            if(EDA <= 25)
            {
                COS = COS * 0.85;
            }
            // Imprime la clave del tratamiento, los días y el costo total
            printf("\nClave tratamiento: %d\t Dias: %\t Costo total: %8.2f", TRA, DIA, COS);
        }

    }else
    {
        // Si el costo es -1, imprime un mensaje de error indicando que la clave del tratamiento es incorrecta
        printf("\nLa clave del tratamiento es incorrecta");
    }

    return 0;
}
