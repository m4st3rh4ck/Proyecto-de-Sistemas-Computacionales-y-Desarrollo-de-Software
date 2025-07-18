#include<stdio.h>

int main()
{
    int opcion;
    int perimetro, area, lado, base, altura, Dmayor, dmenor, diametro, radio;
    double pi = 3.141516;

    printf("\t\tPrograma que calcula el area y perimetro de figuras geometricas\n\n");
    printf("1. Area y Perimetro de un Cuadrado");
    printf("\n2. Area y Perimetro de un Rectangulo");
    printf("\n3. Area y Perimetro de un paralelogramo");
    printf("\n4. Area y Perimetro de un Rombo");
    printf("\n5. Area y Perimetro de un Triangulo");
    printf("\n6. Area y Perimetro de un Circulo\n\n");
    printf("Opcion:");
    scanf("%d",&opcion);

    switch(opcion)
    {
        case 1:
            printf("\t\t\tCalcular el Area y Perimetro de un cuadrado\n\n");
            do
            {
                printf("Ingresa uno de los lados del cuadrado: ");
                scanf("%d", &lado);
                if(lado <= 0)
                {
                    printf("Error!, vuelve a ingresar los datos:");
                }
            }while(lado <= 0);
            perimetro = 4 * lado;
            area = lado * lado;
            printf("El perimetro del cuadrado es: %d\nEl area del cuadrado es: %d",perimetro,area);
            break;
        case 2:
            printf("\t\t\tCalcular el Area y Perimetro de un rectangulo\n\n");
            do
            {
                printf("Ingresa un de los lado del rectangulo:");
                scanf("%d", &lado);
                if(lado <= 0)
                {
                    printf("Error!, vuelve a ingresar los datos:");
                }
            }while(lado <= 0);
            printf("Ingresa la base del rectangulo:");
            do
            {
                scanf("%d", &base);
                if(base <= 0)
                {
                    printf("Error!, vuelve a ingresar los datos!");
                }
            }while(base <= 0);
            perimetro = 2 * (lado + base);
            area = lado * base;
            printf("El perimetro del rectangulo es: %d\nEl area del rectangulo es: %d",perimetro,area);
            break;
        case 3:
            printf("\t\t\tCalcular el Area y Perimetro de un paralelogramo\n\n");
            printf("Ingresa uno de los lados del paralelogramo: ");
            do
            {
                scanf("%d", &lado);
                if(lado <= 0)
                {
                    printf("Error!, vuelve a ingresar los datos:");
                }
            }while(lado <= 0);
            printf("Ingresa la base del paralelogramo: ");
            do
            {
                scanf("%d", &base);
                if(base <= 0)
                {
                    printf("Error!, vuelve a ingresar los datos:");
                }
            }while(base <= 0);
             printf("Ingresa la altura del paralelogramo: ");
            do
            {
                scanf("%d", &altura);
                if(altura <= 0)
                {
                    printf("Error!, vuelve a ingresar los datos:");
                }
            }while(altura <= 0);
            perimetro = 2 * (base + lado);
            area = base * altura;
            printf("El perimetro del paralelogramo es: %d\nEl area del paralelogramo es: %d",perimetro,area);
            break;
        case 4:
            printf("\t\t\tCalcular el Area y Perimetro de un Rombo\n\n");
            printf("Ingresa uno de los lados del rombo: ");
            do
            {
                scanf("%d", &lado);
                if(lado <= 0)
                {
                    printf("Error!, vuelve a ingresar los datos:");
                }
            }while(lado <= 0);
             printf("Ingresa la diagonal mayor del rombo: ");
            do
            {
                scanf("%d", &Dmayor);
                if(Dmayor <= 0)
                {
                    printf("Error!, vuelve a ingresar los datos:");
                }
            }while(Dmayor <= 0);
            printf("Ingresa la diagonal menor del rombo: ");
            do
            {
                scanf("%d", &dmenor);
                if(dmenor <= 0)
                {
                    printf("Error!, vuelve a ingresar los datos:");
                }
            }while(dmenor <= 0);
            perimetro = 4 * lado;
            area = (Dmayor * dmenor) / 2;
            printf("El perimetro del rombo es: %d\nEl area del rombo es: %d",perimetro,area);
            break;
        case 5:
            printf("\t\t\tCalcular el Area y Perimetro de un triangulo\n\n");
             printf("Ingresa un de los lado del triangulo: ");
            do
            {
                scanf("%d", &lado);
                if(lado <= 0)
                {
                    printf("Error!, vuelve a ingresar los datos:");
                }
            }while(lado <= 0);
            printf("Ingresa la altura del triangulo:");
            do
            {
                scanf("%d", &altura);
                if(altura <= 0)
                {
                    printf("Error!, vuelve a ingresar los datos!");
                }
            }while(altura <= 0);
            perimetro = 3 * lado; // Asumiendo un triángulo equilátero para el perímetro con un solo lado
            area = (lado * altura) / 2;
            printf("El perimetro del triangulo es: %d\nEl area del triangulo es: %d",perimetro,area);
            break;
        case 6:
            printf("\t\t\tCalcular el Area y Perimetro de un circulo\n\n");
             printf("Ingresa el diametro del circulo:");
            do
            {
                scanf("%d", &diametro);
                if(diametro <= 0)
                {
                    printf("Error!, vuelve a ingresar los datos:");
                }
            }while(diametro <= 0);
            printf("Ingresa el radio del circulo:");
            do
            {
                scanf("%d", &radio);
                if(radio <= 0)
                {
                    printf("Error!, vuelve a ingresar los datos:");
                }
            }while(radio <= 0);
            perimetro = 2 * pi * radio;
            area = pi * radio * radio;
            printf("El perimetro del circulo es: %d\nEl area del circulo es: %d",perimetro,area);
            break;
        default:
            printf("Opcion no Valida");
            break;
    }
    return 0;
}
