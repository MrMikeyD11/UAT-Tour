// UAT-Tour.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*

Michael Durst 
8/11/2021 

This is the uat tour assignment where we are assigned to create a tour of UAT using array's, randon number generator. 

*/
#include <iostream>
// include this to allow random number generator
#include <ctime>
using namespace std;

int main()
{
    int professorNames[5];
    professorNames[0] = 19;
    professorNames[1] = 22;
    professorNames[2] = 17;
    professorNames[3] = 20;
    professorNames[4] = 25;

    int age = 0;

    srand(time(NULL));

    int someNum = 0;

    someNum = rand() % 10 + 1;

    cout << "The random number is " << someNum << endl;

    for (int i = 0; i < 5; i++)
    {
        int age = 0;
        age = age + professorNames[i];
        double averageAge = age / 5.0;
        cout << " The average age for these students is " << averageAge << endl;
    }
    
    
    return 0;
}





