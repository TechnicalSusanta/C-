#include<iostream>
using namespace std;
int fact(int n){if(n == 0 || n == 1) return 1;else return n*fact(n-1);}
int sum(int x,int sum = 0){for(int i=1;i<x;i++) sum+=fact(i);}
int main(){cout<<sum(3);}
