//required heders
#include "head15.h"




//author:bhavik parekh
//created:31 dec 2024
//modified:31 dec 2024
//fuction to print the clesius to fahrenheit table in reverse order
void celsiustofahrenheitrev()
{

        float fahr, celsius;
        printf("enter the value of clesius"); 
	scanf("%f",&celsius);


       
                fahr= (((9.0/5.0)* celsius)+ 32.0) ;
                printf ("clesius=%-3.0f\t fahrenheit=%6.1f\n",celsius,fahr);
                
	

}
