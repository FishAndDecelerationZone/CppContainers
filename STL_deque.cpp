//
// Created by 少田啊 on 2023/1/7.
//

# include <STL_container.h>

void deque_func(){
    deque<int> dq;

    dq.push_back(2);   // 尾部入队
    dq.push_back(3);
    dq.push_front(1);  // 头部入队

    int front = dq.front();   // 访问队头
    int back = dq.front();    // 访问队尾
    dq.empty();
    dq.size();    // 双端队列大小
    dq.clear();   // 清空双端队列


    deque<int>::iterator begin;
    deque<int>::iterator end;
    begin = dq.begin();
    end = dq.end();
    dq.erase(begin+1);    // 删除双端队列中的某一个元素
    dq.erase(begin, end);   // 删除双端队列中[first, last)中的元素
}

bool compare_up(int a, int b){
    // 升序排列
    if (a < b){
        return true;
    }

    return false;
}

bool compare_down(int a, int b){
    // 降序排列
    if (a > b){
        return true;
    }

    return false;
}

void deque_sort(){
    deque<int> dq;
    for (int i = 0; i < 10; i++){
        dq.push_back(i);
    }

    // 从小到大
    sort(dq.begin(), dq.end());
    // 从大到小排序
    sort(dq.begin(), dq.end(), compare_down);
}

