/*(4)下面程序的主函数中能保证p[0]输出1，p[1]输出2吗？如何修改以保证之
（提示：在函数f中使用new生成动态数组；在main中用delete释放。）
#include<iostream>
using namespace std;
int *f()
{
 int list[]={1,2,3,4};
   return list;
}//局部数组会被释放
void main()
{
int *p=f();
  cout<<p[0]<<endl;
  cout<<p[1]<<endl;
}*/
#include<iostream>
using namespace std;
int *f()
{
    int* list = new int[4];
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;
    return list;
}
int main()
{
    int *p=f();
    cout<<p[0]<<endl;
    cout<<p[1]<<endl;
    delete[] p;//释放堆内存
    return 0;
}