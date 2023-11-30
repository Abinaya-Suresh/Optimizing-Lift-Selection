//Identify the lift which is closest to our current location while considering the number of lifts required to reach our desired floor.
#include <iostream>
#include <cstdlib>
using namespace std;
void print(){
    int des,curr,count_1=0,count_2=0,count_3=0,count_4=0;
    cout<<"Enter your destination : ";
    cin>>des;
    cout<<"Enter your current floor : ";
    cin>>curr;
    int arr[4]={2,10,0,7};
    
    for (int i=0;i<4;i++){
        cout<<"Lift - "<<i<<" at "<<arr[i]<<" floor"<<endl;
        int count=abs(curr-arr[i])+abs(curr-des);
        cout<<"No of count :"<<count<<endl;
        if (i==0){
            count_1=count;
        }
        else if (i==1){
            count_2=count;
        
        }
        else if (i==2){
            count_3=count;
        
        }
        else{
            count_4=count;
        
        }
    
    }
    int close=count_1<count_2?count_1:count_2;
    int closer=count_3<close?count_3:close;
    int closest=count_4<closer?count_4:closest;
    cout<<"Closest lift count: "<<closest<<endl;
    cout<<"Please choose Lift No 3: "<<endl;
    
    
}



int main() {
    print();
    
    return 0;
    
}