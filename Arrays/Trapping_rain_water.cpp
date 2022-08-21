//complexity o(n^2)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Maxrain(int arr[],int n)
{
  int water=0;
  for(int i=1;i<n-1;i++)
  {
    int left=arr[i];
    for(int j=0;j<i;j++){
      left=max(left,arr[j]);
    }
    int right=arr[i];
    for(int j=i+1;j<n;j++){
      right=max(right,arr[j]);
    }
    water=water+(min(left,right)-arr[i]);
  }
  return water;
}
int main(){
  int arr[10],n;
  cout<<"Enter the number of blocks : ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cout<<"arr["<<i<<"] : ";
    cin>>arr[i];
  }
  cout<<"Maximum rain that can be stored :  "<<endl;
  cout<<Maxrain(arr,n);
  return 0;
}
