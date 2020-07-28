#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <fstream>



using namespace std;



int main() {
    // summery of C++

    // this is how you do a comment

    /*
    this is how you do a block comment
    */

    // how to print a statment:
    cout << "Summery of C++" << endl;

    //const var is a var that cant be change during the program
    const double PI = 3.1415926535;

    // char implementation, takes only 1 byte in memory (1byte = 8bites):
    char myGrade = 'A';

    //booliens var
    bool isHappy = true; // true = 1
    bool isSad = false; // false = 0

    //int var (no decimal numbers included) (size of int is 4 bytes):
    int myAge = 27;

    //float var (accurate up to 6 decimal digits):
    float favNum = 3.1415926535;

    //double var (accurate up to 15 decimal digits):
    double otherFavNum = 1.234567891012131;

    //ptinting a val:
    cout << "Favorite Number: " << favNum << endl;

    /*
    Other types include:

    short int: At least 16 bits
    long int: At least 32 bits
    long long int: At least 64 bits
    unsigned int: same size as signed version
    long double: Not less then double
    */

    // in order to find the number of byts for a data type (1 byte = 8 bits):
    cout << "Size of int: " << sizeof(myAge) << endl;
    cout << "Size of char: " << sizeof(myGrade) << endl;
    cout << "Size of bool: " << sizeof(isHappy) << endl;
    cout << "Size of float: " << sizeof(favNum) << endl;
    cout << "Size of double: " << sizeof(otherFavNum) << endl;


    // int largest number
    int largestInt = 2147483647;
    cout << "The largest int number: " << largestInt << endl;
    int overflowInt = 2147483648;
    cout << "The overflow int number print output: " << overflowInt << endl;

    // math calculations:
    cout << "5+2= " << 5 + 2 << endl;
    cout << "5-2= " << 5 - 2 << endl;
    cout << "5*2= " << 5 * 2 << endl;
    cout << "5/2= " << 5 / 2 << endl;
    cout << "5%2= " << 5 % 2 << endl;

    //math shortcuts calculations:
    int five = 5;

    cout << "5++ " << five++ << endl; // =5 preform the action an then increment it
    cout << "++5 " << ++five << endl; // =7 increment first then preform the action
    cout << "5-- " << five-- << endl; // =7 increment first then preform the action
    cout << "--5 " << --five << endl; // =5 preform the action an then increment it

    five += 5; // equals to five = five+5

    // in order to cast- for example:
    cout << "4/5 =  " << 4 / 5 << endl; //return 0 but we wanted a decimal number...
    cout << "4/5 =  " << (float)4 / 5 << endl; //return 4/5 as float and not as int...

    // if and else statments:
    int age = 70;
    int ageAtLastExam = 16;
    bool isNotIntoxicated = true;

    if ((age >= 1) && (age < 16)) {
        cout << "You can't drive" << endl;
    }
    else if (!isNotIntoxicated) {
        cout << "You can't drive" << endl;
    }
    else  if (age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))) {
        cout << "You can't drive" << endl;
    }

    // switch
    int greetingOption = 2;
    switch (greetingOption) {
    case 1:
        cout << "Bonjour" << endl;
        break; // if you dont put break it will chack the other cases as well too
    case 2:
        cout << "Hola" << endl;
        break;
    case 3:
        cout << "Hallo" << endl;
        break;
    default:
        cout << "Helo" << endl; // no need to add a break in this one

    }

    // Ternary Operator:
    // the structure looks like that:
    // variable = (condition) ? true : false;
    int largestNum = (5 > 2) ? 5 : 2; 
        // if its true then largestNum = 5
        // if false largestNum = 2


    //Arrays:
    int myFavNums[5]; // we have to determine the number of cells in the arry and we can't change it.
    int badNums[5] = { 4, 13, 14, 24, 34 };
    cout << "Bad Number 1: " << badNums[0] << endl;



    //For Loop:

    // While Loop:

    // Do While Loop:

    // User Input:

    // Convert String:

    // Strings:

    // Vectors:

    // Functions:

    // Recursive Function:

    // File I/O:

    // Exception Handling:

    // Pointers:

    // Reference Operator:

    // Classes/ Objects:

    // Private:

    // Static Variables:

    // Public / Encapsulation:

    // Constructors:

    // Static Functions:

    // this:

    // Inheritance:

    // Call Superclass Constructor:

    // Excute Static Methods:

    // Virtual Methods:

    // Polymorphism:

    // Abstract Data Type:

        //meaning the execution went trough perfectly fine:
        return 0;


    }