#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int arr1[10],arr2[10],arr3[30],cnt,num1,num2,m;
  int index_first=0,index_sec=0,index;
  cout<<"Enter the number of elements in array1: ";
  cin>>num1;
  for(int i=0;i<num1;i++){
      cout<<"arr["<<i<<"]: ";
      cin>>arr1[i];
  }
  cout<<"Enter the number of elements in array2: ";
  cin>>num2;
  for(int i=0;i<num2;i++){
      cout<<"arr["<<i<<"]: ";
      cin>>arr2[i];
  }
  m=num1+num2;
  while(index_first<num1 && index_sec<num2){
    if(arr1[index_first]<arr2[index_sec]){
      arr3[index]=arr1[index_first];
      index_first++;
    }
    else{
      arr3[index]=arr2[index_sec];
      index_sec++;
    }
    index++;
  }
  if(index_sec==num2){
    while(arr2[index_sec]<num2){
      arr3[index]=arr2[index_sec];
      index_sec++;
      index++;
    }

  }
  else if(index_first==num1){
    while(arr1[index_first]<num1){
      arr3[index]=arr1[index_first];
      index_first++;
      index++;
    }
  }
  cout<<"Elements after insertion will be: "<<endl;
  for(int i=0;i<m;i++){
      cout<<"Elements in array are: "<<arr3[i]<<endl;
  }
  return 0;
}
