/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Doyon
 */


#ifndef NAME_VALUE_H
#define NAME_VALUE_H

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;


class Name_value{
public:
    string name;
    int score;

    Name_value()
    {
        name = "";
        score = 0;
    }

    Name_value(string n, int s)
    {
        name = n;
        score = s;
    }
    
};

#endif
