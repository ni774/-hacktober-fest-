#include<bits/stdc++.h>
 bool isSortedArray(int arr[],int n){
     if(n==1)
       return true;
     if(arr[n-1]>=arr[n-2]){
         return isSortedArray(arr,n-1);
     }
     else
       return false;
 }
 int main(){
     int arr[]={1,2,3,4,5,6,7,8,9,13,15,24,30};
     int n=sizeof(arr)/sizeof(arr[0]);
     std::cout<<isSortedArray(arr,n);
     return 0;
 }
