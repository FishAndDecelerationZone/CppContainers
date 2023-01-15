

#include <STL_container.h>


void vector_init(){
    /*一维初始化*/ 
    vector<int> num;
    vector<double> num_double;
    vector<pair<int, long>> num_pair;  // num_pair 为类型都为int的pair数组
    
    // 指定长度和初始值的初始化
    int length = 10;
    vector<int> v1(length);         // 定义一个长度为length的数组，动态定义，不指定初值默认为0
    vector<int> v2(length, -1);     // 指定初始化元素
    
    // c++11新特性初始化
    vector<int> a{1, 2, 3, 4, 5};

    // 拷贝构造
    vector<int> b(a);       // a的type能转换到b的
    
    
    /*二维初始化*/
    int m = length;
    int n = length;
    // 行不可变列可变
    vector<vector<int>> num_2(m);

    // 行列均可变
    vector<vector<int>> num2_2; 

    // 行列均固定
    vector<vector<int>> a_2(m, vector<int>(n, -1));   // 元素值初始化为-1
    // c++17新写法
    vector a2_2(m, vector(n, -2));


    /*遍历二维vector*/
    cout << "下标遍历法"<< endl;
    for(int i = 0; i < a_2.size(); i++){
        for(int j = 0; j < a_2[0].size(); j++){
            cout<< a_2[i][j] << '\t';
        }
        cout<<endl;
    }
    
    cout << "智能指针"<< endl;
    for(auto &row : a_2){
        for(auto &element : row){
            cout<< element << '\t';
        }
        cout<<endl;
    }
}   


void vector_func(){
    int m = 3;
    vector<int> matrix(m, 0);

    cout<< "返回第一个数据:" << matrix.front()<< endl;
    matrix.pop_back(); // 删除最后一个元素 O(1)
    matrix.push_back(2); // 在尾部添加一个元素

    cout << "返回实际数据个数O(1):" << matrix.size()<< endl;

    matrix.begin();  // 返回指向首元素的迭代器
    matrix.end();    // 返回最后一个元素后一个位置的地址

    matrix.resize(m*2, 1);  // 改变数组大小为n，n个空间。
    matrix.insert(matrix.begin()+2, 6); // 将6插入到matrix[2]位置 
    matrix.erase(matrix.begin()+1, matrix.end());  // 删除[first, last)的所有元素 
    matrix.clear();     // 清除元素
    cout << "判断是否为空：" << matrix.empty() << endl;

    sort(matrix.begin(), matrix.end());  // 使用sort进行排序的方法
}


void vector_visit(){
    vector<int> vi;
    vector<int>::iterator it = vi.begin(); // 声明一个迭代器指向vi的初始位置
    for (int i = 0; i < 10; i++)
    {
        /* code */
        vi.push_back(i);
    }

    /*下标访问*/
    cout<< "下标访问："<< endl;
    for (int i = 0; i < vi.size(); i++){
        cout << vi[i] << "\t";
    }
    cout << endl;

    /*迭代器访问*/
    cout<< "迭代器间接访问："<< endl;
    it = vi.begin();
    for (int i = 0; i < vi.size(); i++){
        cout<< *(it + i)<< "\t";
    }
    cout<< endl;

    cout<< "迭代器直接访问："<< endl;
    for(it = vi.begin(); it != vi.end(); it++){
        cout<< *it<< "\t";
    }
    cout<< endl;

    /*智能指针*/
    cout<< "智能指针："<< endl;
    for(auto i : vi){
        cout<< i << "\t";
    }
    cout<< endl;
}
