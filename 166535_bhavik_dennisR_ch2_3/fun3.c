//required header
#include<stdio.h>
#include "head3.h"


int Power(int n)
{
    long long iPower;
    for (iPower = 1; n > 0; n--)
    iPower = iPower * 16;

    return iPower;
}
int HextoInteger(char s[])
{

        int value=0;
        int wordcount=0;
        int index=0;
        int powervalue=0;
        int charvalue=0;
if (s[0]== '0' && ( s[1]== 'x' || s[1]== 'X' )){
        s+=2;
        }
while(s[wordcount] !='\0')
        {
        wordcount++;
        }

for (index=0;index < wordcount;++index)
{
        powervalue = Power( wordcount-1-index );

	if(s[index]>='0' && s[index]<='9'){
        	charvalue = s[index]-'0';
        	}
		else if(s[index]>='a' && s[index]<='f'){
        	charvalue = s[index]- 'a' + 10;
		}
		else if (s[index]>='A' && s[index]<='F'){
		charvalue = s[index]- 'A' + 10 ;
		}
		else {
                printf("invalid character:%c\n",s[index]);
                return -1;
        }
        
        value = ((powervalue) * (charvalue)) + value ;
		
	}
return value;
}

 
