/*输入自然数m和n，
（1）求他们的最大公约数（或称最大公因数）。
 要求输入、输出在主函数中进行，求公约数由函数实现。
在函数中求最大公约数与最小公倍数。（提示：使用引用参数）*/
#include<iostream>
using namespace std;
// int max(int i=0,int k=0)
// {
//     int w=0;
//     if(i>k)
//     {
//         w=i;
//     }
//     else
//     {w=k;}
//     return w;
// }
// int min(int p=0,int q=0)
// {
//     int r=0;
//     if(p>q)
//     {
//         r=p;
//     }
//     else
//     {
//         r=q;
//     }
//     return r;
// }
// int maxall(int x=0,int y=0)
// {
//     int z=0;
//     int u=0;
//     return z;
// }
// int minall(int m=0,int n=0)
// {
//     int l =0;
//     return l;
// }
void get(int m,int n,int &p,int &q)
{
    int m0=m,n0=n;
    while(n!=0)
    {
        int w=m%n;
        m=n;
        n=w;
    }
    p=m;
    q=(m0*n0)/p;
}//起初我想用4个函数进行计算，就是得到一组数据排序后取max，但是在我了解到结果的另外一种数学方法，用一个函数就能解决。

int main()
{   
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    cout<<"请输入要计算的两个数"<<endl;
    cin>>a>>b;
    get(a,b,c,d);
    if(a>0&&b>0)
    {
        cout<<"这两个数的最大公约数是："<<c<<endl;
        cout<<"这两个数的最小公倍数是："<<d<<endl;
    }
    else
    {
         cout<<"要输入自然数"<<endl;
    }
    

}