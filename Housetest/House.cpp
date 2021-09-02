#include "House.h"
#include <iostream>
using namespace std;

    //default constructor
    House::House()
    {
        houseColor="Blue";
        numBathrooms=2;
        numBedrooms=3;
        squareFeet=1200;
    }

    House::House(string color, int numBath, int numBed, double sqft){

        houseColor=color;
        numBedrooms=numBed;
        numBathrooms=numBath;
        squareFeet=sqft;
    }
    //destructor method
    House :: ~House(){

    }
    //accessor methods
    string House::getColor(){
        return houseColor;
    }
    int House::getNumBath(){
        return numBathrooms;
    }
    int House::getNumBed(){
        return numBedrooms;
    }
    double House::getSqft(){
        return squareFeet;
    }
    //mutator methods
    void House::setColor(string c){
        houseColor=c;
    }
    void House::setNumBed(int bed){
        numBedrooms=bed;
    }
    void House::setNumBath(int bath){
        numBathrooms=bath;
    }
    void House::setSqft(double sqft){
        squareFeet=sqft;
    }


