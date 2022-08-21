#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int num;
  int mid=0;
  int low=0;
  int high = num.size()-1;
  int arr[10];
  cout<<"Enter the number of elements in athe aray";
  cin>>num;
  for(int i=0;i<num;i++){
    cout<<"arr["<<i<<"] = ";
    cin>>arr[i];
  }
  cout<<"After aranging the 0,1,2 we get: ";
  while(mid <= high){
    switch(num[mid]){
      case 0:
      swap(num[low++],num[mid++]);
      break;
      case 1:
      mid++;
      break;
      case 2:
      swap(num[mid],num[high--]);
      break;
    }
  }
return 0;
}
