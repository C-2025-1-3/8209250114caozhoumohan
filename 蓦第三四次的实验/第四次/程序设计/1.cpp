/*5、检验子串：
编写如下函数，检验C字符串s1是否是C字符串s2的子串。如果匹配，返回s1在s2中的下标，否则返回–1。
int indexOf(const char s1[], const char s2[])
编写测试程序，读入两个C字符串，检验C字符串s1是否是C字符串s2的子串。下面是程序的运行样例：*/
#include <iostream>
using namespace std;
int get(const char str[])//计算字符串的长度
{
    int len=0;
    while(str[len]!='\0')//字符串结束的标志
    {
        len++;
    }
    return len;
}
int indexof(const char s1[], const char s2[])
{
    int len1=get(s1);
    int len2=get(s2);
    if(len1==0)//字符串1根本就不存在
    {return 0;}
    if(len1>len2)//大于了就根本不可能
    {return -1;}
    for(int i=0;i<=len2-len1;++i)//i是s2的下标//s2定一个字母，s1基本全轮一遍
    {
        int j;
        for(j=0;j<len1;++j)
        {
            if(s2[i+j]!=s1[j])
            {
                break;
            }
            
        }
        if(j==len1)
            {
                return i;
            }
    }
    return -1;
}
int main()
{
    char s1[100],s2[100];
    cout<<"Enter the first string:"<<endl;
    cin.getline(s1, 100); 
    cout<<"Enter the second string:"<<endl;
    cin.getline(s2, 100); 
    int ok=indexof(s1,s2);
    cout<<"indexOf(\"" << s1 << "\", \"" << s2 << "\") is "<<ok<<endl;
    return 0;

}
