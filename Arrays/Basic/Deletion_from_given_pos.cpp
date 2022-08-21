//Program to dlete elemment in an array that is shorted in ascending order
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int arr[10],cnt,pos;
  cout<<"Enter the number of elements you want to insert: ";
  cin>>cnt;
  for(int i=0;i<cnt;i++){
      cout<<"arr["<<i<<"]: ";
      cin>>arr[i];
  }
  cout<<"Enter the position from where you want delete : ";
  cin>>pos;

  for(int i=pos;i<=cnt-1;i++){
    arr[i]=arr[i+1];
  }
  cnt--;
  cout<<"Element after deletion will be: "<<endl;
  for(int i=0;i<cnt;i++){
      cout<<"Elements in array are: "<<arr[i]<<endl;
  }
  return 0;
}
