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

        // in order to find the number of bits for a data type:
        cout << "Size of int: " << sizeof(myAge) << endl;






        //meaning the execution:
        return 0;


    }