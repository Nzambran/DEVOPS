#include <iostream>
#include <string>
using namespace std;

//Our class
class coolClass {
    //access specifier
    public:
        //ClassObjects
        int myNum;
        string myString;
        //Methods
        void myMethod(){
            cout << "How many maidens you got? \n";
            cin >> myNum;
        }
        void newMethod(int myNum);
        //Constructor: auto called when an obj is created
        coolClass(int x, string y) {
            myNum = x; // we'll also add parameters
            myString = y;
            cout << "Don't tell me you have never talked to a girl?! \n";
            //FYI constructors can also be defined outisde 
        }

};

//Method definition outside the class
// we'll also add a paramter myNum
void coolClass::newMethod(int myNum){
    cout << "You have " << myNum << " Maidens \n";
};

int main(){
    //Declare an object for the class
    coolClass theObj(0, "N/A");
    theObj.myMethod(); //ask for input
    theObj.newMethod(theObj.myNum); //use input
    return 0;
}