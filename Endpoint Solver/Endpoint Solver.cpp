#include <iostream>
#include <cmath> 
#include <string>

using namespace std;

int main()
{
    
    system("color 0D");
    
    //Username
    string username;
    
    //Point A
    int a;
    int b;
    
    //M.P.
    int c;
    int d;
    
    //Point Z
    int e;
    int f;
    
    //E.P. Varirables
    int g;
    int h;
    
    cout << "Hello user, what is your name? ";
    cin >> username;
    cout << endl;
    cout << "Hello "; 
    cout << username; 
    cout << " this is a computer program that helps you find the E.P. of a line.";
    cout << endl;
    
    //Get Info of A
    cout << "What is the x value of the end coordinate that you are given. ";
    cin >> a;
    cout << endl;
    cout << "What is the y value of the end coordinate that you are given. ";
    cin >> b;
    cout << endl;
    
    //Get Info of B
    cout << "What is the x value of the M.P. coordinate that you are given. ";
    cin >> c;
    cout << endl;
    cout << "What is the y value of the M.P. coordinate that you are given. ";
    cin >> d;
    cout << endl;
    
    //Solver
   g = c - a;
   h = d - b;
   
   //Output Solver
   cout << "x=";
   cout << c + g;
   cout << " ";
   cout << "y="; 
   cout << d + h;
   
   //Graphing Points Output
   cout << endl;
   cout << endl;
   cout << "(";
   cout << c + g;
   cout << ", ";
   cout << d + h;
   cout << ")";
    
    //END
    cout << endl;
    cout << endl;
    system("pause");
    return 0;
}
