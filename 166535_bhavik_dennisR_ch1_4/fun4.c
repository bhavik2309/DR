//required header
#include "head4.h"


//this function is to print the corresponding Celsius to Fahrenheit table.
//author:bhavik parekh
//creted:26 dec,2024
//modified:26 dec,2024
void Celsiustofahrenheit(){

        float fahr, celsius;
        float lower, upper, step;

        lower = 0; // lower limit of temperatuire scale
        upper = 300; // upper limit
        step = 20; // step size

        celsius = lower;
        while (celsius <= upper)
        {
                fahr= ((9.0/5.0)* celsius)+32.0;//eq for converting fahrenheit from celsius
                printf("%6.1f\t %3.0f\n", celsius,fahr);
                celsius = celsius + step;//to step up celsius                                                                 
	}
}
