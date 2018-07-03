//
//  main.cpp
//  2018年06月21日09:15:16  First
//
//  Created by 杨扬 on 18/6/21.
//  Copyright © 2018年 杨扬. All rights reserved.
//
/*
#include <iostream>
#include<fstream>
#include<cstdlib>
#include "cmath"
#include "algorithm"
using namespace std;
int main() {
    int studentid;
    sort(a,a+4,greater<int>());将greater改为less为从小到大
    
    freopen("111.txt","r",stdin);
    cin >> studentid;
    cout << studentid;
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
string Trim(string& str)
 {
      str.erase(0,str.find_first_not_of(" \t\r\n"));
    
     str.erase(str.find_last_not_of(" \t\r\n") + 1);
    
      return str;
     }

 int main()
{
      ifstream fin("/Users/S20171105130/Desktop/STUDENT1.0.csv");
    
      string line;
      while (getline(fin, line)) {
          //cout << line << endl;
        
           istringstream sin(line);
          vector<string> fields;
           string field;
           while (getline(sin, field, ',')) {
                fields.push_back(field);
               }
        
           string name = Trim(fields[0]);
           string age = Trim(fields[1]);
           string birthday = Trim(fields[2]);
           cout << name << "\t" << age << "\t" << birthday << endl;
          }
        system("pause");
        return 0;
        
        }
/*
class csvdata{
     public:
        int studentID;
    string name;
    string sex;
    int birth;
    };//行的类定义
int main()
{
        vector<csvdata> incsv;
        csvdata intp;
        FILE *fp;
        fp=fopen("/Users/S20171105130/Documents/STUDENT1.0.csv","r");//你自己的文件路径
        while(1){
                 fscanf(fp,"%d,%s,%s,%d",&intp.studentID,&intp.name,&intp.sex,&intp.birth);
                incsv.push_back(intp);
                if (feof(fp))break;
            }
        fclose(fp);
        for(int i=0;i<incsv.size();i++)
            {
                   cout<<incsv[i].studentID<<" "<<incsv[i].name<<" "<<incsv[i].sex<<" "<<incsv[i].birth<<endl;
            }//输出显示每行的数据
    
    
    system("pause");
    return 0;
    }
    /*string Trim(string& str)
    {
        //str.find_first_not_of(" \t\r\n"),在字符串str中从索引0开始，返回首次不匹配"\t\r\n"的位置
        str.erase(0,str.find_first_not_of(" \t\r\n"));
        str.erase(str.find_last_not_of(" \t\r\n") + 1);
        return str;
    }
    int main()
    {
        ifstream fin("STUDENT1.0.csv");
        string line;
        while (getline(fin, line))
        {
            cout <<"原始字符串："<< line << endl;
            istringstream sin(line);
            vector<string> fields; //声明一个字符串向量
            string field;
            while (getline(sin, field, ',')) //将字符串流sin中的字符读入到field字符串中，以逗号为分隔符
            {
                fields.push_back(field); //将刚刚读取的字符串添加到向量fields中
            }
            string name = Trim(fields[0]); //清除掉向量fields中第一个元素的无效字符，并赋值给变量name
            string age = Trim(fields[1]); //清除掉向量fields中第二个元素的无效字符，并赋值给变量age
            string birthday = Trim(fields[2]); //清除掉向量fields中第三个元素的无效字符，并赋值给变量birthday
            cout <<"处理之后的字符串："<< name << "\t" << age << "\t" << birthday << endl;
            
        }
        //int ID;
        //string name;
        // int sex;
        // int birth;
        //string class1;
        //int phone;
        //int judges1,judges2,judges3,judges4,judges5;
        //cin>>name;
        //freopen("STUDENT1.0.csv","r",stdin);
        //freopen("input.csv","w",stdout);
        //cout<<"name"<<endl;
        //fprintf(fp,"haha");
        
        return EXIT_SUCCESS;
 
 }*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include<cstdlib>
#include "algorithm"
using namespace std;
int main()
{
    int  i,n,q,sum,max,min;
    //用i来做计数器，用n来做总数，sum就是总和，max即是最大数，
    //min即是最小数
    FILE *a;
    FILE *b;
    b=fopen("/Users/S20171105130/Desktop/STUDENT5.0.csv","a");
    string s1[200];
    string s2[200];
    string s3[200];
    string s4[200];
    string s5[200];
    string s6[200];
    string s7[200];
    string s8[200];
    string s9[200];
    string s10[200];
    string s11[200];
    int s12[10];
    
    
if ((a=fopen("/Users/S20171105130/Desktop/STUDENT4.csv","r"))==0)
{
    printf("nono\n");
}
    
else
{
    for(int t=0;t<3;t++)
        {
        fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
            
            cout << s11[2]<<endl;
        //if(i==1||i==2)
        //{
        //fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%d ,%d ,%d ,%d ,%d \n",s1,s2,s3,s4,s5,s6,s12[1],s12[2],s12[3],s12[4],s12[5]);
        //}
        //else{
        
        fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s \n",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
        //printf("%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s \n",s1,s2,s3,s4,s5,s6,s7[2],s8,s9,s10,s11);
       // }
        
}
    
    
}
    
    return 0;
}
/*
 s1[i],s2[i],s3[i],s4[i],s5[i],s6[i],s7[i],s8[i],s9[i],s10[i],s11[i]
 #include<iostream.h>
 void main()
 {
 int  i,n,a,sum,max,min;
 //用i来做计数器，用n来做总数，sum就是总和，max即是最大数，
 //min即是最小数
 cout << "请输入要比较的数字的个数 n = "<<endl;
 cin >>n ;
 cout<<"请输入第1个数:" <<endl;
 cin >>a;
 min=a;                      //初始化各数
 max=a;
 sum=a;
 for( i=1;i<n;++i)            //循环应用
 {
 cout << "请输入第"<<i+1<<"个数"<<endl;
 cin >> a;
 if(a>max)  {max=a;}
 if(a<min)  {min=a;}
 sum+=a;
 }
 cout <<"  最大数max = " << max <<  "  最小数min = "<< min <<endl;
 cout << "除去最大数和最小数的总和为sum = " << sum-max-min <<endl;
 cout  <<"此时平均数" << (sum-max-min)/n<<endl;    //平均数是n-2个数的还是n个数的，你自己改吧
 }*/
//%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n



