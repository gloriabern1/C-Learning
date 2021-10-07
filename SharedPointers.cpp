#include <iostream>
#include <memory>


using namespace std;

class Myclass
{
public:
Myclass(){
    cout<<"Constructor Invoked" <<endl;
}

~Myclass(){
    cout<<"Destructor invoked"<< endl;
}

};

int main()
{ 
    unique_ptr<int>unptr1= make_unique<int>(15);
    //this gives the address
    cout<<  unptr1.get() << endl;
    //object stored in the address
    cout <<"Object stored in address"<< *unptr1 << endl;

    //shared pointer
    shared_ptr<Myclass> shptr1= make_shared<Myclass>();
    cout<< "shared count: " << shptr1.use_count() << endl;

{
    shared_ptr<Myclass> shptr2= shptr1;
    cout<< "shared count: " << shptr1.use_count() << endl;
}
 cout<< "shared count: " << shptr1.use_count() << endl;

 //Weak Pointers

 weak_ptr<int> weptr1;
 {
     shared_ptr<int>shptr1= make_shared<int>(25);
     weptr1=shptr1;
 }

 system("pause>nul");
}
