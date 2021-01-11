#include <iostream>
using namespace std;
void Pythagorean(int num1, int num2, int num3);
void Grade_Checker(unsigned int marks);
void Character_Type_Check(char character);
void Calculator(int num1,int num2,char operation);
void Vowel_Check(char character,int num);
int main()
{   
    int num,num1,num2,num3;
    unsigned int marks;
    char character,choice,operation;
    do{
    cout<<"\nChoose an option from Menu:\n1. Check whether given 3 numbers are Pythagorean triple or not.\n";
    cout<<"2. Display Grade based on marks of student\n3. Check an input character is alphabet, digit or special character\n";
    cout<<"4. Use a Calculator to Perform (add, subtract, multiply, divide or modulus) on 2 numbers.\n";
    cout<<"5. Take a character and number from user and check it is Vowel etc.\n\nEnter 'Q' to quit\n";
    cin>>choice;
    if (choice == '1')
        {cout<<"Enter 3 integers separated by spaces: ";
        cin>> num1 >> num2 >> num3;
        Pythagorean(num1,num2,num3);}
    if (choice == '2')
        {cout<<"Enter marks of student:  ";
        cin>>marks;
        Grade_Checker(marks);}
    if (choice == '3')
        {cout<<"Enter character to check:  ";
        cin>>character;
        Character_Type_Check(character);}
    if (choice == '4')
        {cout<<"Enter 2 numbers separated by space: ";
        cin>>num1>>num2;
        cout<<"Enter any one operation to perform (+,-,*,/,%): ";
        cin>>operation;
        Calculator(num1,num2,operation);}
    if (choice == '5')
        {cout<<"Enter any Character:  ";
        cin>>character;
        cout<<"Enter an integer:  ";
        cin>>num;
        Vowel_Check(character, num);}
    }
    while (choice != 'q' && choice != 'Q');
    return 0;
}

void Pythagorean(int num1, int num2, int num3)
{
  ((num1*num1) == (num2*num2) + (num3*num3))||((num2*num2) == (num1*num1) + (num3*num3))||((num3*num3) == (num1*num1) + (num2*num2))? cout<<"Pythagorean\n":cout<<"No Pythagorean\n";
}

void Grade_Checker(unsigned int marks)
{
    char grade;
    if (marks<50 && marks>=0)
        {grade = 'F';}
    else if(marks>=50 && marks<=59)
        {grade = 'D';}
    else if(marks>=60 && marks<=69)
        {grade = 'C';}
    else if(marks>=70 && marks<=79)
        {grade = 'B';}
    else if(marks>=80 && marks<=89)
        {grade = 'A';}
    else if(marks>=90 && marks<=100)
        {grade = '+';}
    if (grade == '+')
        {cout<<"grade is A+"<<endl;}
    else
        cout<<"grade is "<<grade<<endl;
}

void Character_Type_Check(char character)
{
    if ((character>='a' && character<='z')||(character>='A' && character<='Z'))
        {cout<<"Character is Alphabet\n";}
    else if(character>='0' && character<='9')
        {cout<<"Character is Digit\n";}
    else if(character>=32 && character<=127)
        {cout<<"Special Character\n";}
}

void Calculator(int num1,int num2,char operation)
{
    double result;
    if (operation == '+')
        result = num1 + num2;
    else if (operation == '-')
        result = num1 - num2;
    else if (operation == '*')
        result = num1 * num2;
    else if (operation == '/')
        result =  (double)num1/num2;
    else if (operation == '%')
        result = num1 % num2; 
    cout<<"The result is "<<result<<endl;
}

void Vowel_Check(char character,int num)
{
    if ((character == 'A')||(character == 'E')||(character == 'I')||(character == 'O')||(character == 'U'))
        {num *= num;
        cout<<"The character was Upper case Vowel letter and result is: "<<num<<endl;}
    else if (character>='B' && character<='Z')
        {num *= 2;
        cout<<"The character was Upper case Consonant letter and result is: "<<num<<endl;}
    else if ((character == 'a')||(character == 'e')||(character == 'i')||(character == 'o')||(character == 'u'))
        {num = num*num*num;
        cout<<"The character was Lower case Vowel letter and result is: "<<num<<endl;}
    else if (character>='b' && character<='z')
        {num *= 3;
        cout<<"The character was Lower case Consonant letter and result is: "<<num<<endl;}
    else if(character>=32 && character<=127)
        {cout<<"The character is a special character and result is: "<<num<<endl;}
}