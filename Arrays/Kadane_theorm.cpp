#include<iostream>
using namespace std;
int Maxsumarray(int arr[],int n){
    int Max_value = arr[0];
    int current_max = arr[0];
    for(int i = 1;i<n;i++){
        current_max = max(arr[i],current_max+arr[i]);
        Max_value = max(current_max,Max_value);
    }
    return Max_value;
}
int main(){
    int arr[10],n;
    cout<<"enter the number of elements in the array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]= ";
        cin>>arr[i];
    }
    int a = sizeof(arr)/sizeof(arr[0]);
    int Max =Maxsumarray(arr,n);
    cout<<"The maximum value of sum will be: "<<Max;
    return 0;
}
