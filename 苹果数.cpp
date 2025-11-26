/*
苹果每个 0.8 元，第一天买 2 个，第二天开始，每天买前天的 2 倍，直到购买的苹果数不超过100的最大值，求每天平均花多少钱。*/
#include<iostream>
using namespace std;
int main(){
    const double single=0.8;//苹果的单价
    int first=2;//起始时个数
    int q=2;//公比
    int maxup=100;//苹果的最大个数
    int days=0;//购买的天数
    int sum=0;//总苹果树
     int today=first;
    while(today<=maxup)
    {days++;
     sum += today; // 循环内累加每天的购买数
     /*其实我感觉sum也可以用等比数列求和，但是总感觉不会用days的值*/
     today *= q;
    }
    
    double summoney=sum*single;
    double average=summoney/days;
    cout<<"购买的天数"<<days<<endl;
    cout<<"总苹果树"<<sum<<endl;
    cout<<"钱钱钱"<<summoney<<"元"<<endl;
    cout<<"平均每天用钱"<<average<<"元"<<endl;
    return 0;


}