//
// Created by Dell on 2023/2/21.
//
# include "STL_container.h"
# include <cstring>

void string_basic(){// 初始化和定义

    // 1.生成空字符串
    string str1;

    // 2.生成"123456789"的复制品
    string str2("123456789");

    // 3. 结果为 123 从0位置开始, 长度为3
    string str3("123456789", 0, 3);

    // 4. 结果为 12345 , 长度为5
    string str4("123456", 5);

    // 5. 结果为 22222 , 构造5个字符2,连接而成的字符串
    string str5(5, '2');

    // 6. 截取传入字符串的index = 2的元素到最后
    string str6(str2, 2);


    cout<< "------访问单个字符------"<< endl;
    string s1 = "gong shao tian!";
    for (auto chr : s1){
        cout << chr<< ", ";
    }


    cout<< "------string数组的使用------"<< endl;
    string s_array[10];
    for (int i = 0; i < s_array->capacity(); i++){    // 要用指针
        s_array[i] = "loading...";
        cout<< s_array[i]<< i<< endl;
    }


    cout<<"------string特性------"<< endl;
    s1 = "123";
    string s2 = "456";
    cout << s1 + s2<< endl;


    cout <<"------读入字符串, 遇到空格和回车结束------"<< endl;
    string s;
    cin >>s;

    cout <<"------读入一行字符串(包括空格)，遇到回车结束"<< endl;
    getline(cin, s);
    // getline(cin,s)会获取前一个输入的换行符，需要在前面添加读取换行符的语句。如：getchar()或cin.get()

    /*错误读取*/
    int n;
    string s3;
    cin >>n;
    getline(cin, s3);   // 此时相当于读取了一个回车符

    /*正确读取*/
    int n2;
    string s4;
    cin >>n2;
    getchar();   // cin.get()
    getline(cin, s4);


    cout << "------cin和cout解锁------"<< endl;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    /*cin cout解锁使用时，不能与scanf, getchar, printf, cin.getline()混用*/

    cout << "------sring转换成char数组------"<< endl;
    cout << "错误用法:"<<endl;
    s = "gong shao";
    const char* c10 = s.c_str();      // c_str()返回的类型是const char*这种方法不能修改。当s对象被析构时，c10就变成了一个野指针。

    cout << "正确用法:"<< endl;
    char* c11;
    strcpy(c11, s.c_str());    //


}


void string_func(){
    string s("gong shao tian");
    cout << "size:" << s.size()<< "\tlength:"<< s.length()<<endl;
    cout << "max_size:"<< s.max_size()<< "\t(string对象最多包含的字符数)"<< endl;
    cout<< "capacity():" << s.capacity()<< "\t(重新分配内存前，string能包含的最大字符数)"<< endl;

    // insert
    s.push_back('_');    // 在末尾插入一个字符
    s.insert(s.begin(), '_');    // 在pos位置插入一个字符
    s.append("gst");        // 在s字符串末尾添加字符串"abc"
    cout << s<< endl;

    // delete
    s.erase(s.begin());     // 删除指定位置的字符
    cout<< s<<endl;

    s.erase(s.end()-3, s.end());      // 删除末尾的三个元素
    cout<< s<<endl;

    s.erase(s.size()-1, 1);      // 删除从pos位置开始的n个字符
    cout<< s<<endl;

    s.clear();    // 删除字符串中的所有字符串，实质是把字符串空间首个字符设置为"\0"


    // replace
    s = "123456789";
    s.replace(0, 2, "***");     // 将s的从索引pos开始的n个字符替换为str
    cout << s<< endl;

    s.replace(0, 3, 2, '-');     // 把当前字符串从索引pos开始的n个字符替换为n1个字符c
    cout << s<< endl;

    s.replace(s.begin(), s.end(), "987654321");   // 把但钱字符串[it1, it2) 区间替换为str it1, it2为迭代器
    cout << s<< endl;


    // transform
    cout << tolower('A') << toupper('a') <<endl;

    string trans("abcd");
    cout << trans << endl;
    transform(trans.begin(), trans.end(), trans.begin(), ::toupper);
    cout << "to upper\t"<< trans << endl;

    transform(trans.begin(), trans.end(), trans.begin(), ::tolower);
    cout << "to lower\t" << trans << endl;


    // subscribe
    string subs = s.substr(2, 2);    // 截取从pos索引开始的n个字符
    cout << "截取的子串:" << subs << endl;


    // search
    cout << "find" << endl;
    cout << s.find("321", 2) << endl;   // 在当前字符串的pos索引位置开始，查找子串str，返回找到的位置索引，-1表示查找不到子串
    cout << s.rfind("321", 6) << endl;  // 从pos位置开始，反向查找子串str，返回找到的位置索引，-1表示未找到

    cout << s.find('9', 1) << endl;      // 从pos位置开始查找字符c。返回索引，找不到的话返回-1
    cout << s.rfind('1', 8) << endl;    // 从pos位置开始，反向查找字符c。返回索引，找不到的话返回-1

    cout << "find first" << endl;
    cout << s.find_first_of("123", 0) << endl;  // 从pos位置开始查找子串中的字符，返回找到的位置索引
    cout << s.find_first_not_of("123", 0)<< endl;      // 从pos开始，查找第一个不位于子串s的字符，返回位置，找不到的话返回-1

    cout << s.find_last_of("123", 9 ) << endl;  // 从pos位置开始查找最后一个位于子串s的字符
    cout << s.find_last_not_of("123", 9 ) << endl;  // 从pos位置开始查找最后一个不位于子串s的字符


    // sort
    sort(s.begin(), s.end());   // 按ascii码排序
}