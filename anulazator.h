#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include <list>
#include <algorithm>
using namespace std;

list<string> Template_log;

void SearchKeyword()
{
    string keyword;
    cout << "Enter the Keyword Log" << endl;
    cin >> keyword;
    auto it = find(Template_log.begin(), Template_log.end(), keyword);
    if (it != Template_log.end())
    {
        cout << "This KeyWord found!" << endl;
        cout << "do you need to show it in which lines?"<< endl;
    }
    else{
        cout << "not found Keyword" << endl;
    }
}

void Display_Logs()
{
    if(!Template_log.empty())
    {
        int count=1;
        for (auto c : Template_log)
        {
            cout << count <<". "<< c;
            cout << endl;
            count++;
        }
    }
    else{
        cout << "there is no log list,please enter the path of your log!" << endl;
    }
    
}

void Path_Logs()
{
    string currentLogPath; 
    cout << "Enter the Path Logs:" << endl;
    
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,currentLogPath);
    
    ifstream logFile(currentLogPath);

    
    if(logFile.is_open())
    {
        string line;
        Template_log.clear();
        
        while(getline(logFile,line))
        {
            Template_log.push_back(line);
        }
        cout << "The file was successfully opened!" << endl;
        logFile.close(); 
    }
    else
    {
        cout << "Error: Failed to open file. Check the path." << endl;
    }
}