//Code run ho raha hai!!
#include<iostream>
using namespace std;
void Rotation(int arr[],int n){
  int x=arr[n-1],i;
  for(i=n-1;i>0;i--){
    arr[i]=arr[i-1];
  }
  arr[0]=x;
}
int main(){
  int arr[10];
  int n;
  cout<<"Enter the number of elements in the array: ";
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"]= ";
    cin>>arr[i];
  }
  int n1 = sizeof(arr)/sizeof(arr[0]);
  cout<<"Given array is "<<endl;
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"]= "<<arr[i]<<endl;
  }
  Rotation(arr,n);
  cout<<"Array after rotation is: ";
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"]= "<<arr[i]<<endl;
  }
  return 0;
}
