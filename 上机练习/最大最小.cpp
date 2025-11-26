#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"请输入两个正整数"<<endl;
    cin>>a>>b;
    int A=a;
    int B=b;
    while (b!=0)
    {
        int t=b;
        b=a % b;
        a=t;
    }
    int max=a;
    int min=(A*B)/max;
    cout<<"最大公约数是："<<max<<endl;
    cout<<"最小公倍数是："<<min<<endl;
    return 0;
}