//圆锥的体积
#include <iostream>
using namespace std;
int main()
{
    const double i=3.1415926;//标识符常量
    double a,b,v;
    cout<<"请输入圆锥的底面半径:"<<endl;//计算机输出的文字
    cin>>a;//让用户进行输入
    cout<<"请输入圆锥的高:"<<endl;
    cin >>b;
    v=1*i*a*a*b/3;//计算公式的表达
    cout<<"经计算，圆锥的体积为:"<<v<<endl;
    return 0;
}