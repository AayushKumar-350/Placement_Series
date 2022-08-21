//In this problem we have to form an array
//and in that the difference between the minimum and the maximumshoulf be minimum value
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[10];
  int n;
  int k;
  double min=10000000;
  cout<<"Enter the number of elements in the array: ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cout<<"arr["<<i<<"]: ";
    cin>>arr[i];
  }
    sort(arr,arr+n);
  for(int i=0;i<(n-k);i++)
  {
    if((arr[k-i+1]-arr[i])<min)
    {
      min=arr[k-i+1]-arr[i];
    }
  }
  cout<<min<<" Min value";
  return 0;
}
