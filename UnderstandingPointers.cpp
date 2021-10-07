#include <iostream>
using namespace std;

typedef struct{
    int width;
    int height;
    unsigned* bits;
} image;

const char NL = '\n';

int main(){

    int cost=50;

    int* pCost=&cost;
    cout<<"the variable cost, pointed to by pcost is "<< *pCost<<
    "\n and the address is "<<pCost<<endl;

    image picture1;

    image* pImage= &picture1;

    picture1.width = 100;
    cout << "Picture1.width     == "
      << picture1.width << NL;
    cout << "pImage->width      == "
       << pImage->width << NL;
    cout << "(*pImage).width    == "
       << (*pImage).width << NL;
    cout << "(&Picture1)->width == "
       << (&picture1)->width << NL;
}