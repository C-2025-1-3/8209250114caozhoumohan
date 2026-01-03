/*编写一个函数将以字符串形式表示的一个16进制数转换为10进制数，
并在主函数中测试。
函数原型 int parseHex(const char *const hexString);
如：调用函数 parseHex(“A5”);返回165*/
#include<iostream>
using namespace std;
int parseHex(const char *const hexString)
{
    int result=0;
    for (int i = 0; hexString[i] != '\0'; ++i) 
    {
        char c = hexString[i];
    //获取字符串的长度
        int value=0;
    if (c>='0'&&c<='9') 
    {
        value=c-'0';
    }
    else if (c>='A'&&c<= 'F') 
    {
        value=10+(c-'A');
    } 
    else if(c>='a'&&c<='f') 
    {
        value=10+(c-'a');
    } 
    else 
    {
        return 0;
    }
    result = result * 16 + value;
    }
    return result;
}

int main()
{
    cout<<"parseHex(\"A5\")="<< parseHex("A5")<<endl;
    cout<<"parseHex(\"b1\")="<< parseHex("b1")<<endl;
    cout<<"parseHex(\"CZmh\")="<< parseHex("CZmh")<<endl;
   

}//十六进制合法字符仅包含：0-9、A-F（大小写均可）