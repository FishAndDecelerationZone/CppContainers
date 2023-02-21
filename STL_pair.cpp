//
// Created by Dell on 2023/2/21.
//

# include<STL_container.h>

void pair_func(){
    // 1.初始化
    pair<string, int> p("qingdaopijiu", 1);    // 带初始值
    pair<string, int> p2;    // 不带初始值

    // 2.赋值
    p2 = {"gong", 24};

    // 3.定义结构体数组
    pair<int, int> p3[20];
    for (int i = 0; i < 20; i++){
        p3[i].first = i;
        p3[i].second = i;
        cout << p3[i].first<< " "<< p3[i].second<< endl;
    }
}