/*(3)主程序中建立一动态数组（使用new），数组元素及元素个数由键盘输入，动态调试观察指针及指针指向的内容；
设计一个函数对数组由小到大排序；主程序中用指针方式输出数组元素；最后释放数组内存（delete）。
*/
#include <iostream>
using namespace std;
void sortarray(int* arr,int n)
{
    for(int i=0;i<n-1;++i)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n=0;
    cout<<"请输入元素的个数：";
    cin>>n;
    int*arr =new int [n];
    cout<<"请输入"<<n<<"个整数";
    for(int i=0;i<n;i++)
    {
        cin>>*(arr+i);
    }
    sortarray(arr,n);
    cout<<"排序后的数组为："<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    delete[] arr;
    return 0;
}