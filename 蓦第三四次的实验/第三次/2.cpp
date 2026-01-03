 /*编写程序满足：声明一个函数，判断一个整数是否为素数，使用如下函数头：
bool is_prime(int num) ,如果num是素数函数返回true，否则返回false；
利用函数is_prime找出前200个素数，并按每行10个输出：
        2     3      5      7    11    13    17    19    23    29*/
#include <iostream>
#include <iomanip>
using namespace std;
bool is_prime(int num)//需要了解到怎么样判断是不是素数
{
    if(num<=1)
    {
        return false;
    }
    if(num==2)
    {
        return true;
    }
    if(num%2==0)
    {
        return false;
    }
    for(int i=3;i*i<=num;i+=2)//只检查奇数//从数学中学到的方法
        {
            if(num%i==0)
            {return false;}
            
        }
    return true;
    
}
int main()
{
    int m=0;//这是找到的素数个数
    int a=2;//从2开始
    while(m<200)
    {
        if(is_prime(a))//怎么理解后面的a++
        {
            cout<<setw(5)<<a;//这里不能写<<endl
            m++;
            if(m%10==0)
            {
                cout<<endl;
            }

        }
        a++;
    }
    return 0;
}