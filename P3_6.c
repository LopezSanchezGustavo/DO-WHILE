#include <stdio.h>
/* Lopez Sanchez Gustavo_Contador que cuente el numero de veces que ahorras y nos diga el acumulado ahorrado */
main()
{
    int banco; //Este sera mi acumulador//
    int monto; // Esta indica el monto a ahorrar por evento//
    int numerodedepositos; //Las veces que fuimos al banco//
    char respuesta;

    numerodedepositos=0;
    banco=0;
    monto=0;
    respuesta ='s';

    do
    {
        printf ("\n\n monto a depositar");
        scanf ("%d",&monto);
        banco = banco + monto; //Empieza a trabajar el acumulador//
        numerodedepositos = numerodedepositos + 1; //Trabaja el contador//

        printf ("¿Quieres realizar otro deposito (s/n)?");
        scanf ("%s",&respuesta);



    } while ( respuesta !='s'); //Condicion WHILE significa MIENTRAS//
        
            
        printf ("Dinero que tienes en el banco %d \n",banco);
        printf ("Numero de depositos %d",numerodedepositos);


    return 0;

}