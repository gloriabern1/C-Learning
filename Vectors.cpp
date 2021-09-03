#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main(){

    vector<int> carVins;

    vector<int> num(10);

    vector<double> prices(5, 0.0);
    
    int numCars;
    int vin;

    cout<<"How many cars in the showroom?\n";
    cin>>numCars;
    for(int i=0; i<numCars; i++){
        cout<<"Enter the vin for car"<<i+1<<" :";

        cin>>vin;
        carVins.push_back(vin);

  }

  cout<<"\nVin numbers for the cars in the showroom:\n";
  for(int i=0; i<carVins.size(); i++){
      cout<<carVins[i]<<endl;
  }

  return 0;



}