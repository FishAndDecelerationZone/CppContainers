
//
// Created by Dell on 2023/2/25.
//
# include "STL_container.h"

/*array是c++11新增的容器，效率比vector高。array容器的大小的固定的，只允许访问或替换存储的元素*/
void array_func(){
    // 初始化
    array<int, 100> a;    // 元素值未初始化

    array<int, 100> b = {};    // 初始值为0

    array<int, 100> c = {1, 2, 3};     // 初始化部分值，其余部分全部为0

    array<string, 2> s = {"hello", string("hi")};


    // 访问元素
    array<int, 4> d;
    for (int i = 0; i < d.size(); i++){
        d[i] = i;
    }

    // auto访问
    for (auto& i : d){
        i = 2 * i;
    }

    // 迭代器访问
    auto it = d.begin();
    while(it != d.end()){
        cout << *it << endl;
        it++;
    }

    // at访问
    int res = d.at(0) + d.at(1);
    cout << "d.at(0) + d.at(1): " << res << "\n";

    // get访问
    get<1>(d) = 8;     // 将数组索引为1的值改为8(下标只能写数字，不能填变量)


    // 成员函数
    d.data();           //  返回一个指向容器首个元素的指针。利用该指针，可以实现复制容器中所有元素等类似功能

    d.begin();
    d.end();
    d.rbegin();     // 返回最后一个元素的访问迭代器
    d.rend();       // 返回第一个元素之前一个位置的访问迭代器

    d.size();           // 返回容器中元素的数量
    d.max_size();       // 返回容器可容纳的最大数量，其值始终等于初始化array类的第二个模板参数

    cout << "d is empty: " << d.empty() << endl;

    d.at(0);
    int& num = d.front();      //  返回第一个元素的直接引用，空容器不能调用
    int& num2 = d.back();             // 返回最后一个元素的直接引用，空容器不适用

    d.fill(1);       //     将u赋值给array中的每一个元素，相当于初始化

    array<int, 4> e = {4, 3, 2, 1};
    d.swap(e);      //  交换array d 和array e 容器中的所有元素，但前提是它们具有相同的长度和类型


    // sort
    sort(d.begin(), d.end());
}

