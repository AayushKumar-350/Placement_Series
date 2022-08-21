#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool Subset(int arr1[],int arr2[],int n,int m)
{
  int i=0,j=0;
  if(n<m){
    return 0;
  }
  sort(arr1,arr1+n);
  sort(arr2,arr2+m);
  while(i<n && j<m)
  {
    if(arr1[i]==arr2[j]){
      i++;
      j++;
    }
    else if(arr1[i]<arr2[j]){
      j++;
    }
    else if(arr1[i]>arr2[j]){
      return 0;
    }
  }
  return (i < n) ? false : true;
}
int main(){
  int arr1[10],arr2[10],n,m;
  cout<<"Enter the number of elements in array 1 : ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cout<<"arr["<<i<<"] : ";
    cin>>arr1[i];
  }
  cout<<"Enter the number of elements in array 2 : ";
  cin>>m;
  for(int i=0;i<m;i++)
  {
    cout<<"arr["<<i<<"] : ";
    cin>>arr2[i];
  }

  if(Subset(arr1,arr2,n,m))
  {
    cout<<"arr2 is a Subset of arr1 CONGRATS";
  }
  else
    cout<<"arr2 is not a subset of arr1 BADLUCK";
  return 0;
}
