//Program to insert elemment in an array that is shorted in ascending order
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int arr[10],cnt,num;
  cout<<"Enter the number of elements you want to insert: ";
  cin>>cnt;
  for(int i=0;i<cnt;i++){
      cout<<"arr["<<i<<"]: ";
      cin>>arr[i];
  }
  cout<<"Enter the number you want : ";
  cin>>num;

  for(int i=0;i<=cnt;i++){
    if(arr[i]>num){
      for(int j=cnt-1;j>=i;j--){
        arr[j+1]=arr[j];

      }
      arr[i]=num;
      break;
    }
  }
  cnt++;
  cout<<"Elements after insertion will be: "<<endl;
  for(int i=0;i<cnt;i++){
      cout<<"Elements in array are: "<<arr[i]<<endl;
  }
  return 0;
}
//Runs on online compiler
