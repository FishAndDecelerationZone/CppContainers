//
// Created by 少田啊 on 2023/1/7.
//

# include <STL_container.h>

void queue_func(){
    queue<int> q;

    q.push(1);   // 尾部添加一个元素副本入队
    q.size();      // 返回队列中元素个数
    q.empty();     // 判断队列是否为空

    q.front();     // 取队首元素
    q.back();      // 取队尾元素
    q.pop();       // 删除第一个元素，出队
}