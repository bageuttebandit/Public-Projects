#include <iostream>
#include <cmath> 
#include <string>

using namespace std;

int main()
{

string username;
int a;
int b;
int c;
int d;

cout << "Hello user, what is your name? ";
cin >> username;
cout << endl;
cout << "Hello "; 
cout << username; 
cout << " this is a computer program that helps you find the slope of a line.";
cout << endl;

cout << "The slope formula is...";
cout << endl;
cout << endl;
cout << "    y2-y1";
cout << endl;
cout << "m = -----";
cout << endl;
cout << "    x2-x1";
cout << endl;
cout << endl;
cout << "Also known as...";
cout << endl;
cout << endl;
cout << "rise";
cout << endl;
cout << "----";
cout << endl;
cout << "run";
cout << endl;
cout << endl;
cout << "Strike Enter to begin.";
cout << endl;
cin.get();
cin.get();
cout << "Enter the Y2 value ";
cin >> a;
cout << endl;
cout << "Enter the Y1 value ";
cin >> b;
cout << endl;
cout << "Enter the X2 value ";
cin >> c;
cout << endl;
cout << "Enter the X1 value ";
cin >> d;
cout << endl;
cout << endl;
cout << "The slope of your line is ";
cout << endl;
cout << a-b;
cout << endl;
cout << "---";
cout << endl;
cout << c-d;
cout << endl;
cout << endl;
cout << "Strike Enter to quit...";
 
cin.get();
cin.get();
return 0;
}
