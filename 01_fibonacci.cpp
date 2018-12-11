#include<stdio.h>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>


using namespace std;

long long fibonacci(int n)
{
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fibonacci(n - 1)+fibonacci(n - 2);
}

int main() {
    cout <<"Enter a number to find nth fibonacci number:\n";
    int n;
    cin >> n;
    long long f = fibonacci(n);
    cout << f << endl;
    }
