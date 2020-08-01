#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <fstream>



using namespace std;
//////////////////////////////////////////////////////
/*
This summry is from watching this video on Youtube!
show him love if it helped you!!!
https://www.youtube.com/watch?v=Rub-JsjMhWY&t=2418s

*/


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
////////////////////////////////////////////////////////////////////////
// Recursive Function:
int getFactorial(int number) {
    int sum;
    if (number == 1) sum = 1;
    else sum = getFactorial((number - 1) * number);
    return sum;
}
///////////////////////////////////////////////////////////////////
//pointers in functions:
void makeMeYoung(int* age) {
    cout << "I used to be " << *age << endl;
    *age = 21;
}

//////////////////////////////////////////////////////////////////
// Reference Operator in functions:
void actYourAge(int& age) {
    age = 39;
}


//////////////////////////////////////////////////////////////////
// Classes/ Objects:
class Animal {
    /*
    Attributes : height ,weight, ... -> variables
    Capabilities : run, eat,.... -> functions/methods
    */
    // Private:
    // private mean variable that can only be changes using the functions in this class
private:
    int height;
    int weight;
    string name;

    // static variables will be share among all the obejects of type Animal that has ever created
    // normally will be attributs that the class object will not have
    static int numOfAnimals;

    // Public / Encapsulation:
public:
    int getHeight() { return height; }
    int getWeight() { return weight; }
    string getName() { return name; }
    //protecting the values that are going to be stored
    void setHeight(int cm) { height = cm; }
    void setWeight(int kg) { weight = kg; }
    void setName(string animalName) { name = animalName; }
    //declering a prototype: (its an exemple of a way to construct)
    //void setAll(int, int, string) {};
    // constructor
    //name of the constructor is the same as the class
    Animal(int, int, string) {};
    //distructor
    ~Animal() {};
    // another constructor (- sometimes can be called overload)
    //name can be the same but the attributs needs to be diffrenet
    Animal() {};
    //protect - means that it will bw availbale to object of the same class
    // as well as sub classes, but nothing else

    // static method - attach to the class and not the object
    // static methods can only acsses to static member variables
    static int getNumOfAnimals() { return numOfAnimals; }
    //print all the information about the animal
    void toString() {};
};
// now we need to declare evreything
//declering the static number of animals
int Animal::numOfAnimals = 0;
/*
//to do this we nedded to write the setAll in the public section
void Animal::setAll(int height, int weight, string name) {
    // if we want to refer to an object specific heigh and 
    //not just a generic type of height
    //the reason we have to do that is because whenever the
    //class was created there where no Animal objects yet
    //so if we want to refer the specific animal objects vertion
    // or value for height, we have to this infront of it
    this -> height = height;
    this -> name = name;
    this -> weight = weight;
    // the above lines are a way to go around and do the same as
    // the lines in the public section in the class 
    Animal::numOfAnimals++;
}
*/
//the same can be done with a constructor:
Animal::Animal(int height, int weight, string name) {
    this->height = height;
    this->name = name;
    this->weight = weight;
    Animal::numOfAnimals++;
}
//destructor
Animal::~Animal(){
    cout << "Animal " << this-> name << " destroyed" << endl;
}
//overloaded constructor when no attributs are past in
Animal::Animal() {
    Animal::numOfAnimals++;
}
void Animal::toString() {
    cout << this->name << " is " << this->height <<
        " cms tall and" << this->weight << "kg in weight" << endl;
}

////////////////////////////////////////////////////////////////
// Inheritance:
class Dog : public Animal {
private: 
    string sound = "Woof";

public:
    void getSound() { cout << sound << endl; }
    // declering a new constructor
    Dog(int, int, string, string);
    // declering a defult constructor that doens't recive anything and on top of that call a super-class defult constructor
    Dog() : Animal() {};
   //overwrite the function toString() (we want something specific for dogs..)
    void toString();
};
// definding all the methods declerd above at dogs
/////////////////////////////////////////////////////////////
//Superclass Constructor
Dog::Dog(int height, int weight, string name, string bark) :
    // having the animal constructor handling the height weight and name
    // because thoes attributs are going to be shared
    // and just change what is diffrenet
    Animal(height, weight, name) {
    this->sound = bark;
}

void Dog::toString() {
    cout << this->getName() << " is " << this->getHeight()
        << "cms tall and " << this->getWeight()
        << " kgs in weight and says " << this -> sound << endl;

}
////////////////////////////////////////////////////////////////////////////////////
// Virtual Methods and Polymorphism:
// used in the Animal class-> chek it to see how it can be doen
class Human {
public:
    void getFamily() { cout << "Wa are humens" << endl; }
    // we use virtual methods when we know that a sub class will
    // have a function that maight overwrite the base class
    //(exp: Animal-base class, dog- sub class)
    virtual void getClass() { cout << "I'm a Human" << endl; }
    virtual void makeSound() { cout << "The Human says blabla" << endl; }

};

class Girl : public Human {
public:
    void getClass() { cout << "I'm a Girl" << endl; }
    void makeSound() { cout << "The Girl says lalala" << endl; }
};

// Polymorphism:
class BlondGirl : public Girl {
public:
    void getClass() { cout << "I'm a blond girl" << endl; }
    void getDerived() { cout << "I'm a Human and a Girl" << endl; }

};

