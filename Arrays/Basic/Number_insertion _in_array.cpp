//Program to insert elemment in an array at desired position
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int arr[10],pos,num,cnt;
  cout<<"Enter the number of elements you want to insert: ";
  cin>>cnt;
  for(int i=0;i<cnt;i++){
      cout<<"arr["<<i<<"]: ";
      cin>>arr[i];
  }
  cout<<"Enter the number you want : ";
  cin>>num;
  cout<<"Enter the position: ";
  cin>>pos;
  for(int i=cnt-1;i>=pos;i--){
    arr[i+1]=arr[i];
  }
  arr[pos]=num;
  cnt++;
  cout<<"Elements after insertion will be: "<<endl;
  for(int i=0;i<cnt;i++){
      cout<<"Elements in array are: "<<arr[i]<<endl;
  }
  return 0;
}
//Runs sucessfully on online compiler
