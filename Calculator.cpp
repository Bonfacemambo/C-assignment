#include <iostream>

using namespace std;

int main()
{
    int num1=0 , num2=0,result=0 ;
    char option;
    cout<< "Please select the operation you would like to carry out (+ or -)\n"<< endl ;
    cin>> option ;
    if(option == '+'){
    cout<<"Enter the first integer\n"<< endl;
    cin>> num1 ;
    cout<<"Enter second integer\n"<< endl ;
    cin>> num2 ;
            result = num1 + num2 ;
    cout<< num1 << "+" << num2 << "gives\n"<<result << endl ;

    }
    if(option == '-'){
    cout<<"Enter the first integer\n"<< endl;
    cin>> num1 ;
    cout<<"Enter second integer\n"<< endl ;
    cin>> num2 ;
    result= num1 - num2 ;
        cout<<"The subtraction of the two integers gives\n"<< result<< endl ;
    }
     if ((option!= '+') && (option!= '-')  ){
        cout<< "Invalid operation selected please refer to your option and try again\n";
    }

     return 0;
}
