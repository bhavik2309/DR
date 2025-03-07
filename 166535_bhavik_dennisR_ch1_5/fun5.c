#include "head5.h"

void Celsiustofahrenheitrev()
{

        float fahr, celsius;
        float lower, upper, step;

        lower = 0; // lower limit of temperatuire scale
        upper = 300; // upper limit
        step = 20; // step size

        celsius = upper;


        while (celsius >= lower)
        {
                fahr= (((9.0/5.0)* celsius)+ 32.0) ;
                printf ("%-3.0f\t %6.1f\n",celsius,fahr);
                celsius = celsius - step;                                                                 }

}
