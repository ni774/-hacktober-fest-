#include<bits/stdc++.h>              // there are two shorted array merge them and make 3rd shorted array in optimal way
int main()
{
 int arr1[]={2,4,5,8,15,20,27,34,36};
 int arr2[]={3,7,12,16,25,28,29};
 int arr3[100];
 int i=0,j=0;
 int m=sizeof(arr1)/sizeof(arr1[0]);   //lenth of array
 int n=sizeof(arr2)/sizeof(arr2[0]);
 for(int k=0;k<(m+n);k++)
 {
     if(i<m&&j<n) //if arr1[] array size is complited then copy all rest element of arr2[] in arr3[]
    { 
       if(arr1[i]<=arr2[j]){
         arr3[k]=arr1[i];         //compare and put lesser value in arr3
         i++;
        }
        else
        {
           arr3[k]=arr2[j];
            j++;
        }
    }
    else{
            if(j==n){
              arr3[k]=arr1[i];
              i++;
            }
            else{
               arr3[k]=arr2[j];         //copy all element of rest array
               j++;
            }
    }
     
 }
 for (int i=0;i<(m+n);i++){
     std::cout<<arr3[i]<<" ";
 }
 return 0;
}
