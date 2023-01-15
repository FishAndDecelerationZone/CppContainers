//
// Created by 少田啊 on 2023/1/15.
//

# include "STL_container.h"

void map_func() {
    // 初始化
    map<string, string> m1;
    map<string, int> m2{{"1", 1},
                        {"5", 2},
                        {"2", 2},
                        {"3", 3},
                        {"4", 4}};


    // 添加元素
    m1["offer"] = "刷题";
    m1["show"] = "money";

    m1.insert(make_pair("方式1", "调用pair接口"));
    m1.insert(pair<string, string>("方式2", "显式声明pair对象"));
    m1.insert({"方式3", "统一对象初始化"});


    // 访问元素
    cout << m1["方式1"] << endl;

    cout << "迭代器访问" << endl;
    map<string, string>::iterator it;
    for (it = m1.begin(); it != m1.end(); it++)
        cout << "键：" << it->first << "\t" << it->second << endl;

    cout << "智能指针访问" << endl;
    for (auto i: m2)
        cout << "键：" << i.first << "\t" << i.second << endl;

    cout << "c++ 17新特性" << endl;
    for (auto [x, y]: m1)
        cout << "键：" << x << "\t" << y << endl;

    cout << "逆向遍历" << endl;
    auto re_ptr = m2.rbegin();
    while (re_ptr != m2.rend()) {
        cout << "键：" << re_ptr->first << "\t" << re_ptr->second << endl;
        re_ptr++;
    }


    // 查找元素
    auto pfind = m2.find("3");   // 返回一个迭代器，键不存在时返回m1.end()
    bool res = m1.count("1");    // 查看key是否存在，存在返回1，不存在返回0


    // 二分查找 lower_bound() 和upper_bound()
    map<int, int> m{{1, 2},
                    {2, 2},
                    {1, 2},
                    {8, 2},
                    {6, 2}};//有序
    auto it1 = m.lower_bound(2);    // 返回一个迭代器，指向键不小于k的第一个元素
    cout << it1->first << "\n";   //it1->first=2
    auto it2 = m.upper_bound(2);    // 返回一个迭代器，指向键大于k的第一个元素
    cout << it2->first << "\n";   //it2->first=6


    // 删除元素
    auto m1_begin = m1.begin();
    auto m1_end = m1.end();
    m1.erase(m1_begin, m1_end);

    m2.erase("2");    // 根据键值删除元素
    m2.erase(pfind);   // 删除迭代器指向的键
    m2.clear();   // 清空map中的所有元素

    cout << "m1 size:" << m1.size() <<endl;
    cout << "m2 size:" << m2.size() <<endl;
}