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
    cout << studentid;*/
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
    using namespace std;
    string Trim(string& str)
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
    }

    
    
    
    
    return 0;
}
