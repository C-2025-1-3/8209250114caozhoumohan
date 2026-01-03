/*打印不同的数：
编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数。
下面是一个运行样例：*/
#include <iostream>
using namespace std;
int main()
{
    int arr[10];//盒子
    int count=0;//记数牌
    cout<<"Enter ten numbers:"<<endl;
    for(int i=0;i<10;i++)
    {
        int num;
        cin>>num;//临时变量，存每一次输入的数字
        bool select=false;//先假设不重复
        for(int j=0;j<count;j++)
        {
            if(arr[j]==num)
            {
                select=true;
                break;
            }
        }
        if(select==false)
        {
            arr[count]=num;//这里可以更改count的大小，来更改数字的入库顺序
            count++;//在这里最开始输入的数字进入了仓库，方便后续进行比对 
        }
    }
    cout<<"The distinct numbers are:";
    for(int i=0;i<count;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
