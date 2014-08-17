#include <iostream>
#include <windows.h>

using namespace std; 

int main()
{
    system("color 17");
    
    //Declare 2 Variables
    int start = 0;
    int finish = 0;
    
    //Get Finish Point
    cout << "Enter how many seconds you would like to wait for: ";
    cin >> finish;
    cout << endl;
    
    
        //Loop While Not Equal
    while(start != finish)
    {
        cout << "Please wait...";       //Notify user of tick     
        cout << endl;                   //Line break
        Sleep(1000);                    //sleep 1000ms = 1s
        start++;                        //add +1 each loop
        
        //Break If Finished
        if(start == finish)
        {
                 break;                 //break the loop!
        }
    }
    
    cout << endl;
    cout << "Done! It's been ";
    cout << finish;
    cout << " second(s).";
    cout << endl;
    cout << endl;
    
    system("pause");
    return 0;
}
