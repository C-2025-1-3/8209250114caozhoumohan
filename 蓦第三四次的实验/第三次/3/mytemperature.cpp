#include<iostream>
#include "mytemperature.h"
double celsius_to_fah(double cel)
{
    return cel*9.0/5.0+32;//没有必要再定义一个变量，直接返回就行
}
double fahrenheit_to_cels(double fah) 
{
    return (fah-32)*5.0/9.0;
}
