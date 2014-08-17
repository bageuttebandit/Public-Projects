/*
Author: Michael O'Brien
Date: 4/4/2012
Name: Infinity and Beyond
About: Count to Infinity while creating a log incase of crashes.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    system("color 3F");   
    system("TITLE Infinity and Beyond");
   
    int a = 0;
    int b = 1;
    int count = 1;
    int infinity;
    
    cout << "To infinity and beyond! Press enter to get this thing started.";
    cin.get();
    
    top:
        count++;
        cout << count;
        cout << endl;
        cout << endl;
        
        fstream log;
        log.open ("log.txt");
        log << count;
        log.close();
        
        if(count == infinity)
        {
           cout << "Congratulations, you're the first person in the world to get to infinity and beyond! Press enter to quit.";
           cin.get();
           return 0;
        }
    goto top;
}
