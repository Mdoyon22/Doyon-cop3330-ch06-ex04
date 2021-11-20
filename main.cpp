/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Doyon
 */


#include "Name_Value.h"
using namespace std;


int main()
{
    vector<Name_value> set;
    string userName;
    string names;
    int userScore;
    int flag = 0;

    cout << "Enter a set of name-and-value pairs, to stop enter \"NoName 0\": " << endl;
    cin >> userName;
    cin >> userScore;


    while (userName.compare("NoName") != 0 && userScore != 0)
    {
        for (int i = 0; i < set.size(); i++)
        {
            
            if (userName == set[i].name)
            {
                cout << "Duplicate entered.\n";
                flag = 1;
                break;
            }
         }
         
        if (flag == 1)
            break;
        
        Name_value temp(userName, userScore);
        set.push_back(temp);
        
        cin >> userName;
        cin >> userScore;
    }
    
    cout << "The list:\n";
    
    for (int i = 0; i < set.size(); i++)
    {
        cout << set[i].name << " " << set[i].score << "\n";
    }
    
    return 0;
}