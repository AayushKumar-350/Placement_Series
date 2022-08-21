#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int digit[10],num,j=0,number=0;
    cout<<"Enter the number of elements in array: ";
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"arr["<<i<<"]: ";
        cin>>digit[i];
    }
    for(int i=0;i<num;i++){
        cout<<"Elements in array are: "<<digit[i]<<endl;
    }
    while(j<num){
        number=number+digit[j]*pow(10,j);
        j++;
    }
    cout<<"Number formed will be: "<<number<<endl;
    return 0;
} 
