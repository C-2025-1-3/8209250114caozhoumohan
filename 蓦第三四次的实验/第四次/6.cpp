/*6、字符串中每个字母出现的次数：
请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
void count(const char s[], int counts[])
counts是一个有26个元素的整数数组。const[0]，const[1]，…，const[25]分别记录a，b，…，z出现的次数。字母不分大小写，例如字母A和字母a都被看作a。
编写测试程序，读入字符串并调用count函数，显示非零的次数。*/
#include <iostream>
using namespace std;
void count(const char s[], int counts[])
{
    for(int i=0;s[i]!='\0';i++)
    {
        char ch=s[i];//将遍历到的字符赋值给临时变量，方便后续处理
        if(ch>='a'&&ch<='z')
        {counts[ch-'a']++;}//就是已经转化成了Asc码，所以对应0-a的数字位置的代表的东西就+1
        else if(ch>='A'&&ch<='Z')
        {counts[ch-'A']++;}
    }
}
int main()
{

    char input[1000]={0};
    int counts[26]={0};
    cout<<"Enter a string:";
    cin.getline(input,1000);
    count(input,counts);
    for(int i=0;i<26;i++)
    {
        if(counts[i]>0)
        {
            cout<<char('a'+i)<<":"<<counts[i]<<" "<<"times"<<endl;
        }
    }
    return 0;
}