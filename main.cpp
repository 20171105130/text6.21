#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct student//定义一个student结构体
{
    char StudentID[15],name[20],sex[10],birth[30],CLASS[20],phone[20],JUDGE[15][15];
    int MAX,MIN,max,min;
    double sum;
};

int main(int argc, const char * argv[])
{
    int n=0,i=0,j=0;
    ifstream START("/Users/S20171105130/Desktop/STUDENT4.csv");//打开文件
    string END;
    while (getline(START, END))//逐行读取文本内容
    {
        n++;//行数
    }
    struct student s[20000];//定义结构体数组s
    FILE *fp;//定义指针
    
    if ((fp=fopen("/Users/S20171105130/Desktop/STUDENT4.csv","r"))==0)//以只读的方式打开文件
    {
        printf("error");
    }
    else
    {
        while(fscanf(fp,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s",s[i].StudentID,s[i].name,s[i].sex,s[i].birth,s[i].CLASS,s[i].phone,s[i].JUDGE[0],s[i].JUDGE[1],s[i].JUDGE[2],s[i].JUDGE[3],s[i].JUDGE[4]))//循环读取数据源文件的文本内容
        {
            /*s[i].MAX=0,s[i].MIN=101;//给最高分和最低分变量赋初值
             for(j=0;j<5;++j)
             {
             if(atoi(s[i].JUDGE[j])>s[i].MAX)
             {
             s[i].MAX=atoi(s[i].JUDGE[j]);//判断一行中的最高分
             
             }
             if(atoi(s[i].JUDGE[j])<s[i].MIN)
             {
             s[i].MIN=atoi(s[i].JUDGE[j]);//判断一行中的最低分
             }
             }
             s[i].sum=atoi(s[i].JUDGE[0])+atoi(s[i].JUDGE[1])+atoi(s[i].JUDGE[2])+atoi(s[i].JUDGE[3])+atoi(s[i].JUDGE[4])-s[i].MAX-s[i].MIN;//对评委打分求和，把字符转为整形并运算*/
            s[i].MAX=0,s[i].MIN=101;
            for(i=0;i<n;i++)
            {
                //max[i]=min[i]=s[i].Judge1;
                if(s[i].Judge2>max[i])
                    max[i]=a[i].Judge2;
                if(s[i].Judge3>max[i])
                    max[i]=a[i].Judge3;
                if(s[i].Judge4>max[i])
                    max[i]=a[i].Judge4;
                if(s[i].Judge5>max[i])
                    max[i]=a[i].Judge5;
                if(s[i].Judge2<min[i])
                    min[i]=a[i].Judge2;
                if(s[i].Judge3<min[i])
                    min[i]=a[i].Judge3;
                if(s[i].Judge4<min[i])
                    min[i]=a[i].Judge4;
                if(s[i].Judge5<min[i])
                    min[i]=a[i].Judge5;
            }
            for(i=0;i<n;i++)
            {
                s[i].sum=(s[i].Judge1+s[i].Judge2+s[i].Judge3+s[i].Judge4+s[i].Judge5-max[i]-min[i]);
            }
            i=0;
            if(i>=n)
            {
                break;
            }
            i++;
        }
    }
    FILE *fp1;//定义一个地址指针用于指向写入数据的文件
    fp1=fopen("/Users/S20171105130/Desktop/STUDENT5.0.csv","w");//打开文件用来后续文本写入
    for(i=0;i<n;++i)
    {
        if(i==0)
        {
            printf("%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s\n",s[i].StudentID,s[i].name,s[i].sex,s[i].birth,s[i].CLASS,s[i].phone,s[i].JUDGE[0],s[i].JUDGE[1],s[i].JUDGE[2],s[i].JUDGE[3],s[i].JUDGE[4]);
            fprintf(fp1,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s\n",s[i].StudentID,s[i].name,s[i].sex,s[i].birth,s[i].CLASS,s[i].phone,s[i].JUDGE[0],s[i].JUDGE[1],s[i].JUDGE[2],s[i].JUDGE[3],s[i].JUDGE[4]);//把第一行字符输出
        }
        else
        {
            printf("%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%.2f\n",s[i].StudentID,s[i].name,s[i].sex,s[i].birth,s[i].CLASS,s[i].phone,s[i].JUDGE[0],s[i].JUDGE[1],s[i].JUDGE[2],s[i].JUDGE[3],s[i].JUDGE[4],s[i].sum/3);//测试输出结果
            fprintf(fp1,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%.2f\n",s[i].StudentID,s[i].name,s[i].sex,s[i].birth,s[i].CLASS,s[i].phone,s[i].JUDGE[0],s[i].JUDGE[1],s[i].JUDGE[2],s[i].JUDGE[3],s[i].JUDGE[4],s[i].sum/3);//除第一行外所有的数据输出
        }
    }
    return 0;
}
