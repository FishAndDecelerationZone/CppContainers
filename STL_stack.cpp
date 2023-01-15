//
// Created by 少田啊 on 2023/1/7.
//

#include "STL_container.h"

void stack_func(){
    stack<int> s1;

    s1.push(0);  // 压栈，增加元素O(1)
    s1.top();    // 取得栈顶元素O(1)
    s1.size();   // 返回stack内元素的个数O(1)
    s1.pop();    // 移除栈顶元素O(1)
    s1.empty();  // 判断栈内是否为空 O(1)
}

