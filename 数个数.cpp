/*输入一行字符，分别统计出其中英文字母、空格、数字字符和其它字符的个数。 
提示：从键盘上读入一个字符给变量 c，判断 c 是属于哪种字符并计数，循环读入下个字符，直到回车换行字符'\n'为止。*/
#include<iostream>
using namespace std;
int main()
{
    char c;
    int letter=0,space=0,number=0,others=0;
    cout<<"请输入一行字符，将回车作为结束"<<endl;
    while((c=cin.get())!='\n')//读取，新学一招
    {
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        {
            letter++;
        }
        else if(c==' ')
        {space++;}
        else if(c>='0'&&c<='9')
        {number++;}
        else
        {
            others++;
        }
        

    }
    cout<<"英文字母的数量："<<letter<<endl;
    cout<<"空格的数量的数量："<<space<<endl;
    cout<<"数字的数量："<<number<<endl;
    cout<<"其他的数量："<<others<<endl;
        

return 0;
}