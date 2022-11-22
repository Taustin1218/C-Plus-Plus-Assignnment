#include <iostream>
#include "./headers/Statistician.h"

using namespace std;

int main() {
    // create a Statistician object named s1 using its one-arg 
    // constructor giving it an argument of 3.5
    Statistician statistician1(3.5);

    // declare local variables that will be used when calling 
    // s1's getter method
    double lowest;
    double highest;
    double sum;

    // call method on s1 that will display it to stdout
    cout << "Statistitician 1 : ";
    statistician1.printStatistician();

    // call method on s1 that will add 5.2 to it
    statistician1.addNumber(5.2);

    // call method on s1 that will display it to stdout
    statistician1.computeSum();
    cout << "Statistician 1 : ";
    statistician1.printStatistician();

    // call method on s1 that will add -7.8 to it
    statistician1.addNumber(-7.8);

    // call method on s1 that will display it to stdout
    cout << "Statistician 1 : ";
    statistician1.printStatistician();

    // call method on s1 that will get its field values
    // and store them in local variables
    statistician1.getStatistician(lowest, highest, sum);

    // display values in local variables to stdout
    cout << "Statistician 1 Lowest : " << lowest << endl;
    cout << "Statistician 1 Highest : " << highest << endl;
    cout << "Statistician 1 Sum : " << sum << endl;

    // create a Statistician object named s2 using its no-arg
    // constructor
    Statistician statistician2;

    // call method on s2 that will display it to stdout
    cout << "Statistician 2 : ";
    statistician1.printStatistician();

    // call method on s1 that will test if it is equal to s2
    // and display its return to stdout as false or true
    cout << "Statistician 1 equals Statistician 2 ? " <<
        (statistician1.equalStatistician(statistician2) ? "true" : "false") << endl;

    // call method on s2 that will add the double numbers to it 
    // that will cause it to be equal to s1
    statistician2.addNumber(3.5);
    statistician2.addNumber(5.2);
    statistician2.addNumber(-7.8);

    // call method on s1 that will test if it is equal to s2
    // and display its return to stdout as false or true
    cout << "Statistician 1 equals Statistician 2 ? " <<
        (statistician1.equalStatistician(statistician2) ? "true" : "false") << endl;
}