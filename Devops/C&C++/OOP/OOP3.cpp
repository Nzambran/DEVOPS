#include <iostream>
#include <string>
using namespace std;

// Inheritacne is when a class "inherits" attributes and methods 
// from another

//Base Classes w/ multilevel inheritance
class grandpa {
    public:
        string nose = "long";
    protected:
        string deceased = "No";
};

class grandma {
    public:
        string race = "European";
};
//first derived class
class parent : public grandpa{
    public:
        string eyes = "blue";
        void eyeColor() {
            cout << eyes;
        }
};

//Second Derived Class
class child: public parent, public grandma{
    public:
        string hair = "Blonde";
};



int main(){
    child jeff ;
    jeff.eyes;
    cout << "Eyes: "  + jeff.eyes + "\nHair: " + jeff.hair 
    + "\nNose: " + jeff.nose + "\nRace: " + jeff.race + "\n";
    return 0; 
}