//Agar left wala bada element hai from the right one then the right one is leader
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
  int current_leader=arr[n-1];
  cout<<arr[n-1]<<" ";
  for(i=n-2;i>0;i--){
    if(current_leader<arr[i]){
      current_leader=arr[i];
      cout << arr[i]<<" ";
    }
  }
  return 0;
}//complexity iski o(n) hai


/*int main(){
  int arr[10];
  int n;
  cout<<"Enter the size of array ";
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    bool flag=false;
    for(int j=i+1;j<n;j++){
      if(arr[i]<=arr[j]){
        flag=true;
        break;
      }
    }
    if(flag==false)
      cout<<arr[i]<<" ";
  }
  return 0;
}
iski time complexity = O(n^2)*/
