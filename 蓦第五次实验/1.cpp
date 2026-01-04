/*1、有以下程序：
#include<iostream>
using namespace std；
class Time             // 定义Time类
{
public：              // 数据成员为公用的
int hour;
int minute;
int sec ;
};
int main()
{
Time tl;           //定义t1为Time类对象
   cin>>t1.hour;      //输入设定的时间 
cin>>t1.minute;
cin>>t1.sec;
cout<<t1.hourl<<”：”<<t1.minute<<”：”<<t1.sec<<endl ;
return 0;
}
改写程序，要求：
(1)将数据成员改为私有的；
(2)将输入和输出的功能改为由成员函数实现；
(3)在类体内定义成员函数。
然后编译和运行程序。请分析什么成员应指定为公用的?什么成员应指定为私有的? 什么函数最好放在类中定义? 什么函数最好在类外定义? */
#include <iostream>
using namespace std;
class Time
{
    private:
            int hour;
            int minute;
            int sec;
    public:
            void inputtime()
            {
                cin>>hour>>minute>>sec;
            }
            void showtime()
            {
                cout<<hour<<":"<<minute<<":"<<sec<<endl;
            }

};
int main()
{
    Time t1;
    t1.inputtime();
    t1.showtime();
    return 0;
}