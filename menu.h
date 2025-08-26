#pragma once
#include <iostream>
#include "anulazator.h"
using namespace std;

void NamePrograme()
{
    cout << "-------------------------------------------\n";
    cout << "|        Console Log File Analyzer        |\n";
    cout << "-------------------------------------------\n";
    cout << endl; 
}
void numbersofmenu()
{
    cout << "1.List of logs.\n";
    cout << "2.Enter the path to the log.\n";
    cout << "3.Search by keyword.\n";
    cout << "4.Count events(unavailable).\n";
    cout << "5.Exit...\n";
}

int Choice = 0;

int MainMenu()
{
    cout << "Welcome to Log Analyzer!\n";
    while (true)
    {
        NamePrograme();
        numbersofmenu();
        cout << "Choice:";
        cin >> Choice;
        switch (Choice) {
            case 1:
                Display_Logs();
                break;
            case 2:
                Path_Logs();
                break;
            case 3:
                SearchKeyword();
                break;
            case 4:
                
                break;
            case 5:
                return 0;
                break;
            default:
                cout << "Invalid option(1-5 option)" << endl;
                break;
                
        }   
    }
    return 0;
}