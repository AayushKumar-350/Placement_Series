#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Bubble(int arr[],int n){
        int i,j;
        bool swapped;
        for(i=0;i<n-1;i++){
            swapped=false;
            for(j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                   swap(arr[j],arr[j+1]);
                    swapped=true; 
                }
            }
            if(swapped==false)
                break;
        }
    }
    
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
}
int main(){
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,n);
    cout<<"Sorted array is:"<<endl;
    Bubble(arr,n);
    print(arr,n);
    
    return 0;
}