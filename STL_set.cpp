//
// Created by 少田啊 on 2023/1/16.
//

# include<STL_container.h>

// set中的元素不会重复，并且会自动排序
void set_func(){
    // 初始化
    set<string> s1;
    set<int> s2{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // 添加元素
    for (int i = 0; i < 10; i++){
        s1.insert(to_string(i));
    }

    // 访问元素
    cout << "迭代器访问" << endl;
    set<string>::iterator it_s1 = s1.begin();
    for(; it_s1 != s1.end(); it_s1++){
        cout << *it_s1 << endl;
    }

    cout << "智能指针替换迭代器" << endl;
    for (auto i : s1){
        cout << i << endl;
    }

    cout << "逆向遍历" << endl;
    auto riter_s1 = s1.rbegin();
    for (; riter_s1 != s1.rend(); riter_s1++)
        cout << *riter_s1 <<endl;

    cout << "访问最后一个元素的两种方式" <<endl;
    cout << *s1.rbegin()<< endl;
    cout << *(--s1.end())<< endl;

    // 查找元素
    set<int>::iterator iter = s2.find(5);


    // lower_bound()和upper_bound()
    auto l_bound = s2.lower_bound(2);   // 返回一个迭代器，指向不小于k的第一个元素
    auto up_bound = s2.upper_bound(1);  // 返回一个迭代器，指向大于k的第一个元素
    cout << "lower bound:" << *l_bound<< "\tupper_bound:" << *up_bound<< endl;

    // 删除元素
    auto s1_begin = s1.begin();
    auto s1_end = s1.end();
    s1.erase(++s1_begin--);   // 删除迭代器指向的元素，删除第二个元素
    s1.erase(s1_begin, s1_end);

    s2.clear();
    cout << "s1 is empty:\t"<< s1.empty()<< endl;
    cout << "size of s2:\t"<< s2.size()<< endl;
}