#include<iostream>
using namespace std;
int main(){
  int arr[10];
  int n;
  cout<<"ENter the number of element you want: ";
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"]= ";
    cin>>arr[i];
  }
  int arr_size=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<arr_size;i++){
    arr[arr[i]%arr_size]=arr[arr[i]%arr_size]+arr[i];
  }
  cout<<"The repeating element are: "<<endl;
  for(int i=0;i<arr_size;i++){
    if(arr[i]>=arr_size*2){
      cout<<i<<endl;
    }
  }
  return 0;
}
