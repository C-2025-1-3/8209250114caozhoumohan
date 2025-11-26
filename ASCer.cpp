#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"请输入一个字符:"<<endl;
    cin>>a;
    if(islower(a))
    {
        cout<<"转化后的字符为："<<(char)(a-32)<<endl;}
        else{
            int nextASCII=(int)(a+1);
            cout<<"后继字符的ASCII为："<<nextASCII<<endl;
        }
    return 0;
}