#include<iostream>
using namespace std;
int main()
{
    double a=0,b=0,c=0,d=0;
    cout<<"请输入三角形的三条边："<<endl;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
    {
        d=a+b+c;
        cout<<"三角形的周长为："<<d<<endl;
    
        if(a==b||a==c||b==c)
        {
        cout<<"恭喜你，获得等腰三角形"<<endl;}
        else
        {
        cout<<"非常遗憾，不是等腰三角形"<<endl;
        }
    }
    else{
        cout<<"这根本不是三角形"<<endl;
    }
    return 0;
}
