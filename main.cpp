#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <fstream>



using namespace std;

// Functions:
// apearing before the main function.
// this one has defult value, defult values has to come last
int addNumbers(int firstNum, int secoundNum = 0) {
    int combinedValue = firstNum + secoundNum;
    return combinedValue;

}
// functions can have the same names but need to have difrrent attributs inside
int addNumbers(int firstNum, int secoundNum, int thirdNum ) {
    return firstNum + secoundNum + thirdNum;
}

// Recursive Function:
int getFactorial(int number) {
    int sum;
    if (number == 1) sum = 1;
    else sum = getFactorial((number - 1) * number);
    return sum;
}


int main() {
    // summery of C++

    // this is how you do a comment

    /*
    this is how you do a block comment
    */

    // how to print a statment:
    cout << "Summery of C++" << endl;
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    //const var is a var that cant be change during the program
    const double PI = 3.1415926535;
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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
    /////////////////////////////////////////////////////


    /*
    bytes for type:
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


    ///////////////////////////////////////////////////////////////////////////
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


    //////////////////////////////////////////////////////////////////////////////////////
    // in order to cast- for example:
    cout << "4/5 =  " << 4 / 5 << endl; //return 0 but we wanted a decimal number...
    cout << "4/5 =  " << (float)4 / 5 << endl; //return 4/5 as float and not as int...


    //////////////////////////////////////////////////////////////////////////////////////
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


    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //Arrays:
    int myFavNums[5]; // we have to determine the number of cells in the arry and we can't change it.
    int badNums[5] = { 4, 13, 14, 24, 34 };
    cout << "Bad Number 1: " << badNums[0] << endl;
    char myName[5][8] = { {'Y', 'a', 'e', 'l'}, {'L', 'i', 'f', 's', 'h', 'i', 't', 'z'} };
    cout << "2nd in 2nd array: " << myName[1][1] << endl;
    myName[0][2] = 'g';
    cout << "New Value: " << myName[0][2] << endl;



    /////////////////////////////////////////////////////////////////////////////////////////////////////
    //For Loop:
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    int endOfFor = 4;
    for (int j = 0; j < 2; j++) {
        if (j == 1) {
            endOfFor = 8;
        }
        for (int k = 0; k < endOfFor; k++) {
            cout << myName[j][k];
        }
    }


    // While Loop:
    int randNum = (rand() % 100) + 1;
    while (randNum != 100) {
        cout << randNum << ", ";
        randNum = (rand() % 100) + 1;

    }
    cout << endl; // go down a line.



    // Do While Loop: 
    // to do stuff at least one time
    string numberGuessed;
    int intNumberGuessed = 0;
    do {
        cout << "Guess between 1 and 10:";
        getline(cin, numberGuessed);
        // stoi() - converts string into an Integer
        // stod() - converts string into a Double
        intNumberGuessed = stoi(numberGuessed);
        cout << intNumberGuessed << endl;

    } while (intNumberGuessed != 4);
    cout << "you win" << endl;


    // Convert String: (implemention is in the while loop as well):
    // stoi() - converts string into an Integer
    // stod() - converts string into a Double
   // intNumberGuessed = stoi(numberGuessed);
   // cout << intNumberGuessed << endl;

    // Strings:
    char happyArray[6] = { 'H', 'a', 'p', 'p', 'y', '\0' }; // this is the way we did string in C
    string birthdayString = "Birthday"; // this is the way we do it in C++
    cout << happyArray + birthdayString << endl;
    //the size() method
    cout << "size of string: " << birthdayString.size() << endl;
    // the empty() method- return 0 if not empty and 1 if empty.
    cout << "Is string empty? " << birthdayString.empty() << endl;
    // adding an additional string and print it, using append() method in the print function
    cout << birthdayString.append("was your guess") << endl;
    // compering strings number!
    string dogString = "dog";
    string catString = "cat";
    cout << dogString.compare(catString) << endl; // return 1 when its less then
    cout << dogString.compare(dogString) << endl; // return 0 when the strings are equal
    cout << catString.compare(dogString) << endl; // return -1 when its grater then
    //copying strings
    string yourName = "Yael";
    string wholeName = yourName.assign(yourName);
    cout << wholeName << endl;
    // another option for copying
    string firstName = wholeName.assign(wholeName, 0, 5);
    cout << firstName << endl;
    int lastNameIndex = yourName.find("Banas", 0);
    cout << "Index for last name: " << lastNameIndex << endl;
    //insert the string starting from position 5
    yourName.insert(5, "Justin");
    cout << yourName << endl;
    // erasing from a string: erasing 6 charecters ,starting from position 7
    yourName.erase(6, 7);
    cout << yourName << endl;
    // replacing 6 charecters, starting from position 5
    yourName.replace(6, 5, "Maximus");
    cout << yourName << endl;


    ///////////////////////////////////////////////////////////////////////////////////////
   // User Input:
    cout << "What is your Name? ";
    getline(cin, yourName); // entering a value from the user to the var

    cout << "hello" << yourName << endl;
    double eulersConstant = .57721;
    string eulerGuess;
    double eulerGuessDouble;

    cout << "what is Euler's constant?";
    getline(cin, eulerGuess);
    // convert string to double
    eulerGuessDouble = stod(eulerGuess);
    if (eulerGuessDouble == eulersConstant) {
        cout << "You are right" << endl;
    }
    else {
        cout << "you are wrong" << endl;
    }




    // Vectors:
    // vectors are very similar to array, the diffrence is that you cange change the size of vectors
    //init vector:
    vector <int> lotteryNumVect(10);
    int lotteryNumArray[5] = { 4, 13, 14, 24, 34 };
    //inserting to a vector:
    //inserting from the begining, inserting the array specified, inserting only 3 numbers from the array 
    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray + 3);
    // printing only the third number
    cout << lotteryNumVect.at(2) << endl;
    //inserting to a vector- starting from position 5, inserting 44
    lotteryNumVect.insert(lotteryNumVect.begin() + 5, 44);
    cout << lotteryNumVect.at(5) << endl;
    // push back at the end of a vector:
    lotteryNumVect.push_back(64);
    //printing the last number:
    cout << "Final Value: " << lotteryNumVect.back() << endl;
    //printing the first number:
    cout << "First Value: " << lotteryNumVect.front() << endl;
    //printing the if empty or not- if empty returns 1 (True) if not returns 0 (False):
    cout << "is empty?  " << lotteryNumVect.empty() << endl;
    //printing the size of the vector:
    cout << "the vector size is:  " << lotteryNumVect.size() << endl;
    lotteryNumVect.pop_back();


    /////////////////////////////////////////////////////////////////////////
    // calling the Functions:
    cout << addNumbers(1) << endl;
    cout << addNumbers(1, 5, 6) << endl;


    /////////////////////////////////////////////////////////////////////////////////////
    //calling the Recursive Function:
    cout << "The factorial of 3 is: " << getFactorial(3) << endl;

    ///////////////////////////////////////////////////////////////////////////////////////
    // File I/O:
    // how to read and write files using text or machinery readable
    string steveQuote = "A day without sunshine is like, you know, night";
    // creating a file so we can save the quote above into the file
    ofstream writer("stevequote.txt");
    //verifing that the file stream was indeed created
    if (! writer) {
        cout << "Error opening file" << endl;
        //signaling the an error accured using return -1
        return -1;
    }
    else {
        // the file you want to write to, and then the string you want to write in the file
        writer << steveQuote << endl;
        // colsing the file, important, you can't open another file unless you close the former
        writer.close();
    }
    //we want to write to the txt file from before.
    // the last attribut on the line is explaind above the line 
    ofstream writer2("stevequote.txt", ios::app);
    // Open a stream to append to whats there with ios::app
    //ios::binary : Treat the file as binary
    // ios::trunc : Default
    // ios::out : Open a file to write output
    //verifing that the file stream was indeed created
    if (!writer2) {
        cout << "Error opening file" << endl;
        //signaling the an error accured using return -1
        return -1;
    }
    else {
        // the file you want to write to, and then the string you want to write in the file
        writer2 << "\n -Steve Martin" << endl;
        // colsing the file, important, you can't open another file unless you close the former
        writer2.close();
    }
    // how to read from a file:
    char letter;
    ifstream reader("stevequote.txt");
    if (! reader) {
        cout << "Error opening file" << endl;
        return -1;
    }
    else {
        // reader.eof() returns the end of the file
        for (int i = 0; reader.eof(); i++) {
            // gets the next letter of output that we want into the var letter
            reader.get(letter);
            // basically printing the file letter by letter
            cout << letter;
        }
        cout << endl;
    }

    ///////////////////////////////////////////////////////////////////////////
    // Exception Handling:
    //helps to aviod potentioal problems
    // we fouces here on divition in zero
    int number = 0;
    try {
        if (number != 0) {
            cout << 2 / number << endl;
        }
        else throw(number);
    }
    // its not mendetory to do catch but it nicer and make sense with the error writing
    catch (int number) {
        cout << number << "is not valid" << endl;
    }

    ////////////////////////////////////////////////////////////////
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