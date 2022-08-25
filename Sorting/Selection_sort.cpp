#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void Selection(int arr[],int n){
        for(int i=0;i<n-1;i++){
            int min_index=i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[min_index])
                    min_index=j;
            }
            swap(&arr[min_index],&arr[i]);
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
    Selection(arr,n);
    print(arr,n);
    
    return 0;
}