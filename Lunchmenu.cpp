#include <iostream>
#include <string>

using namespace std;
int main(){

    string lunchmenu []={"burger", "ice cream", "rice", "beans"};
    double prices []={2.50, 1.00, 5.00, 4.50};

    int lunchnum;
    int quantity;
    int arrlen=sizeof(lunchmenu)/ sizeof(string);

    cout<<"Please select the number for the food you want from the menu below"<<endl;
    for(int i=0; i < arrlen; i++){
        cout<<"\n" << i+1<<" "<< lunchmenu[i]<<" "<<prices[i]<<endl;

    }

    cin>>lunchnum;

    cout<<"please enter quantity for the selected lunch"<<endl;
    cin>>quantity;

    double totalprice= prices[lunchnum+1] * quantity;

    cout<<"The total price of the lunch is "<<totalprice;

return 0;
}