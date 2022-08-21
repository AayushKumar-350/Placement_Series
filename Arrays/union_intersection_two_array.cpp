#include<iostream>
using namespace std;
int main(){
  int arr1[10];
  int arr2[10];
  int arr3[20],n1,n2;
  int index=0;
  int index_first=0,index_second=0;
  //creating the first array
  cout<<"Enter the number of elements in the array 1 : ";
  cin>>n1;
  for(int i=0;i<n1;i++){
    cout<<"arr["<<i<<"] = ";
    cin>>arr1[i];
  }
  //creating the second array
  cout<<"Enter the number of elements in the array 2 : ";
  cin>>n2;
  for(int i=0;i<n2;i++){
    cout<<"arr["<<i<<"] = ";
    cin>>arr2[i];
  }
  int m=n1+n2;
  while(index_first<n1&& index_second<n2){
    if(arr1[index_first]<arr2[index_second]){
      arr3[index]=arr1[index_first];
      index_first++;
    }
    else{
      arr3[index]=arr2[index_second];
      index_second++;
    }
    index++;
  }
  if(index_first==n1){
    while(index_second<n2){
      arr3[index]=arr2[index_second];
      index_second++;
      index++;
    }
  }
  else if(index_second==n2){
    while(index_first<n1){
      arr3[index]=arr1[index_first];
      index_first++;
      index++;
    }
  }
  cout << "Array after merging will be: ";
  for(int i=0;i<m;i++){
    cout<<"arr["<<i<<"] = "<<arr3[i]<<endl;
  }
  return 0;
}
