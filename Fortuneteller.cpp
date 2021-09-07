#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <ctime>
using namespace std;

string getRandomReply(string [], int);

int main()
{

    ifstream inputfile;
    int readError=20;

    try{
    inputfile.open("C:\\Users\\onyinyeokeke\\mycplp\\replies.txt", ios::in);
    if(inputfile.fail())
    throw readError;

    }
    catch(int error){
        if(error == readError)
        cout<<"Error reading file"<<endl;
        
    }
   
    char answer[30];
    string answers[20];
    int pos=0;

    if(!inputfile){
        cout<<"File is unavailable";
        return -1;
    }
    while(!inputfile.eof()){
        inputfile.getline(answer, 30);
        answers[pos]=answer;
        pos++;
    }

    cout<<"Think of a question for the fortune teller, "
            "\npress enter for the anwer "<<endl;
            //So enter is not read as a reply from the console
    cin.ignore();
    cout<<getRandomReply(answers,20)<<endl;

}

 string getRandomReply(string replies[], int size)
    {
        srand(time(0));
        int randomNum= rand()%20;
        return replies[randomNum];
    }