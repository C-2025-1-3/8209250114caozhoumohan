/*合并两个排列好的数组：
编写如下函数，合并两个排列好的数组，形成一个新的排列好的数组。
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
使用size1+size2次比较实现函数。编写测试程序，提示用户输入两个排列好的数组，并显示合并以后的数组。下面是一个运行样例。
注意，输入数据的第一个数字是数组的元素数，而不是数组的一部分。假定数组大小不超过80。*/
#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    int i=0;int j=0;int k=0;//扫描
    while(i<size1 && j<size2)
    {
        if(list1[i]<=list2[j])
        {
            list3[k++]=list1[i++];//先赋值后各自+1
        }
        else
        {
            list3[k++]=list2[j++];
        }
    }
    while(i<size1)
    {
        list3[k++]=list1[i++];
    }
    while(j<size2)
    {
        list3[k++]=list2[j++];
    }
}
int main()
{   
    const int maxsize=80;
    int list1[maxsize],list2[maxsize];
    int size1,size2;
    cout<<"Enter list1:（第一个数字为元素个数,后续为升序元素,个数≤80)"<<endl;
    cin>>size1;
    if(size1<0||size1>maxsize)
    {
        cout<<"元素个数超出范围"<<endl;
        return 1;
    }
    for(int i=0;i<size1;i++)
    {
        cin>>list1[i];

    }
    cout<<"Enter list2:（第一个数字为元素个数,后续为升序元素,个数≤80)"<<endl;
    cin>>size2;
    if(size2<0||size1>maxsize)
    {
        cout<<"元素个数超出范围"<<endl;
        return 1;
    }
    for(int i=0;i<size2;i++)
    {
        cin>>list2[i];
        
    }
    int list3[size1+size2];
    merge(list1,size1,list2,size2,list3);
    cout<<"The merged list is:"<<endl;
    for(int i=0;i<size1+size2;i++)
    {
        cout<<list3[i]<<" ";
    }
    return 0;

}//其实我觉得现将两个数组进行合并后，在使用一个排序也可以达到这样的效果。
