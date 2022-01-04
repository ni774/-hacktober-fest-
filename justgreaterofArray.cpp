#include <bits/stdc++.h>
using namespace std;
void printgreater(int arr[],int n){
    
    stack<int>s;
    int arr1[n];
    for(int i=n-1;i>=0;i--){
        while(!s.empty()&&s.top()<=arr[i]){
            s.pop();
        }
        if(s.empty())
            arr1[i]=-1;
        else{
            arr1[i]=s.top();
        }
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
       cout<<arr1[i]<<" ";   
    }
}

int main() {
	// your code goes here
	int arr[]={2,5,3,4,11,24,7,4,23,18};
	int n=sizeof(arr)/sizeof(arr[0]);
	printgreater(arr,n);
	return 0;
}
