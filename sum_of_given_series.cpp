#include<iostream>
using namespace std;
int factorial(int num){    
    int fact= 1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}
int sumoffact(int num){
    int sum=0;
    for(int j=1;j<num;j++){
        sum+=factorial(j);
    }
    return sum;
}
    int main(){
        int num;
        cout<<"Enter the number:";
        cin>>num;
        cout<<sumoffact(num+1)<<endl;
        return 0;
    }
