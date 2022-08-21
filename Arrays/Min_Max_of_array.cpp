#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of elements in the array: ";
  cin>>n;
  int arr[10];
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"]= ";
    cin>>arr[i];
  }
  int max = arr[0];                       //Declaring first element as maximum
  int min = arr[0];                       //Declaring first element as minimum
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max = arr[i];
    }
    if(arr[i]<min){
      min = arr[i];
    }
  }
  cout<<"Maximum value from the array is: "<<max<<endl;
  cout<<"Minimun value from the array is: "<<min;
  return 0;
}
