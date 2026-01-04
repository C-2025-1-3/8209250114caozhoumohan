/*4、建立一个对象数组，内放5个学生的（学号，成绩），
设立一个函数max，用指向对象的指针作函数参数，
在max函数中找出5个学生的最高成绩者，并输出其学号。
*/
#include<iostream>
using namespace std;
class Student
{public:
    int id;
    float score;
    Student(int i=0,float s=0)
    {
        id=i;
        score=s;
    }
};
Student max(Student*stu,int n)
{
    Student max_stu=stu[0];
    for(int i=1;i<n;i++)
    {
        if(stu[i].score>max_stu.score)
        {
            max_stu=stu[i];
        }
    }
    return max_stu;
}
int main()
{
    Student students[5]=
    {
        Student(1,78.6),
        Student(2,98.7),
        Student(3,45),
        Student(4,81.4),
        Student(5,70)
    };
    Student top=max(students,5);
    cout<<"成绩最高的学号是："<<top.id <<endl;
    return 0;
}
