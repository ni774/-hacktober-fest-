#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
void Print(int arr[],int n){
  //  int n=sizeof(arr)/sizeof(arr[0]); 
   for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
    cout<<endl;

}
int fact(int n){
    if(n==1)
       return 1;
     return n*fact(n-1);
}
void permute(int arr[],int n){
    
    for(int i=0;i<fact(n);i++)
    {
        cout<<i<<"-->";
        Print(arr,n);
        int j=i%n;
        if(j==n-1)
           swap(arr[j],arr[0]);
        else
        {
            swap(arr[j],arr[j+1]);
        }
        usleep(200000);
    }
    
}
int main()
{
  int a[]={1,2,3,4,8};
  int n  =sizeof(a)/sizeof(a[0]);
  permute(a,n);

   return 0;
}