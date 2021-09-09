#include "Person.h"
#include <iostream>
using namespace std;

    //default constructor
    Person::Person()
    {
        firstname="Gloria";
        lastname="bernard";
        abitrarynum=90;
    }

    Person::Person(string _firstname, string _lastname, int arbtnum){
            this->firstname=_firstname;
            this->lastname=_lastname;
            this->abitrarynum=arbtnum;
        
    }
    //destructor method
    Person :: ~Person(){

    }
    //accessor methods
    string Person::GetName(){
        return firstname + " " + lastname;
    }
    int Person::GetNumber(){
        return abitrarynum;
    }
   
    //mutator methods
    void Person::SetNumber(int newnum){
        abitrarynum=newnum;
    }
   


