#include<iostream>
using namespace std;
void Arrayshifting(int arr[],int left,int right){
  for(int i=0;i<right;i++){
    if(arr[left]<0 && arr[right]<0){
      left+=1;
    }
    else if(arr[left]>0 &&arr[right]<0){
      int temp = arr[left];
      arr[left]=arr[right];
      arr[right]=temp;
      left+=1;
      right-=1;
    }
    else if(arr[left]>0 && arr[right]>0){
      right-=1;
    }
    else{
      left+=1;
      right-=1;
    }
  }
}
void display(int arr[],int right){
  for(int i=0;i<right;i++){
      cout<<arr[i]<<endl;
  }
}
int main(){
  int arr[10],right;
  cout<<"enter the number of elements in the array: ";
  cin>>right;
  for(int i=0;i<right;i++){
      cout<<"arr["<<i<<"]= ";
      cin>>arr[i];
  }
  int a = sizeof(arr)/sizeof(arr[0]);
  Arrayshifting(arr,0,a-1);
  display(arr,a-1);

  return 0;
}
