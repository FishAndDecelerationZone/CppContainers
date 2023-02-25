//
// Created by Dell on 2023/2/25.
//

# include "STL_container.h"

/*元组中可以封装不同类型任意数量的对象*/
void tuple_func(){
    // 声明+赋值
    tuple<int, int, string> tuple1;
    tuple1 = make_tuple(1, 1, "hahaha");

    // 初始化
    tuple<int, int, int> xyz =  {1, 2, 3};

    // 元素访问
    get<0>(xyz) = 8;

    // 获取元素个数
    cout << tuple_size<decltype(xyz)>::value  << endl;

    // tie 解包获取元素的值
    int x, y, z;
    tie(x, y, z) = xyz;
    cout << "x:" << x << "\ty:" << y << "\tz:" << z << endl;
}