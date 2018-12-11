#include<stdio.h>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<stack>


using namespace std;
stack <int> st;

int main()
{
    cout<<"Enter number of elements of the stack: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k=rand();
        st.push(k);
    }
    cout<<"Stack after sorting is: ";
    
    stack <int> temp;
    
    while(!st.empty())
    {
        int top=st.top();
        st.pop();
        while(!temp.empty() && temp.top()<top)
        {
            st.push(temp.top());
            temp.pop();
        }
        temp.push(top);
    }
    
    
    while(!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    
    
    
    
    
}
