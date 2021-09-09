#include <iostream>
#include "Person.h"
using namespace std;

int main(){

//Reference Example
    int a=3;
    cout<<"a is "<<a<<endl;
    //declare int reference
    int& rA=a;
    rA=5;
    cout<<"a is "<<a<<endl;

    Person Kate("kate", "gregory", 46);
    Person& rkate=Kate;
    rkate.SetNumber(67);
    cout<<"rkate: "<<rkate.GetName()<< " "<< rkate.GetNumber()<<endl;

//Pointer Example
    
    //declare int pointer
    int* pA=&a;
    *pA=4;
    cout<<"a is "<<a<<endl;

    int b=100;
    pA=&b;
    (*pA)++;

    cout<< "a "<<a<< ", *pA "<<*pA<<endl;

    Person* pKate=&Kate;
    //one method to access values and properties in a pointer
    (*pKate).SetNumber(328);
    //modern method of accessing values and properties in a pointer
    pKate->SetNumber(289);
    cout<<"kate: "<<Kate.GetName()<< " "<< Kate.GetNumber()<<endl;
    cout<<"pkate: "<<pKate->GetName()<< " "<< pKate->GetNumber()<<endl;

    return 0;
}