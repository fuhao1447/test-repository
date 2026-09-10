#include<iostream>
using namespace std;

struct student
    {
      string name;
      int score;
    } ;
struct teacher
{
   string name;
   struct student stu[5];
};


void print(teacher *t, int teachersize,int studentsize)
{
   for(int i=0;i<teachersize;i++)
   {
     for(int j=0;j<studentsize;j++)
     {
         cout<<"第"<<i+1<<"个老师的姓名:";
        cout<<t[i].name<<endl;
         cout<<"第"<<j+1<<"个学生的姓名:";
        cout<<t[i].stu[j].name<<endl;
         cout<<"第"<<j+1<<"个学生的分数:";
         cout<<t[i].stu[j].score<<endl;
     }
   }
}

int set(teacher *t,int teachersize,int studentsize)
{
   for(int i=0;i<teachersize;i++)
   {  cout<<"请输入第"<<i+1<<"个老师的姓名"<<endl;
         cin>>t[i].name;
     for(int j=0;j<studentsize;j++)
     {
       
         cout<<"请输入第"<<j+1<<"个学生的姓名"<<endl;
         cin>>t[i].stu[j].name;
         cout<<"请输入第"<<j+1<<"个学生的分数"<<endl;
         cin>>t[i].stu[j].score;
     }
   }
 
}
 

void test()
{
    int teachersize=2;
    int studentsize=2;
    teacher t[teachersize];
    set(t, teachersize, studentsize );
    print(t, teachersize, studentsize);
}  