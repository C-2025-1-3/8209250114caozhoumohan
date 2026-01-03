/*编程实现摄氏温度到华氏温度的转换：
编写一个头文件，包含下面两个函数：
double celsius_to_fah(double cel)    //摄氏温度到华氏温度
double fahrenheit_to_cels(double fah) //华氏温度到摄氏温度
实现头文件，并编写测试程序，调用函数显示如下结果：
Celsius    Fahrenheit   |   Fahrenheit       Celsius
40.0       105.0        |   120.0            48.89
39.0       102.0        |   110.0            43.33
……       ……        |   ……             ……
31.0        87.8        |   30.0             -1.11循环
（测试程序为主模块，即main( )函数所在的CPP文件，头文件mytemperature.h只有函数声明；函数定义写在另一CPP文件mytemperature.cpp）*/
#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
double celsius_to_fah(double cel)
{
    return cel*9.0/5.0+32;//没有必要再定义一个变量，直接返回就行
}
double fahrenheit_to_cels(double fah) 
{
    return (fah-32)*5.0/9.0;
}
int main()
{
    cout<<fixed<<setprecision(1);//怎么保证结果的精度
    cout<<"Celsius    Fahrenheit   |   Fahrenheit       Celsius"<<endl;
    double cel=40.0;
    double fah_right=120.0;
    while(cel>=31.0)
    {
        double fah_left=celsius_to_fah(cel);
        double cels_right=fahrenheit_to_cels(fah_right);
        cout<<cel<<setw(12)<<fah_left<<setw(9)<<"|"<<setw(8)<<fah_right<<setw(16)<<cels_right<<endl;//我的问题是怎么只让右侧保持两位小数，而其他的地方不变
        
        cel-=1.0;
        fah_right-=10.0;

    }
    return 0;

}











