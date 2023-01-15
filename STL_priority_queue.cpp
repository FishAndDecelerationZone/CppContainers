//
// Created by 少田啊 on 2023/1/14.
//

# include "STL_container.h"

template<class T>
struct cmp_up{
    bool operator()(T x, T y)
    {
        return x > y;  // 小的优先级高，从堆底到堆顶降序排列。与sort中的比较器相反
    }
};

template<class T>
        struct cmp_dowm{
            bool operator()(T x, T y){
                return x < y;  // 大的优先级高，从堆底到堆顶升序排列。与sort中的比较器相反
            }
        };

void priority_queue_func(){
    vector<double> v1 = {2.0, 1.0, 5.0, 3.0};
    priority_queue<double, vector<double>, cmp_up<double>> pq;

    for (auto i : v1){
        pq.push(i);
    }
    pq.push(4.0);

    while(!pq.empty()){
        cout << "优先队列长度："<< pq.size() << "当前元素：" << pq.top() << endl;
        pq.pop();
    }
}

