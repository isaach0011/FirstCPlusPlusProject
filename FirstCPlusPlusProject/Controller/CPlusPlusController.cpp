//
//  CPlusPlusController.cpp
//  FirstCPlusPlusProject
//
//  Created by Hill, Isaac on 1/23/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#include <iostream>
#include "../Model/Timer.hpp"
#include "CPlusPlusController.h"

using namespace std;

void CPlusPlusController :: usePointerToChange(int * pointedTo)
{
    *pointedTo = 2 * (1230985);
}

void CPlusPlusController :: start()
{
    cout << "What would you like to run?" << endl;
    string program;
    cin >> program;
    if (program == "coolio")
    {
        this->coolio();
    }
    if (program == "Guided Calculator")
    {
        this->guidedCalculator();
    }
    if (program == "calculator")
    {
        this->calculator();
    }
    if (program == "numbers")
    {
        int myNumber = 9;
        
        cout << "Starting with: " << myNumber << endl;
        useNumbers(myNumber);
        cout << "Look no change: " << myNumber << endl;
        
        cout << "Changing a value" << endl;
        myNumber = impactNumber();
        cout << "See - impacted " << myNumber << endl;
    }
    if (program == "pointer")
    {
        int myNumber = 9;
        int * numberPointer = &myNumber;
        
        cout << "Starting with: " << myNumber << endl;
        useNumbers(myNumber);
        cout << "Look no change: " << myNumber << endl;
        
        cout << "Changing a value" << endl;
        myNumber = impactNumber();
        cout << "See - impacted " << myNumber << endl;
        
        cout << "Changing with a pointer" << endl;
        usePointerToChange(numberPointer);
        cout << "See how the number has been changed: " << myNumber << endl;
    }
    if (program == "timer")
    {
        this->testTimer();
    }
}

void CPlusPlusController :: coolio()
{
    cout << "Hi, how old are you?" << endl;
    int age;
    cin >> age;
    cout << "Oh so you are, " << age << "?" << endl;
    cout << "What's your name?" << endl;
    string name;
    cin >> name;
    cout << "Oh, you're name is " << name << "?" << endl;
    cout << "That's pretty neat" << endl;
    cin.ignore();
    cin >> name;
    cout << name << endl;
    cout << "Type your name and age" << endl;
    cin >> name >> age;
    cout << "Your name is " << name << " and you are " << age  << "." << endl;
    cout << "Type in your full name" << endl;
    cin.ignore();
    getline(cin, name);
    cout << "Your full name is " << name << "." << endl;
    if (name == "Isaac")
    {
        cout << "I know that guy" << endl;
    }
}

void CPlusPlusController :: guidedCalculator()
{
    int i = 1;
    while (i == 1)
    {
        cout << "Calculator" << endl;
        string operation;
        cout << "What would you like to do?" << endl;
        cout << "Add Subtract Divide Multiply";
        cin >> operation;
        if (operation == "add")
        {
            int number1;
            int number2;
            cout << "What two numbers would you like to add?" << endl;
            cin >> number1 >> number2;
            cout << (number1 + number2) << endl;
            cout << "Would you like to do something else?" << endl;
            cout << "Yes   No" << endl;
            string answer;
            cin >> answer;
            if (answer == "no")
            {
                i = 0;
            }
        }
        else if (operation == "subtract")
        {
            int number1;
            int number2;
            cout << "What two numbers would you like to subtract?" << endl;
            cin >> number1 >> number2;
            cout << (number1 - number2) << endl;
            cout << "Would you like to do something else?" << endl;
            cout << "Yes   No" << endl;
            string answer;
            cin >> answer;
            if (answer == "no")
            {
                i = 0;
            }
        }
        else if (operation == "multiply")
        {
            int number1;
            int number2;
            cout << "What two numbers would you like to multiply?" << endl;
            cin >> number1 >> number2;
            cout << (number1 * number2) << endl;
            cout << "Would you like to do something else?" << endl;
            cout << "Yes   No" << endl;
            string answer;
            cin >> answer;
            if (answer == "no")
            {
                i = 0;
            }
        }
        else if (operation == "divide")
        {
            int number1;
            int number2;
            cout << "What two numbers would you like to divide?" << endl;
            cin >> number1 >> number2;
            cout << (number1 / number2) << endl;
            cout << "Would you like to do something else?" << endl;
            cout << "Yes   No" << endl;
            string answer;
            cin >> answer;
            if (answer == "no")
            {
                i = 0;
            }
        }
    }
    cout << "Goodbye!" << endl;
}

void CPlusPlusController :: calculator()
{
    int i = 1;
        cout << "Calculator" << endl;
        cout << "Type in your number, your operation, then your other number." << endl;
        cout << "Example: 2 + 2" << endl;
        while (i == 1)
        {
            cin.ignore();
            int number1;
            string operation;
            int number2;
            cin >> number1 >> operation >> number2;
            if (operation == "+")
            {
                cout << (number1 + number2) << endl;
                if (number1 + number2 == 666)
                {
                    cout << "You found the secret quit option. Goodbye." << endl;
                    i = 0;
                }
            }
            else if (operation == "-")
            {
                cout << (number1 - number2) << endl;
            }
            else if (operation == "*")
            {
                cout << (number1 * number2) << endl;
            }
            else if (operation == "/")
            {
                cout << (number1 / number2) << endl;
            }
            else if (operation == "%")
            {
                cout << (number1 % number2) << endl;
            }
            else
            {
                cout << "I don't know what that operation is." << endl;
            }
        }
}

void CPlusPlusController :: useNumbers(int suppliedNumber)
{
    cout << "I was given: " <<suppliedNumber << endl;
    suppliedNumber = (suppliedNumber * 3 + 3243) / 42;
    cout << "It is now: " << suppliedNumber << endl;
}

int CPlusPlusController :: impactNumber()
{
    return 8765432;
}

void CPlusPlusController :: testTimer()
{
    Timer afternoonTime;
    
    afternoonTime.startTimer();
    afternoonTime.stopTimer();
    afternoonTime.displayTimerInformation();
    
}
