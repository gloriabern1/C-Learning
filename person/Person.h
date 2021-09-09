#ifndef PERSON_H_
#define PERSON_H_
#include <string>
using namespace std;

class Person
{
    private:
        string firstname;
        string lastname;
        int abitrarynum;

    public:
        //constructors
        Person();
        Person(string, string, int);

        //destructor
        ~Person();

        //accessor methods
        string GetName();
        int GetNumber();

        //mutator methods
        void SetNumber(int);


  
};

#endif 