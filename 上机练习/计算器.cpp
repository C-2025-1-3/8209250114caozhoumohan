#include<iostream>
using namespace std;
int main()
{
    double a,b;
    char c; 
    cout<<"请输入你要如何计算=数字1 运算符 数字2"<<endl;
    cin>>a>>c>>b;
    double result;
    bool flag=true;
    switch(c){
        case '+':
            result=a+b;
            break;
        case '-':
            result=a-b;
            break;
        case '*':
            result=a*b;
            break;
        case '/':
            if(b==0)
            {
                cout<<"出错了，除数不能为0"<<endl;
                flag="false";
            }
            else{
                result=a/b;
            }
            break;
        default:
            cout<<"非法运算符"<<endl;           
        break;}
    if(flag){
        cout<<a<<" "<<c<<" "<<b<<"="<<result<<endl;
    }
    return 0;
}