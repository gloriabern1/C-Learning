#include <iostream>
#include <string.h>
 
 using namespace std;

 const char NL = '\n';

 // Function Prototype

 char * ReverseString(char *pStr);


 int main()
 {
 char *str = "This is a test string";
    char *ch  = &(str[0]);
 cout<<"Address of *str"<<ch<<endl;
    for (unsigned i = 0; i < strlen(str); ++i)
       cout << *ch++; // increment to next character

    cout << NL << ReverseString(str);

    return 0;
 }

 ///////////////////////////////////////////////////////
  //ReverseString();

 char * ReverseString(char *pStr)
 {
    // Use pointer arithmetic to reverse the string
    //
    int  len = strlen(pStr);    // Number of chars
    char* s  = &(pStr[0]);      // Get ptr to start char
    char* e  = &(pStr[len-1]);  // Get ptr to end char
    char temp;                  // buffer char


 do
 {
       // Swap outer digits
       temp = *s;   // temp  = start
       *s = *e;   // start = end
       *e   = temp; // end   = temp

       // Move inward, into the string from both ends
       ++s;
    --e;
 }
 while (s < e);   // repeat until midpoint

    return pStr;
 }