#include<stdio.h>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<ctime>


using namespace std;

int main() {
    srand(time(0));
    cout<<"Enter number of elements:\n";
    int n;
    cin>>n;
    int list[n +2];
    for(int i=1;i<=n;i++)
    {
        list[i]=rand();
    }
    sort(list+1,list+n+1);
    reverse(list+1,list+n+1);
    
    for(int i=1;i<=n;i++)
    {
        cout<<list[i]<<" ";
    }
    cout<<endl;
    
}

