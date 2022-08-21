//Maximum between arr[j]-arr[i]
#include<iostream>
using namespace std;
int main(){
  int arr[10];
  int n,i;
  cout<<"Enter the size of array ";
  cin>>n;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }

  return 0;
}
/*int main(){
  int arr[10];
  int n,i;
  cout<<"Enter the size of array ";
  cin>>n;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  int big=arr[1]-arr[0];
  for(i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      big=max(big,arr[j]-arr[i]);
    }
  }
  cout<<" "<<endl;
  cout<<big<<" ";
  return 0;
}
Time complexity O(n^2) */
