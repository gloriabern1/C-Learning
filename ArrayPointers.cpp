#include <iostream>

using namespace std;

int main()
{
    char *phrase="some text";
    char phrae[]="some text";

    char *pphrae= &phrae[0];

    int MyIntArray[100];

//one way to get the address of array
   // int *pInt = &MyIntArray[0];

  //Another way to get the address of array
    int *pInt = MyIntArray;  

    cout<<"*phrase"<< phrase<< endl;
    cout<<"phrase[]"<<phrae<<endl;

     cout<<" pointer of phrase[]"<<pphrae<<endl;

cout<<" address of MyIntArray"<<pInt<<endl;
    return 0;
}