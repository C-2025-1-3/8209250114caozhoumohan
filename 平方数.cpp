/*
从键盘输入 a，用迭代法求 a 的平方根 x= a 。求平方根的迭代公式为：



要求精确到|xn+1 - xn|<10 -5。 
提示：迭代法是把 xn代入迭代公式右边，计算出 xn+1来，然后把 xn+1 作为新的 xn ，计算出新的 xn+1，如此重复，直到|xn+1 - xn|<10 -5 时，xn+1 为所求的平方根。可以把 a 作为 xn 的初始值。 
思考：（1）如果输入 a 为负，在运行时会出现什么情况? 修改程序使之能处理任何的 a 值。 
(2）能否|xn+1 -xn|<10 -10或更小? 为什么? 请试一下。 */
#include<iostream>
#include<cmath>//好像要加一个头文件
using namespace std;
int main()
{
    double a;
    cout<<"请输入你想要求的数字，哈哈哈哈："<<endl;
    cin>>a;
    double xn=a;
    double xn1;
    if(a<0){
        cout<<"老夫无能为力"<<endl;
    }
        else
        {
            
            while(1)
            {xn1=0.5*(xn+a/xn);
             if(fabs(xn1-xn)<1e-5)//绝对值
             {break;}
             xn=xn1;
            }

        }
        cout<<"所求平方根我给你："<<xn1<<endl;
        return 0;
}
