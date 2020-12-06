#include<iostream>

using namespace std;
int main(){
    int D1 ,D2, V1, V2, P;
    cin >>D1 >> V1 >>D2 >> V2 >> P;//now we have the input values from the user 

    int days = 0 , noVaccine = 0;

    while(!(noVaccine >= P)){
        if(days >= D1 && days <D2){
            noVaccine = noVaccine + V1;
        }
        else if(days >= D2 && days<D1){
            noVaccine = noVaccine + V2;
        }
        else if((days>=D1) && (days >=D2)){
            noVaccine = noVaccine + V1 +V2;
        }
        days ++;
    }

    cout<<days-1 ;


}