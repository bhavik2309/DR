//required header
#include "head3.h"

//this function is to modify  the temperature conversion program to print a heading above the table
//author:bhavik parekh
//created:26 dec,2024
//modified:26 dec,2024

void Fahrenheittocelsius(){

        float fahr, celsius;
        float lower, upper, step;

        lower = 0; // lower limit of temperatuire scale 
        upper = 300; // upper limit 
        step = 20; // step size                                                       
                                      
	fahr = lower;
	printf("Fahrenheit-Celsius Table\n");
        printf("Fahrenheit    Celsius\n");// to print header of Fahrenheit-Celsius Table
        while (fahr <= upper)
       	{
                celsius = ((5.0/9.0) * (fahr-32.0));//eq of celsius to be converted from fahrenheit
                printf("%3.0f\t    %6.1f\n", fahr, celsius);
                fahr = fahr + step;//step up the value of fahrenheit   
	}
}    

