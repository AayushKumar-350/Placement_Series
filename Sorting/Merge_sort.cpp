//In this we use divide and conqure approach and the complexity is o(nlogn)
#include<stdlib.h>
#include<iostream>
using namespace std;
void merge(int *arr,int start,int mid,int end){
  int temp[end-start+1];
  int i=start,j=mid+1,k=0;
  while(i<=mid && j<=end){
    if(arr[i]<arr[j]){
      arr[k]=arr[i];
      i++;
      k++;
    }
    else
      arr[k]=arr[j];
      j++;
      k++;
  }
  while(i<=mid){
    arr[k]=arr[i];
    i++;
    k++;
  }
  while(j<=end){
    arr[k]=arr[j];
    j++;
    k++;
  }
  for(i=start;i<=end;i++){
    arr[i]=temp[i-start];
  }
}
void mergesort(int *arr,int start,int end){
if(start<end){
  int mid=(start+end)/2;
  mergesort(arr,start,mid);
  mergesort(arr,mid+1,end);
  merge(arr,start,mid,end);
}
}

void Display(int arr[],int length){
  for(int i=0;i<length;i++){
    cout<<arr[i]<<" ";
    cout<<endl;
  }
}

int main(){
  int arr[20];
  int n;
  cout<<"Enter the number of elements in array: ";
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  mergesort(arr,0,n);
  cout<<"Enter the ";
  Display(arr,n);
  return 0;
}
