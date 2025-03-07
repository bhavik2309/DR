//required headers
//#include<stdio.h>

//
//
//
/*void expand(char s1[],char s2[]){
	int i,j,c,t=0;
	for(i=0;i<=strlen(s1);i++){

		c=s1[i+2];
	if((s1[i]>='a'&& s1[i+1]=='-'&&s1[i+2]<='z')||(s1[i]>='0'&& s1[i+1]=='-'&&s1[i+2]<='9')
||(s1[i]>='A'&& s1[i+1]=='-'&&s1[i+2]<='Z')){

	if(c>=s1[i]){
		
		 for (j = s1[i]; j <= c-1 ; j++)
            	{
                	s2[t] = j;
                	t++;
            	}
           	 s1[i+1] = '\a';
		}
		else
                {
                s2[t] = s1[i];
                t++;
                }
	if(s1[i]>c){

                 for (j = s1[i]; j >= c-1 ; j--)
                {
                        s2[t] = j;
                        t++;
                }
		 s1[i+1] = '\a';
                }
        	
		else 
        	{
            	s2[t] = s1[i];
            	t++;
        	}
	
	s2[t]="\0";
	}
	}

}
*/

#include <stdio.h>
#include <string.h>

void expand(char s1[], char s2[]) {
    int i, j, c, t = 0;

    for (i = 0; i < strlen(s1); i++) {
        // Check if current character is part of a valid range expression
        if ((s1[i] >= 'a' && s1[i + 1] == '-' && s1[i + 2] <= 'z') ||
            (s1[i] >= '0' && s1[i + 1] == '-' && s1[i + 2] <= '9') ||
            (s1[i] >= 'A' && s1[i + 1] == '-' && s1[i + 2] <= 'Z')) {

            c = s1[i + 2]; // End character of the range

            if (c >= s1[i]) {
                // Expand the range forwards
                for (j = s1[i]; j <= c; j++) {
                    s2[t] = j;
                    t++;
                }
            } else {
                // Expand the range backwards
                for (j = s1[i]; j >= c; j--) {
                    s2[t] = j;
                    t++;
                }
            }

            i += 2; // Skip the range pattern in s1
        } else {
            // Copy the current character as is
            s2[t] = s1[i];
            t++;
        }
    }

    s2[t] = '\0'; // Null-terminate the resulting string
}


