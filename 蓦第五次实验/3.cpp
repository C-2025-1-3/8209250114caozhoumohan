/*3、需要求3个长方柱的体积，请编一个基于对象的程序。
数据成员包括length(长)、width(宽)、height(高)。
要求用成员函数实现以下功能：
(1)由键盘分别输入3个长方柱的长、宽、高；
(2)计算长方柱的体积；
(3)输出3个长方柱的体积。
请编程序，上机调试并运行。*/
#include<iostream>
using namespace std;
class V
{
    private:
        double length;
        double width;
        double height;
    public:
        void input()
        {
            cout<<"请依次输入长方体的长、宽、高"<<endl;
            cin>>length>>width>>height;
        }
        double vv()
        {
            return length*width*height;
        }
        void output()
        {
            cout<<"长方体的体积为:"<<vv()<<endl;
        }

};
int main()
{
    V v1,v2,v3;
    cout<<"请输入第一个长方体的长宽高"<<endl;
    v1.input();
    cout<<"请输入第二个长方体的长宽高"<<endl;
    v2.input();
    cout<<"请输入第三个长方体的长宽高"<<endl;
    v3.input();
    cout<<"结果依次为:"<<endl;
    v1.output();
    v2.output();
    v3.output();
    return 0;


}