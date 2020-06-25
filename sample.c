#include<iostream>
using namespace std;
int main()
{   int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    int t;
    int i,j=0;

    int diff=0;


    int flag=0;

    int stack[n];
int top=-1;

for(int i=0;i<n;i++) {
    cin>>a[i];
if(top==-1&&a[i]==1) {
    top++;
    stack[top]=i;
}
    else if(a[i]==1)
    {
    stack[++top]=i;
     }
}

 for(i=0;i<top;i++)
 {
     if(top>=1&&((stack[i+1]-stack[i])<6))
     {
         flag=1;
         break;
     }
 }
 if(flag==1)
    {  
        
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
}
return 0;
}
