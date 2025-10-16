/*
Step 1 : Understand the problem Statement
Step 2 : Write the algorithm
Step 3 : Decide the programming language
Step 4 : Write the program
Step 5 : Test the Program
*/

/*
   Algorithm
   START
        Accept first number no1
        Accept Second number no2
        If the input is negative then convert it into postive
        Perform Addition of no1 & no2
        Display the Addition on Screen
   STOP
*/
#include<stdio.h>

int AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0;
    
    // Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }
     
    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }    
    fSum = fNo1 + fNo2;    //Business Logic
    return fSum;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter First Number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number : \n");
    scanf("%f",&fValue2);
    
    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f\n",fRet);

    return 0;
}