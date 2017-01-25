//
//  CPlusPlusController.cpp
//  FirstCPlusPlusProject
//
//  Created by Hill, Isaac on 1/23/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#include <iostream>
#include "CPlusPlusController.h"

using namespace std;

void CPlusPlusController :: start()
{
    cout << "What is up my man" << endl;
    this->coolio();
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
}
