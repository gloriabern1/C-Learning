#include <iostream>
using namespace std;
int main(){
    int months=0;
    double balance=5000;
    double payment=150;
    while(balance>0){
        months= months+1;
        balance= balance-payment;
    }

    cout<<"it will take you "<<months<<" months to pay off your loan"<<endl;
    return 0;
}