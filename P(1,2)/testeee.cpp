#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b;
    cin>>a>>b;
    int s=0;
    if(a>b)
    {
        for(int i=a-1;i>b;i--)
        {
            if(i%2!=0)
            {
                s=s+i;
            }
        }
    }
    else if(a<b)
    {
        for(int i=a+1;i<b;i++)
        {
             if(i%2!=0)
            {
                s=s+i;
            }
        }
        
    }
    else if(a==b)
    s=0;
    cout<<s<<endl;
 
    return 0;
}
