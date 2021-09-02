#include <iostream>
#include "House.h"
#include <string>
using namespace std;

void printHouse(House);

int main(){
    //create an instance of the house class
    //using the default constructor
    House house1;

    //create a second instance
    //using the second constructor
    House house2("pink", 3, 2, 2500);

    printHouse(house1);
    printHouse(house2);
    return 0;
}

void printHouse(House house){

    cout<<"House color: "<<house.getColor()
            <<"\nNumber Bathrooms: "
            <<house.getNumBath()
            <<"\nNumber Bedrooms: "
            <<house.getNumBed()<<endl;
    cout<<"Total square feet: "
            <<house.getSqft()<<endl;
    cout<<endl<<endl;
}