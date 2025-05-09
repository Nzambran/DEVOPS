#include <iostream>
#include <string> 
using namespace std;
class lameClass {
    //Encapsulation hides and allows senstive data to be 
    // be accessed by users
    private:
    //Private attribute
    int students;

    // public is accessible from outside but private is not
    public:
        //Setter
        void population( int s){
            students = s;
        }
        // Getter
        int getPopulation(){
            return students;
        }
    //private cannot be accessed from outside
    // without encapsulation
};

int main() {
    lameClass school;

    school.population(500);
    cout << school.getPopulation();
    return 0;
}