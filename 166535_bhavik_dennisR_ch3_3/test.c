#include<stdio.h>

void expand() {
    int i, c, index, arr[100];
    char start,end;
    index = 0;

    printf("Enter the values to be printed (e.g., a-z or 1-5): ");

    // Read the input
    while ((c = getchar()) != EOF && c != '\n') {
        arr[index++] = c;
    }

    // Process the input for ranges
    for (int index1 = 0; index1 < index; index1++) {
        if (arr[index1] >= 'a' && arr[index1] <= 'z') { // Check for lowercase letters
             start = arr[index1];
            index1++;
            if (arr[index1] == '-') { // Check for '-' following the character
                index1++;
                if (arr[index1] >= 'a' && arr[index1] <= 'z') { // Ensure the range is valid
                        end=arr[index1];}
	    }
	}
	else if(arr[index1] >= 'A' && arr[index1] <= 'Z')	
		 start = arr[index1];
           	index1++;
            	if (arr[index1] == '-') { // Check for '-' following the character
                index1++;
                	if (arr[index1] >= 'A' && arr[index1] <= 'Z') { // Ensure the range is valid
                        end=arr[index1];}
		}
    
	 else if(arr[index1] >= '0' && arr[index1] <= '9')
                start = arr[index1];
                index1++;
                if (arr[index1] == '-') { // Check for '-' following the character
                index1++;
                        if (arr[index1] >= '0' && arr[index1] <= '9') { // Ensure the range is valid
                        end=arr[index1];}
		}


					for (i= start; i <=end ; i++) {
                        			printf("%c", i);
					}                    				

                    printf("\n");
		    }
}
		
int main() {
    expand();
    return 0;
}
        
