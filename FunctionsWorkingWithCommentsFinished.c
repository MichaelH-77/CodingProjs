/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float ascendingOrder(float numInput[]) {  //function outside of main, can call inputs by user from numInput[10] located in main().
int j,i;
float storedNumber; // variable to store temporary number when comparing 2 numbers and switching the position.

    for(j=1, i=0; j<10; i++, j++) //for loop counter cycling i from 0-9 and j from 1-10.
    {
        if(numInput[i]>numInput[j]) //if() check to detect if position 1 is larger than position 2. repeated 10 times within for loop
        {
            storedNumber=numInput[i];  // position 1 number moved to temporary storage when it is detected as being larger than the position 2 number.
            numInput[i]=numInput[j];   // position 2 number (smaller of the two) is then set to position 1 in the array to be put in ascending order.
            numInput[j]=storedNumber;  // stored number (larger number) is then move to position 2.
            j=0;                // j reset to 0 to compare the previous j number again in the next loop, setting j=1 again will skip previous j number in array.
            i=-1;               // i reset to -1 to compare the previous i number again in the next loop, setting i=0 again will skip previous i number in array.
        }
    }                               // if number[i] is NOT bigger than > number[j], the loop continue with the counter not being reset to check the next numbers in the array.
} // ascendingOrder end
int main()
{
    float numInput[10]; // float array setup to stored 10 different float numbers.
    
    printf("enter 10 numbers individually\n\r\n\r"); 
    for(int i=0; i<10; i++)      // for loop to receive user input seperately 10 times
    {
        scanf("%f",&numInput[i]);    // scanf function repeated 10 times to recieive numbers from user, &numinput[i] changes with counter to set each number to its corisponding array position.
    }
    ascendingOrder(numInput);  // used to send values received into numInput[10] to function named ascendingOrder() to carry out the calulations.
    
    printf("The numbers you provided in ascending order are: \n\r"); 
    for(int i=0; i<10; i++)  // counter repeated 10 times to print back 10 numbers.
    {
        printf("%f ",numInput[i]); // printf function with numInput[i] used to print each number in all 10 locations within numInput[10] array.
    }
    
} // main end
