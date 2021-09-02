#include "Movie.h"
#include <iostream>
using namespace std;

    //default constructor
   
    Movie::Movie(string _name, int _year, string _rating){

       name=_name;
        if(_year>2020 || _year<1900 ){
            cout<<"Invalid year. please enter a valid year";
            cin>>_year;
            cin.ignore();
         }
        year=_year;
       rating=_rating;
    }
    //destructor method
    Movie :: ~Movie(){

    }
    //accessor methods
    string Movie::getName(){
        return name;
    }
     int Movie::getYear(){
        return year;
    }
     string Movie::getRating(){
        return rating;
    }
  
    //mutator methods
    void Movie::setName(string _name){
        name=_name;
    }
     void Movie::setYear(int _year){
         if(_year>2020 || _year<1900 ){
            cout<<"Invalid year. please enter a valid year";
            cin>>_year;
            cin.ignore();
         }
        year=_year;
    }
     void Movie::setRating(string _rating){
        rating=_rating;
    }
    
   


