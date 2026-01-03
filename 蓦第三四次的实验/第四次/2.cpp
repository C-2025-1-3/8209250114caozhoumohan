/*起泡排序：
利用起泡排序算法编写一个排序函数。起泡排序算法分若干趟对数组进行处理。每趟处理中，对相邻元素进行比较。
若为降序，则交换；否则，保持原顺序。此技术被称为起泡排序（bubble sort）或下沉排序（sinking sort），
因为较小的值逐渐地“冒泡”到上部，而较大值逐渐下沉到底部。
算法可描述如下：
bool changed = true;
do
{
changed = false;
for (int j = 0; j < listSize – 1; j++)
	if (list[j] > list[j+1])
	{
	  swap list[j] with list[j+1];
	  changed = true;
	}
} while (changed);
很明显，循环结束后，列表变为升序。容易证明do循环最多执行listSize – 1次。
编写测试程序，读入一个含有10个双精度数字的数组，调用函数并显示排列后的数字。*/
#include<iostream>
#include <iomanip>
using namespace std;
void bubblesort(double list[],int listsize)
{
    bool changed=true;//初始值的设置方便启动第一次
    do
    {
        changed=false;//方便后续结束
        for(int j=0;j<listsize-1;j++)//对于数组的每一个数据进行扫描-注意是-1因为从0开始
        {
            if(list[j]>list[j+1])
            {
                double temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
                changed=true;//swap list[j] with list[j+1]也可以用
            }
        }
    }
    while(changed);
}
int main()
{
    const int size=10;
    double arr[size];
    cout<<"请输入10个双精度数字:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }//控制数组的长度10个，超了没有用
    bubblesort(arr,size);
    cout<<"排序后的升序结果为:"<<endl;
    cout<<fixed<<setprecision(2);//注意添加头文件
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";

    }
    return 0;
}