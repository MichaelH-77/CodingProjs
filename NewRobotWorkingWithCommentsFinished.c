/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int answer1,answer2;
int input1,input2,input3,input4,input5,input6,input7,i;
int newFastNum,newSlowNum,newHeavyNum,newLightNum,newHighRunNum,newLowRunNum,newMostExpenNum,newLowExpenNum;
float newFast,newSlow,newHeavy,newLight,newHighRun,newLowRun,newMostExpen,newLowExpen;
float avrgSpeed,avrgWeight,avrgRuntime,avrgPrice;
float RobotS [5][5]= {{1,4.5,5.6,12.7,495.99},{2,5.6,8.9,8.2,599.95},{3,2.1,14.6,6.5,399.95},{4,7.9,6.4,3.4,749.65}};
{while(1) { //while(1) Loop to infinitely loop around the code.

//printf functions to display the whole menu into different rows for better readability.
printf("\n\r                                     Menu\n\r");
printf("Robot %.1f // Speed:%.2f m/s // Weight:%.2f kg // Max Run-Time:%.2f Hours // Price:£%.2f \n\r",RobotS[0][0],RobotS[0][1],RobotS[0][2],RobotS[0][3],RobotS[0][4]); //
printf("Robot %.1f // Speed:%.2f m/s // Weight:%.2f kg // Max Run-Time:%.2f Hours // Price:£%.2f \n\r",RobotS[1][0],RobotS[1][1],RobotS[1][2],RobotS[1][3],RobotS[1][4]);
printf("Robot %.1f // Speed:%.2f m/s // Weight:%.2f kg // Max Run-Time:%.2f Hours // Price:£%.2f \n\r",RobotS[2][0],RobotS[2][1],RobotS[2][2],RobotS[2][3],RobotS[2][4]);
printf("Robot %.1f // Speed:%.2f m/s // Weight:%.2f kg // Max Run-Time:%.2f Hours // Price:£%.2f \n\r",RobotS[3][0],RobotS[3][1],RobotS[3][2],RobotS[3][3],RobotS[3][4]);

printf("would you like to change a value? Yes(1) No(2)\n\r");
    scanf("%d", &input7);

if(input7==1) {
printf("\r\nWhich robot would you like to change a value for? (select a robot from the list 1-4)\r\n");
    scanf("%d", &input1); //receives user input (1-4) to then later output information about the selcted robot which can then be edited. 

if(input1==1){ //first robot with information.
    printf("\n\rYou have selcted Robot %f\r\nName: 1 // Speed:%.2f m/s // Weight:%.2f kg // Max Run-Time:%.2f Hours // Price:£%.2f \n\r",RobotS[0][0],RobotS[0][1],RobotS[0][2],RobotS[0][3],RobotS[0][4]);
    printf("\r\nWhich value would you like to change:\r\n"); 
    printf("1) Change Name   2) Change Top Speed   3) Change Weight   4) Change Max Run-Time   5) Change Price\n\r");
    scanf("%d", &input2); //user input to choose which piece of information is edited.
    printf("Enter your new value:");
        if(input2==1) {
        printf(" and/or Enter a new name, e.g. ('5', '6', '10.5' etc.)\n\r");
        scanf("%f",&RobotS[0][0]); }
        else if(input2==2) {
        scanf("%f",&RobotS[0][1]); }
        else if(input2==3) {          //scanf functions within else if's to receive new data which is fed back into the orginal array for the robot's data. 
        scanf("%f",&RobotS[0][2]); }
        else if(input2==4) {
        scanf("%f",&RobotS[0][3]); }
        else if(input2==5) {
        scanf("%f",&RobotS[0][4]); }
    }
    else if(input1==2){ //second robot with information.
    printf("\n\rYou have selcted Robot %f\r\nName: 2 // Speed:%.2f m/s // Weight:%.2f kg // Max Run-Time:%.2f Hours // Price:£%.2f \n\r",RobotS[1][0],RobotS[1][1],RobotS[1][2],RobotS[1][3],RobotS[1][4]);
    printf("\r\nWhich value would you like to change:\r\n");
    printf("1) Change Name   2) Change Top Speed   3) Change Weight   4) Change Max Run-Time   5) Change Price\n\r");
    scanf("%d", &input2); //user input to choose which piece of information is edited.
    printf("Enter your new value:");
        if(input2==1) {
        printf(" and/or Enter a new name, e.g. ('5', '6', '10.5' etc.)\n\r");
        scanf("%f",&RobotS[1][0]); }
        else if(input2==2) {
        scanf("%f",&RobotS[1][1]); }
        else if(input2==3) {          //scanf functions within else if's to receive new data which is fed back into the orginal array for the robot's data.
        scanf("%f",&RobotS[1][2]); }
        else if(input2==4) {
        scanf("%f",&RobotS[1][3]); }
        else if(input2==5) {
        scanf("%f",&RobotS[1][4]); }
    }
    else if(input1==3){ //third robot with information.
    printf("\n\rYou have selcted Robot %f\r\nName: 3 // Speed:%.2f m/s // Weight:%.2f kg // Max Run-Time:%.2f Hours // Price:£%.2f \n\r",RobotS[2][0],RobotS[2][1],RobotS[2][2],RobotS[2][3],RobotS[2][4]);
    printf("\r\nWhich value would you like to change:\r\n");
    printf("1) Change Name   2) Change Top Speed   3) Change Weight   4) Change Max Run-Time   5) Change Price\n\r");
    scanf("%d", &input2); //user input to choose which piece of information is edited.
    printf("Enter your new value:");
        if(input2==1) {
        printf(" and/or Enter a new name, e.g. ('5', '6', '10.5' etc.)\n\r");
        scanf("%f",&RobotS[2][0]); }
        else if(input2==2) {
        scanf("%f",&RobotS[2][1]); }
        else if(input2==3) {          //scanf functions within else if's to receive new data which is fed back into the orginal array for the robot's data.
        scanf("%f",&RobotS[2][2]); }
        else if(input2==4) {
        scanf("%f",&RobotS[2][3]); }
        else if(input2==5) {
        scanf("%f",&RobotS[2][4]); }
    }
    else if(input1==4){ //forth robot with information.
    printf("\n\rYou have selcted Robot %f\r\nName: 4 // Speed:%.2f m/s // Weight:%.2f kg // Max Run-Time:%.2f Hours // Price:£%.2f \n\r",RobotS[3][0],RobotS[3][1],RobotS[3][2],RobotS[3][3],RobotS[3][4]);
    printf("\r\nWhich value would you like to change:\r\n");
    printf("1) Change Name   2) Change Top Speed   3) Change Weight   4) Change Max Run-Time   5) Change Price\n\r");
    scanf("%d", &input2); //user input to choose which piece of information is edited.
    printf("Enter your new value:");
        if(input2==1) {
        printf(" and/or Enter a new name, e.g. ('5', '6', '10.5' etc.)\n\r");
        scanf("%f",&RobotS[3][0]); }
        else if(input2==2) {
        scanf("%f",&RobotS[3][1]); }
        else if(input2==3) {          //scanf functions within else if's to receive new data which is fed back into the orginal array for the robot's data.
        scanf("%f",&RobotS[3][2]); }
        else if(input2==4) {
        scanf("%f",&RobotS[3][3]); }
        else if(input2==5) {
        scanf("%f",&RobotS[3][4]);  }
    }
}
else if(input7==2) {
// mean average calculations stored for when user asks for any stat's average across all robots e.g. average speed etc. 
float avrgSpeed = ((RobotS[0][1]+RobotS[1][1]+RobotS[2][1]+RobotS[3][1])/4);
float avrgWeight = ((RobotS[0][2]+RobotS[1][2]+RobotS[2][2]+RobotS[3][2])/4);
float avrgRuntime = ((RobotS[0][3]+RobotS[1][3]+RobotS[2][3]+RobotS[3][3])/4);
float avrgPrice = ((RobotS[0][4]+RobotS[1][4]+RobotS[2][4]+RobotS[3][4])/4);
//new printf menu to ask user which piece of genral information they want to see, e.g. Fastest/Slowest or Average Weight.
printf("\n\rPlease select which information you would like to see\r\n");
printf("1) Fastest & Slowest            2) Heaviest & Lightest           3) Best & Worst Run-Time           4) Cheapest & Most Expensive \n\r");
printf("5) Average Speed of all Robots  6) Average Weight of all Robots  7) Average Run-Time of all Robots  8) Average Price of all Robots \n\r");
printf("9) Details of any Robot\n\r");
scanf("%d", &input4); //scanf to detect which piece of information the user wants to see.
newFast=RobotS[0][1]; 
newSlow=RobotS[0][1];  //variables set as the first robot's speed/weight/runtime/price to be used as a benchmark to compare other values against in later for loops.
newHeavy=RobotS[1][2];
newLight=RobotS[1][2];
newHighRun=RobotS[1][3];
newLowRun=RobotS[1][3];
newMostExpen=RobotS[1][4];
newLowExpen=RobotS[1][4];
if(input4==1) { //speed for loop
    for(i=0; i<4; i++) {
        if(newFast<RobotS[i][1]) {
            newFast=RobotS[i][1];
        }
    }
    if(newFast==RobotS[0][1]) {  // 4 if & else if's to check which robot possesses the fastest speed and assigns that number to a variable to be displayed back to the user.
        newFastNum=RobotS[0][0];
    }
    else if(newFast==RobotS[1][1]) {
        newFastNum=RobotS[1][0];
    }
    else if(newFast==RobotS[2][1]) {
        newFastNum=RobotS[2][0];
    }
    else if(newFast==RobotS[3][1]) {
        newFastNum=RobotS[3][0];
    } printf("The fastest robot is no. %d and its speed is %fm/s\n\r",newFastNum,newFast);
    
    for(i=0; i<4; i++) {
        if(newSlow>RobotS[i][1]) {
            newSlow=RobotS[i][1];
        }
    }
    if(newSlow==RobotS[0][1]) {  // 4 if & else if's to check which robot possesses the slowest speed and assigns that number to a variable to be displayed back to the user.
        newSlowNum=RobotS[0][0];
    }
    else if(newSlow==RobotS[1][1]) {
        newSlowNum=RobotS[1][0];
    }
    else if(newSlow==RobotS[2][1]) {
        newSlowNum=RobotS[2][0];
    }
    else if(newSlow==RobotS[3][1]) {
        newSlowNum=RobotS[3][0];
    } printf("The slowest robot is no. %d and its speed is %fm/s\n\r",newSlowNum,newSlow);
    }
if(input4==2) { // Weight Check
    for(i=0; i<4; i++) {
        if(newHeavy<RobotS[i][2]) {
            newHeavy=RobotS[i][2];
        }
    }
    if(newHeavy==RobotS[0][2]) {  // 4 if & else if's to check which robot possesses the heaviest weight and assigns that number to a variable to be displayed back to the user.
        newHeavyNum=RobotS[0][0];
    }
    else if(newHeavy==RobotS[1][2]) {
        newHeavyNum=RobotS[1][0];
    }
    else if(newHeavy==RobotS[2][2]) {
        newHeavyNum=RobotS[2][0];
    }
    else if(newHeavy==RobotS[3][2]) {
        newHeavyNum=RobotS[3][0];
    } printf("The heaviest robot is no. %d and its weight is %fkg\n\r",newHeavyNum,newHeavy);
    
    for(i=0; i<4; i++) {
        if(newLight>RobotS[i][2]) {
            newLight=RobotS[i][2];
        }
    }
    if(newLight==RobotS[0][2]) {  // 4 if & else if's to check which robot possesses the lightest weight and assigns that number to a variable to be displayed back to the user.
        newLightNum=RobotS[0][0];
    }
    else if(newLight==RobotS[1][2]) {
        newLightNum=RobotS[1][0];
    }
    else if(newLight==RobotS[2][2]) {
        newLightNum=RobotS[2][0];
    }
    else if(newLight==RobotS[3][2]) {
        newLightNum=RobotS[3][0];
    } printf("The lightest robot is no. %d and its weight is %fkg\n\r",newLightNum,newLight);
    }
if(input4==3) { // runtime check
    for(i=0; i<4; i++) {
        if(newHighRun<RobotS[i][3]) {
            newHighRun=RobotS[i][3];
        }
    }
    if(newHighRun==RobotS[0][3]) {  // 4 if & else if's to check which robot possesses the highest runtime and assigns that number to a variable to be displayed back to the user.
        newHighRunNum=RobotS[0][0];
    }
    else if(newHighRun==RobotS[1][3]) {
        newHighRunNum=RobotS[1][0];
    }
    else if(newHighRun==RobotS[2][3]) {
        newHighRunNum=RobotS[2][0];
    }
    else if(newHighRun==RobotS[3][3]) {
        newHighRunNum=RobotS[3][0];
    } printf("The robot with the highest runtime is no. %d and its total runtime is %f Hours\n\r",newHighRunNum,newHighRun);
    
    for(i=0; i<4; i++) {
        if(newLowRun>RobotS[i][3]) {
            newLowRun=RobotS[i][3];
        }
    }
    if(newLowRun==RobotS[0][3]) {  // 4 if & else if's to check which robot possesses the lowest runtime and assigns that number to a variable to be displayed back to the user.
        newLowRunNum=RobotS[0][0];
    }
    else if(newLowRun==RobotS[1][3]) {
        newLowRunNum=RobotS[1][0];
    }
    else if(newLowRun==RobotS[2][3]) {
        newLowRunNum=RobotS[2][0];
    }
    else if(newLowRun==RobotS[3][3]) {
        newLowRunNum=RobotS[3][0];
    } printf("The robot with the lowest runtime is no. %d and its total runtime is %f Hours\n\r",newLowRunNum,newLowRun);
    }
if(input4==4) {
        for(i=0; i<4; i++) {
        if(newMostExpen<RobotS[i][4]) {
            newMostExpen=RobotS[i][4];
        }
    }
    if(newMostExpen==RobotS[0][4]) {  // 4 if & else if's to check which robot possesses the highest price and assigns that number to a variable to be displayed back to the user.
        newMostExpenNum=RobotS[0][0];
    }
    else if(newMostExpen==RobotS[1][4]) {
        newMostExpenNum=RobotS[1][0];
    }
    else if(newMostExpen==RobotS[2][4]) {
        newMostExpenNum=RobotS[2][0];
    }
    else if(newMostExpen==RobotS[3][4]) {
        newMostExpenNum=RobotS[3][0];
    } printf("The robot with the highest price is no. %d and its total cost is £%.2f\n\r",newMostExpenNum,newMostExpen);
    
    for(i=0; i<4; i++) {
        if(newLowExpen>RobotS[i][4]) {
            newLowExpen=RobotS[i][4];
        }
    }
    if(newLowExpen==RobotS[0][4]) {  // 4 if & else if's to check which robot possesses the lowest price and assigns that number to a variable to be displayed back to the user.
        newLowExpenNum=RobotS[0][0];
    }
    else if(newLowExpen==RobotS[1][4]) {
        newLowExpenNum=RobotS[1][0];
    }
    else if(newLowExpen==RobotS[2][4]) {
        newLowExpenNum=RobotS[2][0];
    }
    else if(newLowExpen==RobotS[3][4]) {
        newLowExpenNum=RobotS[3][0];
    } printf("The robot with the lowest price is no. %d and its total cost is £%.2f\n\r",newLowExpenNum,newLowExpen);
    }
else if(input4==5){    //input4==5 from detailed information menu displays mean average speed of all robots.  
    printf("The average speed of all the Robots is %f m/s\n\r",avrgSpeed); }
else if(input4==6){    //inpu4==6 from detailed information menu displays mean average weight of all robots. 
    printf("The average weight of all the Robots is %f kg\n\r",avrgWeight); }
else if(input4==7){    //input4==7 from detailed information menu displays mean average runtime of all robots. 
    printf("The average runtime of all the Robots is %f Hours\n\r",avrgRuntime); }
else if(input4==8){    //input4==8 from detailed information menu displays mean average price of all robots. 
    printf("The average price of all the Robots is £%f\n\r",avrgPrice); }

else if(input4==9){    //input4==9 from detailed information menu displays data about any selcted robot. 
    printf("Which Robot's information would you like to see? (1,2,3 or 4)\n\r");  
    scanf("%d", &input5); { //user input chooses which robot's has all 4 of their statistics displayed (1-4).
        
        if(input5==1){    // robot 1's stats taken from array and displayed to user.
            printf("\n\rYou have selcted Robot %.1f // Speed:%.2f m/s // Weight:%.2f kg // Max Run-Time:%.2f Hours // Price:£%.2f \n\r",RobotS[0][0],RobotS[0][1],RobotS[0][2],RobotS[0][3],RobotS[0][4]);
        }
        else if(input5==2){   // robot 2's stats taken from array and displayed to user.
            printf("\n\rYou have selcted Robot %.1f // Speed:%.2f m/s // Weight:%.2f kg // Max Run-Time:%.2f Hours // Price:£%.2f \n\r",RobotS[1][0],RobotS[1][1],RobotS[1][2],RobotS[1][3],RobotS[1][4]);
        }
        else if(input5==3){   // robot 3's stats taken from array and displayed to user.
            printf("\n\rYou have selcted Robot %.1f // Speed:%.2f m/s // Weight:%.2f kg // Max Run-Time:%.2f Hours // Price:£%.2f \n\r",RobotS[2][0],RobotS[2][1],RobotS[2][2],RobotS[2][3],RobotS[2][4]);
        }
        else if(input5==4){   // robot 4's stats taken from array and displayed to user.
            printf("\n\rYou have selcted Robot %.1f // Speed:%.2f m/s // Weight:%.2f kg // Max Run-Time:%.2f Hours // Price:£%.2f \n\r",RobotS[3][0],RobotS[3][1],RobotS[3][2],RobotS[3][3],RobotS[3][4]);
        }
        }
}
}
}
} //while loop end
} //main end
