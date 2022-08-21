
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter the number of elements in the array: ";
cin>>n;
int arr[10];
for(int i=0;i<n;i++){
  cout<<"arr["<<i<<"]= ";
  cin>>arr[i];
}
int k;
cout<<"Enter the Kth element to be pop: ";
cin>>k;
priority_queue<int> qu;
for(int i=0;i<n;i++){
  qu.push(arr[i]);
  if(qu.size()>k){
    qu.pop();
  }

}
cout<<"Kth largest element that is removed is: "<<qu.top()<<endl;
  return 0;
}
