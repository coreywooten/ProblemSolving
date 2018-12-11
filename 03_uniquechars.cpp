#include<stdio.h>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>


using namespace std;

int check(string s)
{
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(s[i]==s[j]) return 0;
        }
    }
    return 1;
}

int main()
{
    cout<<"Enter the string: ";
    string s;
    cin>>s;
    if(check(s)==1)
    {
        cout<<"String has all unique characters\n";
    }
    else
    {
        cout<<"String has duplicate characters\n";
    }
    
}

