//Identify the lift which is closest to our current location while considering the number of lifts required to reach our desired floor.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
void print(){
    int i=0;
    while(i<2){
    int des,curr,count_1=0,count_2=0,count_3=0,count_4=0, closest = 10, closest_lift;
    cout<<"Enter your destination : ";
    cin>>des;
    cout<<"Enter your current floor : ";
    cin>>curr;
    vector<int> arr={2,5,9,10};
    
    for (int j=0;j<4;j++){
        cout<<"Lift - "<<j<<" at "<<arr[j]<<" floor"<<endl;
        int diff = abs(arr[j] - curr);
        cout<< diff << endl;

        if(diff < closest){
            closest = diff;
            closest_lift = arr[j];
        } 
        if(arr[j]==closest_lift){
            arr[j]=des;
        }
    
    
    }
    

    cout<<"Closest lift is: "<<closest_lift<<endl;
    arr[i]=closest_lift;
    }
    
}



int main() {
    print();
    
    return 0;
    
}