class Boy : public Human {
public:
    void makeSound() { cout << "The Human says yheyheyhe" << endl; }
};
// polymorphism finds what method to call, because we used the * befor the human
void whatClassAreYou(Human *human) {
    human->getClass();

}

/////////////////////////////////////////////////////////////////////////
// Abstract Data Type:
class Car {
public:
    virtual int getNumWheels() = 0;
    virtual int getNumDoors() = 0;
};

class StationWagon : public Car {
public:
    int getNumWheels(){cout << "station wagon has 4 wheels" << endl; }
    int getNumDoors() { cout << "Station wagon has 4 doors" << endl; }
    //empty constructor
    StationWagon(){}
    //empty distructor
    ~StationWagon();

};




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
    int myAge = 39;
    char myGrade = 'A';
    // checking how much bytes each take in our memory:
    // so we can reference them in a pointer
    cout << "Size of int " << sizeof(myAge) << endl; // will take 4 bytes
    cout << "Size of char" << sizeof(myGrade) << endl; // will take 1 byte
    // address of var -> &var 
    cout << "myAge is located at " << &myAge << endl;
    //pointer is able to store a memory address
    int* agePtr = &myAge;
    cout << "Address of pointer " << agePtr << endl;
    cout << "Data at memory address" << *agePtr << endl;
    // pointers in arrays:
    int badNums[5] = { 4, 13, 14, 24 };
    int* numArrayPtr = badNums;
    cout << "Address " << numArrayPtr << "Value " << *numArrayPtr << endl;
    numArrayPtr++;
    cout << "Address " << numArrayPtr << "Value " << *numArrayPtr << endl;
    // array name is just a pointer to the array!
    cout << "Address " << badNums << "Value " << *badNums << endl;
    //pointers in functions:
    // when you pass a variable pointer to a function you are passing by value
    // when you pass a reference to a function you are actually passing a
    // reference that can't be changed
    makeMeYoung(&myAge);
    cout << "I'm " << myAge << " years old now" << endl;


    ////////////////////////////////////////////////////////////////////
    // Reference Operator:
    // adding & means reference o the assign variable
    int& ageRef = myAge;
    cout << "myAge: " << myAge << endl;
    ageRef++;
    cout << "myAge: " << myAge << endl;
    // reference in functions:
    actYourAge(ageRef);
    cout << "myAge: " << myAge << endl;

    ///////////////////////////////////////
    /*
    When should we use pointers and when should we use references?
    use POINTER if you don't want to have to initilaize decleration
    exp of decleration in reference: 
    int& ageRef = myAge;
    when using pointers there is no need to init

    use a POINTER when you want to assign to it more then one variable.
    a REFERENCE can only assign to one variable.

    use a REFERENCE if you don' want to change whatever you'r pointing at
    */


    ///////////////////////////////////////////////////////////////
    // Classes/ Objects:
    //calling the constructer that needs no attriuts
    Animal fred;
    fred.setHeight(33);
    fred.setWeight(10);
    fred.setName("Fred");
    cout << fred.getName() << " is " << fred.getHeight() << " cms tall and "
        << fred.getWeight() << " kg n weight" << endl;

    //calling the constructer with the attributs
    Animal tom(36, 15, "Tom");
    cout << tom.getName() << " is " << tom.getHeight() << " cms tall and "
        << tom.getWeight() << " kg n weight" << endl;
    

    ////////////////////////////////////////////////////////////////////////////////
    // Call Superclass Constructor:
    //creating a dog object:
    Dog spot(38, 16, "Spot", "Woof");
    cout << "Number of Animals " << Animal::getNumOfAnimals << endl;
    spot.getSound();
    tom.toString();
    spot.toString();
    // we can call the super-class vertion of a method by doing the :: (using the scop operator)
    spot.Animal::toString();

    /////////////////////////////////////////////////////////////////////////////////////////////////
    // calling Virtual Methods and Polymorphism:
    // in this case it doesn't matter if the function is virtual or not
    // because they are both references to humans and girls
    Human* human = new Human;
    Girl* girl = new Girl;
    // the virtual method is important for this:
    whatClassAreYou(human);
    whatClassAreYou(girl);
    // we can see that if we take down the virtual from the method 
    // the result of the 2 lines above is Human and Human
    //but when we get the virtual back (and not leave the method as just void)
    // we get the right answere
    // this basiclly check if the sub class has the method already and use the sub class method
    // when its calling from the sub class


    //Polymorphism:
    Girl yael;
    BlondGirl romi;
    //the base class can also call derive class method as long as they excist in the
    //base class
    Human* ptrGirl = &yael;
    Human* ptrBlondGirl = &romi;
    // now we can call the method that was not over writted
    ptrGirl->getFamily(); // prints "we are Humen"
    // we can call a class that was over writted
    ptrGirl->getClass(); // prints " I'm a Girl"
    //we can call the super-class
    ptrBlondGirl->getFamily();// prints "we are human"
    ptrBlondGirl->getClass(); // prints "I am a blond girl"


    /////////////////////////////////////////////////////////////////////////////
    // Abstract Data Type:
    Human* pBoy = new Boy; 
    Human* pGirl = new Girl; // prints the girls says lalala

    pBoy->makeSound();// prints the boy says yheyheyhe
    pGirl->makeSound();// prints the girls says lalala

    Car* stationWagon = new StationWagon();
    stationWagon->getNumWheels();



        //meaning the execution went trough perfectly fine:
        return 0;


    }