#include"test.h"

class student
    {
      public:
      string name;
      int age;
      int id;
    } ;

void print(student s)
{
    cout<<"学生姓名"<<s.name<<endl<<"学生年龄"<<s.age<<endl<<"学生学号"<<s.id<<endl;
    return;

}

int search(student t[],int size,string a)
{
     for (int i=0;i<size;i++)
     {
         if(t[i].name==a)
         {
             return i;
         }
     }
}
 

void test()
{
    
    int size;
    cout<<"请输入学生个数?"<<endl;
    cin>>size;
    student stu[size];
    for(int i=0;i<size;i++)
    {
    cout<<"请输入学生姓名?"<<endl;
    cin>>stu[i].name;
    cout<<"请输入学生年龄?"<<endl;
    cin>>stu[i].age;
    cout<<"请输入学生学号?"<<endl;
    cin>>stu[i].id;

    }
    
    for(int i=0;i<size;i++)
    {
          print(stu[i]);
    }
    int choice;
    cout<<"请输入你的操作,输入1停止,输入2寻找学生消息"<<endl;
    cin>>choice;
    if(choice==2)
    {
        string a;
        cout<<"请输入你要寻找的学生姓名"<<endl;
        cin>>a;
        int find;
        find=search(stu,size,a);
        print(stu[find]);
    }
    else if(choice==1)
    {
        
    }
    else
    {
        cout<<"输入错误"<<endl;
    }
}  