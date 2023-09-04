#include <iostream>
 
using namespace std;
 
int main() {
//var 
    int a,b;
   //entrada 
	cin>>a>>b;
    int s=0;
   //saida 
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
    if(a<b)
    {
        for(int i=a+1;i<b;i++)
        {
             if(i%2!=0)
            {
                s=s+i;
            }
        }
        
    }
    if(a==b)
    s=0;
    cout<<s<<endl;
 
    return 0;
}
