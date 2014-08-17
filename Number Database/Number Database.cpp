#include <iostream>

using namespace std;

int main()
{
    system("color 0A");

    double age;
    double ageTotal = 0;
    double numberOfPeopleEntered = 0;
    
    cout << "Enter first number or -1 to quit: ";
    cin >> age;
    
    while(age != -1){
              ageTotal = ageTotal + age;
              numberOfPeopleEntered++;    
              
              cout << "Enter next number or -1 to quit: ";  
              cin >> age;    
    }
    
    cout << endl;
    cout << "Number of numbers entered: " << numberOfPeopleEntered << endl;
    cout << "Average: " << ageTotal/numberOfPeopleEntered << endl;
    cout << endl;
    
    system("pause");
    return 0;
}


