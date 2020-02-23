
/*---Branching   Created by Remy Ninganza on 2/19/20.*/
#include <iostream>
using namespace std;

int main() {
    /* code*/
    //bool variable -ex 4.1, page 3
    cout<<"------example 4.1---"<<endl;
    cout <<endl;
    int x;
    bool posNumber;
    //print message asking a user to input a number
    cout<<"enter a number: ";
    //collect a number and store it in x
    cin>>x;
    //check input using bool variable
    posNumber = x>=0;
    //print result
    cout<<"Is the number positive? "<<posNumber<<endl;
    cout <<endl;


    /* -- if statement: Example 4.2, page 4 --*/
     cout<<"------example 4.2---"<<endl;
     cout <<endl;

      //Step 1) Declare int variable as num1 and num2.
    int num1, num2;
      //Step 2) Display message and ask user to type two numbers.
    cout<<"Type two numbers"<<endl;
      //Step 3) Collect information from keyboard and save them in their respective variable.
    cin>>num1>>num2;
      //Step 4) Check if num1 is greater than num2.  If statement is true, print result.
    if (num1 > num2){
        cout<<num1<<" is greater than: "<<num2<<endl;}
      //Step 5) Check if num1 is equal to the zero. If statement is true, print result.
    if (num1==0){
        cout<<num1<<" is equal to zero"<<endl;}

      //Step 6) Check if num1 is equal to num2. If statement is true, print result.
    if (num1 ==num2){
        cout<<num1<<" is equal to "<<num2<<endl;}
      //Step 7) Check if num2 is greater than num1. If statement is true, print result.
    if (num2 > num1){
        cout<<num2<<" is greater than "<<num1<<endl;}

      //Step 8) Check if num2 is equal to zero.  If statement is true, print result.
    if (num2 == 0){
        cout<<num2<<" is equal to Zero"<<endl;}



    /* -- if-else statement: Example 4.3, page 6 -- */
    cout <<endl;
     cout<<"------example 4.3---"<<endl;
     cout <<endl;

     //Step 1) Declare variable as number
    int number;

    //Step 2) Display a message asking the user to type a number.
    cout<<"enter a number : ";
    //Step 3) Collect the number from keyboard and save it in variable number.
    cin>>number;
    //Step 4) Check if number is greater than and equal to zero
    if(number>=0){


    //Step 5) If statement is true, print message
        cout<<number<<" is a positive number"<<endl;}
    //Step 6) else, print message.
     else {
         cout<<number<<" is a negative number"<<endl;
    }




    /* -- if-else statement: Example 4.4, page 7 -- */
    cout <<endl;
     cout<<"------example 4.4---"<<endl;
     cout <<endl;

    //Step 1) Declare variable as number
    int num;

    //Step 2) Display a message asking the user to type a number.
    cout<<"Enter a number: ";
    //Step 3) Collect the number from keyboard and save it in variable number.
    cin>>num;
    //Step 4) Check if number is greater than and equal to zero
    if(num>=0)
    //Step 5) If statement is true, print message
        cout<<num<<" is apositive number"<<endl;
    //Step 6) else, multiple statement lines {print the number, self-multiply the number with -1,print result}
    else{
        cout<<"The entered number is: "<<num<<endl;
        num*=-1;
        cout<<"The absolute value is: "<<num<<endl;
    }



    /* -- if-else if -else statement: Example 4.5, page 9 -- */
    cout <<endl;
     cout<<"------example 4.5---"<<endl;
     cout <<endl;

     //Step 1) Declare variable int as wavelength
    int wavelength;
      //Step 2) Display a message asking the user to type a wavelength between 0 nm and up.
    cout<<"Enter a wavelength: ";
      //Step 3) Collect the number from keyboard and save it variable wavelength
    cin>>wavelength;
      //Step 4) Check if the wavelength variable is less than 379. If it is less than 379, display message “The wavelength ______ is ultraviolet”.
    if (wavelength>=0 && wavelength<=379)
        cout<<wavelength<<" is "<< "ultraviolet"<<endl;

      //Step 5) Check if the wavelength variable is between 380 and 520. If it is between 380 and 520, display message “The wavelength ______ is blue”.
    else if (wavelength >=380 && wavelength<=520)
        cout<<wavelength<<" is blue"<<endl;
      //Step 6) Check if the wavelength variable is between 521 and 590. If it is between 521 and 590, display message “The wavelength ______ is green”.
    else if (wavelength >=521 && wavelength<=590)
        cout<<wavelength<<" is green"<<endl;
      //Step 7) Check if the wavelength variable is between 591 and 740. If it is between 591 and 740, display message “The wavelength ______ is red”.
    else if (wavelength >=591 && wavelength<=740)
        cout<<wavelength<<" is red"<<endl;
      //Step 8) Check if the wavelength variable is more than 741. If it is more than 741, display message “The wavelength ______ is infrared”.
    else if (wavelength > 741)
        cout<<wavelength<<" is infrared"<<endl;
      //Step 9)  For any negative wavelength displays “Invalid wavelength”
    else
      cout<<wavelength<<" is Invalid wavelength"<<endl;




    /* -- Nested if statement: Example 4.6, page 12 -- */
    cout <<endl;
     cout<<"------example 4.6---"<<endl;
     cout <<endl;

    //Step 1) Declare variables for three integers
    int number1 , number2, number3;
    //Step 2) Display a message asking the user to type three numbers. Press Enter to input each number.
    cout<<"Type three numbers"<<endl;
    //Step 3) Collect the number from keyboard and save them in their respective variable.
    cin>>number1>>number2>>number3;
    //Step 4) Check if the number1 is greater than the number2 AND number3
    if (number1>number2 && number1>number3)
    //Step 5) If Step 4 statement is true, nest if statement again and check if the number2 is greater than number3.
    {
        if (number2>number3)

    //Step 6) If number2 is greater than number3 is true, print "number1 >> number2 >> number3"
            cout<<number1<<" > "<<number2<<" > "<<number3<<endl;
    //Step 7) if Step 6 statement is false, else, it means that number3 is greater than number2, print “number1>>number3>>number2”.
        else
            cout<<number1<<" > "<<number3 <<" > "<<number2<<endl;
    }
    //Step 8) If Step 4 is false, if else, check if number2 is greater than the number1 AND number3
    else if (number2>number1 && number2>number3)
    //Step 9) If Step 8 statement is true, nest if statement again and check if the number1 is greater than the number3.
    {
        if(number1>number3)

    //Step 10) Statement condition in Step 9 is true, print “number2 >> number1 >> number3
            cout<<number2<< " > "<<number1<< " > "<< number3<<endl;
    //Step 11) Statement condition in Step 9 is false, else, it means that the number3 is greater than number1, print “number2>>number3>>number1”
        else
            cout<<number2<<" > "<<number3<< " > "<<number1<<endl;
    }
    //Step 12) else, means that number3 is greater than number1 AND number2
    else
    //Step 13) If Step 12 is true, check if the number1 is greater than the number2.If statment is true, print “Number3 >> number1 >> number2
    {
        if (number1>number2)
            cout<<number3<< " > "<< number1<<" > "<<number2<<endl;

    //Step 14) if Step 13 statement is false, else, it means that the number2 is greater than number1, print “number3>>number2>>number1”
        else
            cout<<number3<< " > "<<number2<<" > "<<number1<<endl;
    }



    /* -- switch statement: Example 4.7, page 14 --*/
    cout <<endl;

     cout<<"------example 4.7---"<<endl;
     cout <<endl;


    //Step 1)Declare variable
    int day;
    //Step 2)Print message
    cout<<"Work schedule \n-----------------"<<endl;
    cout<<"Select the day you wish to work"<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for tuesday"<<endl;
    cout<<"3 for wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;

    //Step 3) Collect information from keyboard and store it in variable
    cin>>day;
    //Step 4) Create the switch statement
    switch (day) {
        case 1:
            cout<<"you will work on Monday"<<endl;
            break;
        case 2:
            cout<<"you will work on Tuesday"<<endl;
            break;
        case 3:
            cout<<"you will work on Wednesday"<<endl;
            break;
        case 4:
            cout<<"you will work on Thursday"<<endl;
            break;
        case 5:
            cout<<"you will work on Friday"<<endl;
            break;
        default:
            cout<<"Invalid entry"<<endl;

    }
    cout <<endl;
    /* -- switch statement: Example 4.8, page 16 --*/
    cout<<"------example 4.8---"<<endl;
    cout <<endl;
    //Step 1)Declare variable
    char gender;
    //Step 2)Print message
    cout<<"Gender \ln----------"<<endl;
    cout<<"Type the gender"<<endl;
    cout<<"f or F for female"<<endl;
    cout<<"m or M for male"<<endl;

    //Step 3) Collect information from keyboard and store it in variable
    cin>>gender;
    //Step 4) Create the switch statement
    switch (gender) {
        case 'f':
            cout<<"you selected female"<<endl;
            break;
        case 'F':
            cout<<"you selected female"<<endl;
            break;
        case 'm':
            cout<<"you selected male"<<endl;
            break;
        case 'M':
            cout<<"you selected male"<<endl;
            break;
        default:
            cout<<"Invalid entry"<<endl;

    }


    return 0;
}
