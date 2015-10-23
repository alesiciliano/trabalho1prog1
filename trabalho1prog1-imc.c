# include <stdio.h>

int main()
{
    float altura;
    float peso;
    float IMC;
    
    printf ("\n Entre com sua altura (em metros):\n");
    scanf ("%f",&altura);
    
    printf ("\n Entre com seu peso (em quilos):\n");
    scanf ("%f",&peso);
   
    IMC=peso/(altura*altura);
   
    printf("\n Seu IMC é:  %.2f\n", IMC);
   
    if (IMC>30.99)
        {
        printf ("\n De acordo com o seu IMC você está OBESO !\n");
        }
    else if (IMC>25.99)
        {
        printf ("\n De acordo com o seu IMC você está ACIMA DO PESO !\n");
        }
    else if (IMC>19.99)
        {
        printf ("\n De acordo com o seu IMC você está NO PESO IDEAL !\n");
        }
    else if (IMC<19.99)
        {
        printf ("\n De acordo com o seu IMC você está MAGRO !\n");
        }
return 0;
}