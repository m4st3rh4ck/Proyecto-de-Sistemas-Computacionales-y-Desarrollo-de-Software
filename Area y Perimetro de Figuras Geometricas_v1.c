#include <stdio.h>

int main()
{
    int opcion;
    double perimetro, area;
    int lado, base, altura, Dmayor, dmenor, diametro, radio;
    double pi = 3.1416;
    char repetir;

    do
    {
        printf("\n\t\tPrograma que calcula el area y perimetro de figuras geometricas\n\n");
        printf("0. Salir del programa");
        printf("\n1. Area y Perimetro de un Cuadrado");
        printf("\n2. Area y Perimetro de un Rectangulo");
        printf("\n3. Area y Perimetro de un Paralelogramo");
        printf("\n4. Area y Perimetro de un Rombo");
        printf("\n5. Area y Perimetro de un Triangulo");
        printf("\n6. Area y Perimetro de un Circulo\n");
        printf("\nOpcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("\n\t\t\tCalcular el Area y Perimetro de un Cuadrado\n\n");
            do
            {
                printf("Ingresa uno de los lados del cuadrado: ");
                scanf("%d", &lado);
                if (lado <= 0)
                {
                    printf("Error! Vuelve a ingresar los datos.\n");
                }
            } while (lado <= 0);
            perimetro = 4 * lado;
            area = lado * lado;
            printf("El perimetro del cuadrado es: %.2f\nEl area del cuadrado es: %.2f\n", perimetro, area);
            break;

        case 2:
            printf("\n\t\t\tCalcular el Area y Perimetro de un Rectangulo\n\n");
            do
            {
                printf("Ingresa la altura del rectangulo: ");
                scanf("%d", &lado);
                if (lado <= 0)
                {
                    printf("Error! Vuelve a ingresar los datos.\n");
                }
            } while (lado <= 0);

            do
            {
                printf("Ingresa la base del rectangulo: ");
                scanf("%d", &base);
                if (base <= 0)
                {
                    printf("Error! Vuelve a ingresar los datos.\n");
                }
            } while (base <= 0);

            perimetro = 2 * (lado + base);
            area = lado * base;
            printf("El perimetro del rectangulo es: %.2f\nEl area del rectangulo es: %.2f\n", perimetro, area);
            break;

        case 3:
            printf("\n\t\t\tCalcular el Area y Perimetro de un Paralelogramo\n\n");

            do
            {
                printf("Ingresa uno de los lados del paralelogramo: ");
                scanf("%d", &lado);
                if (lado <= 0)
                {
                    printf("Error! Vuelve a ingresar los datos.\n");
                }
            } while (lado <= 0);

            do
            {
                printf("Ingresa la base del paralelogramo: ");
                scanf("%d", &base);
                if (base <= 0)
                {
                    printf("Error! Vuelve a ingresar los datos.\n");
                }
            } while (base <= 0);

            do
            {
                printf("Ingresa la altura del paralelogramo: ");
                scanf("%d", &altura);
                if (altura <= 0)
                {
                    printf("Error! Vuelve a ingresar los datos.\n");
                }
            } while (altura <= 0);

            perimetro = 2 * (base + lado);
            area = base * altura;
            printf("El perimetro del paralelogramo es: %.2f\nEl area del paralelogramo es: %.2f\n", perimetro, area);
            break;

        case 4:
            printf("\n\t\t\tCalcular el Area y Perimetro de un Rombo\n\n");

            do
            {
                printf("Ingresa uno de los lados del rombo: ");
                scanf("%d", &lado);
                if (lado <= 0)
                {
                    printf("Error! Vuelve a ingresar los datos.\n");
                }
            } while (lado <= 0);

            do
            {
                printf("Ingresa la diagonal mayor del rombo: ");
                scanf("%d", &Dmayor);
                if (Dmayor <= 0)
                {
                    printf("Error! Vuelve a ingresar los datos.\n");
                }
            } while (Dmayor <= 0);

            do
            {
                printf("Ingresa la diagonal menor del rombo: ");
                scanf("%d", &dmenor);
                if (dmenor <= 0)
                {
                    printf("Error! Vuelve a ingresar los datos.\n");
                }
            } while (dmenor <= 0);

            perimetro = 4 * lado;
            area = (Dmayor * dmenor) / 2.0;
            printf("El perimetro del rombo es: %.2f\nEl area del rombo es: %.2f\n", perimetro, area);
            break;

        case 5:
            printf("\n\t\t\tCalcular el Area y Perimetro de un Triangulo\n\n");

            do
            {
                printf("Ingresa el lado del triangulo (equilatero): ");
                scanf("%d", &lado);
                if (lado <= 0)
                {
                    printf("Error! Vuelve a ingresar los datos.\n");
                }
            } while (lado <= 0);

            do
            {
                printf("Ingresa la altura del triangulo: ");
                scanf("%d", &altura);
                if (altura <= 0)
                {
                    printf("Error! Vuelve a ingresar los datos.\n");
                }
            } while (altura <= 0);

            perimetro = 3 * lado;
            area = (lado * altura) / 2.0;
            printf("El perimetro del triangulo es: %.2f\nEl area del triangulo es: %.2f\n", perimetro, area);
            break;

        case 6:
            printf("\n\t\t\tCalcular el Area y Perimetro de un Circulo\n\n");

            do
            {
                printf("Ingresa el radio del circulo: ");
                scanf("%d", &radio);
                if (radio <= 0)
                {
                    printf("Error! Vuelve a ingresar los datos.\n");
                }
            } while (radio <= 0);

            perimetro = 2 * pi * radio;
            area = pi * radio * radio;
            printf("El perimetro del circulo es: %.2f\nEl area del circulo es: %.2f\n", perimetro, area);
            break;

        case 0:
            printf("Saliendo del programa...\n");
            break;

        default:
            printf("Opcion no valida. Intente de nuevo.\n");
            break;
        }

        if (opcion != 0) {
            printf("\n¿Desea realizar otro calculo? (s/n): ");
            scanf(" %c", &repetir);
        } else {
            repetir = 'n';
        }

    } while (repetir == 's' || repetir == 'S');

    return 0;
}
