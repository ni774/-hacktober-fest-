#include<iostream>
using namespace std;
void toh(int n,char a,char b,char c){
    static int x=1;
    if(n==1){
    cout<<x<<"-->move "<<n<<" disk from "<<a<<" to "<<c<<endl;
    ++x;
        return ;
        
    }
    toh(n-1,a,c,b);
    cout<<x<<"-->move "<<n<<" disk from "<<a<<" to "<<c<<endl;
    x++;
    toh(n-1,b,a,c);
}

int main(){
    char src='a',help='b',dest='c';;
    toh(3,src,help,dest);
    return 0;

}