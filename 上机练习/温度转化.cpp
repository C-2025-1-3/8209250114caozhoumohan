#include <iostream>
using namespace std;
int main()
{
    double a,b;
    cout<<"请输入你要转化的华氏温度："<<endl;
    cin>>a;
    b=(a-32)*5/9;
    printf("摄氏温度为：%.2f\n",b);
}