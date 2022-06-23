#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int arr[]={2,4,9,7,8,5,6,45,43,23};  this will find second max and its index
    long t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        long arr[n];
        for(long i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int max=0,min=arr[0],maxind=-1,minind=-1,s_max=0,s_maxind=-1;
        for(long i=0;i<n;i++)
        {
            if(arr[i]<min){
                min=arr[i];
                minind=i;
            }
            if(arr[i]>max)
            {
                s_max=max;
                s_maxind=maxind;
                max=arr[i];
                maxind=i;
            }
            else
            {
            /* code */
                if(s_max<arr[i])
                {
                    s_max=arr[i];
                    s_maxind=i;
                }
            }
        
        
        }
       // cout<<min<<" "<<minind<<" " <<s_max<<" " <<s_maxind<<" " <<max<<" " <<maxind<<endl;
         cout<<(arr[maxind]-arr[minind])*arr[s_maxind]<<endl;
    }
    return 0;
}
