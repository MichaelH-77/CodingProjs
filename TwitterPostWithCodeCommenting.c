/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int charCount,i,j,numCount,upperCaseCount,lowerCaseCount,noneAlphWhiteSpaceCount,commonCount2;
int commonCount1=0;
int maxCharCount=0;   // 3 in counts set as 0 by default to be used in each for loop checker.
int count=0;
char twitterPost[280];
char mostCommonChar;
printf("enter sentence\n\r");       // asks user for sentence input.
fgets(twitterPost, 280, stdin);     // fgets to take and store user inputted sentence into a character array with a max. length of 280 characters.           
printf("sentence is: %s\n\r",twitterPost);   // repeats sentence back to user, stored in 'twittePost' array and recalled for printf function.

//Char count loop
for(i=1; twitterPost[i]; i++) {                    //for loop to cycle through all chars in the twitter post ready to compare against ascii table.
    if(twitterPost[i] != ' ') {                    //checks if current char is any ascii value except the white space character.
        charCount ++;                              //adds 1 to the char count everytime a valid char (any char that isnt whitespace) is detected.
    }
}
printf("char count is: %d\n\r",charCount);   //printf function to display total char count, saved in 'charCount' variable.

//number count loop
for(i=0; twitterPost[i]; i++) {                         //for loop to cycle through all chars in the twitter post ready to compare against ascii table.
    if(twitterPost[i] >= 48 && twitterPost[i] <= 57) {  //check to see if current char is within the specified ascii value range.
        numCount ++;                                    // adds 1 to the number count each time an ascii value is detected as a valid number.
    }
}
printf("num count is: %d\n\r",numCount);   //printf function to display total number count, saved in 'numCount' variable.

//lower case count loop
for(i=0; twitterPost[i]; i++) {                          //for loop to cycle through all chars in the twitter post ready to compare against ascii table.
    if(twitterPost[i] >= 97 && twitterPost[i] <= 122) {  //check to see if current char is within the specified ascii value range.
        lowerCaseCount ++;                               // adds 1 to the number count each time an ascii value is detected as a valid lower case character.
    }
}
printf("lower case count is: %d\n\r",lowerCaseCount);   //printf function to display total lower case char count, saved in 'lowerCaseCount' variable.

//upper case count loop
for(i=0; twitterPost[i]; i++) {                         //for loop to cycle through all chars in the twitter post ready to compare against ascii table.
    if(twitterPost[i] >= 65 && twitterPost[i] <= 90) {  //check to see if current char is within the specified ascii value range.
        upperCaseCount ++;                              // adds 1 to the number count each time an ascii value is detected as a valid upper case number.
    }
}
printf("upper case count is: %d\n\r",upperCaseCount);    //printf function to display total upper case char count, saved in 'upperCaseCount' variable.

//none alphanumeric char or white space count loop
for(i=0; twitterPost[i]; i++) {     //for loop to cycle through all chars in the twitter post ready to compare against ascii table.
    if((twitterPost[i] == ' ') || (twitterPost[i] >= 33 && twitterPost[i] <= 47) || (twitterPost[i] >= 58 && twitterPost[i] <= 64) || (twitterPost[i] >= 91 && twitterPost[i] <= 96)
    || (twitterPost[i] >= 123 && twitterPost[i] <= 126)) { // check to detect if current char is within any of the specified ascii value ranges. 
        noneAlphWhiteSpaceCount ++; 
    }
}
printf("noneAlphWhiteSpaceCount count is: %d\n\r",noneAlphWhiteSpaceCount); //printf function to display none alphanumeric char or white space count, saved in 'noneAlphWhiteSpaceCount' variable.

//most common character
for(i=0; twitterPost[i]; i++) {                //for loop to cycle through all chars in the twitter post ready to compare against the next char.
    for(j=0; twitterPost[j]; j++) {            //nested for loop to cycle through all chars in the twitter post to be compared against the previous.
        if(twitterPost[i]==twitterPost[j]) {   // check to detect if both characters have the same ascii value.
            commonCount2++;                    // if chars are the same, 1 is added to the stored counter for that specific character.
        }
    }
    if(commonCount2 > commonCount1) {         // check to detect if the current char is more common than the previously stored most char.
        commonCount1 = commonCount2;          // if true, newest common char is set to the current most common char to be used again for subsequent checks.
        mostCommonChar = twitterPost[i];     // current most common char set to twitterPost[i] so it can be compared against the next char in the next loop around.
        }
    commonCount2=0;    
    }
printf("most common char is '%c'\n\r",mostCommonChar);   //printf function to display most common char in the post, saved in 'mostCommonChar' variable.
} //main end
