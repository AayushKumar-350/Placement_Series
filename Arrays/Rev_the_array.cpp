#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the no. of elements in the array: ";
  cin>>n;
  int arr[10];
  for(int i=0;i<n;i++){         //Getting array from the user
    cout<<"arr["<<i<<"]= ";
    cin>>arr[i];
  }
  //Reverse logic
  int s=0;
  int e=n-1;
  while(s<e){
    swap(arr[s],arr[e]);
    s++;
    e--;
  }
  cout<<"Array after reversersing will be: "<<endl;
  //Printing the array
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"]= "<<arr[i]<<endl;
  }
  return 0;
}
