#include<iostream>
using namespace std;
int Operation(int arr[],int n)
{
  int ans=0;
  int i=0,j=n-1;
  while(i<=j)
  {
    if(arr[i]==arr[j]){
      i++;
      j--;
    }
    else if(arr[i]<arr[j]){
      i++;
      arr[i]+=arr[i-1];
      ans++;
    }
    else{
      j--;
      arr[j]+=arr[j+1];
      ans++;
    }
  }
  return ans;
}
int main(){
  int arr[10];
  int n;
  cout<<"Enter the number in array: ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Number of Operations required is : "<<Operation(arr,n);
  return 0;
}
