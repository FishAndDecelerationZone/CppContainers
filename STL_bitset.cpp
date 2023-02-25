//
// Created by Dell on 2023/2/25.
//

#include "STL_container.h"


void bitset_func(){
    // bitset init
    bitset<4> bitset1;    // bitset<n> a;   a有n位，每位都是0
    bitset<9> bitset2(12);      // bit<n>a(val);   a有n位, a是unsigend long型的val的二进制副本, 前缀由0补充

    string s = "10010101";
    bitset<10> bitset3(s);         // bit<n>a(string);     a有n位，a是含有位串的string对象的二进制副本，前缀由0补充
    bitset<13> bitset4(s, 0, 4);     // bit<n>a(str, pos, n);     a有n位，是s从pos位置开始的n个位的副本

    cout << "bitset1" << bitset1 << endl;
    cout << "bitset2" << bitset2 << endl;
    cout << "bitset3" << bitset3 << endl;
    cout << "bitset4" << bitset4 << endl;


    // bit_operation

    bitset<4> foo("1001");
    bitset<4> bar("0011");

    cout << (foo ^= bar) << endl;      // 1010  foo和bar按位异或后存入foo

    cout << (foo &= bar) << endl;      // 0010  foo和bar按位与之后存入foo

    cout << (foo |= bar) << endl;      // 0011  按位或之后赋值给foo

    cout << (foo <<= 2) << endl;       // 1100  按位左移2两位，低位补0，自身赋值

    cout << (foo >>= 1) << endl;       // 0110  右移一位，高位补0，自身赋值

    cout << (~bar) << endl;            // 1100  按位取反

    cout << (bar << 1) << endl;        // 0110  左移一位

    cout << (bar >> 1) << endl;        // 0001  右移一位

    cout << (foo == bar) << endl;      // false  诸位比较

    cout << (foo != bar) << endl;      // true 诸位比较

    cout << (foo & bar) << endl;       // 按位与

    cout << (foo | bar) << endl;       // 按位或

    cout << (foo ^ bar) << endl;       // 按位异或


    // 访问
    for (int i = 0; i < foo.size(); i++){
        cout << "foo[" << i << "]:"<< foo[i] <<endl;
    }


    // func
    bitset<20> bitset5("10111100011");
    cout << bitset5.any() << endl;        // b中否有存在为1的二进制位，有返回true
    cout << bitset5.none() << endl;       // b中是否没有1，没有返回true
    cout << bitset5.count() << endl;      // b中为1的个数
    cout << bitset5.size() << endl;       // b中的二进制位的个数
    cout << bitset5.test(1) << endl;    // pos位置是否为1，是1返回true

    bitset5.set();   // 将b中的所有位置都置为1
    bitset5.reset();   // 将b中的所有位置都置为0
    bitset5.flip();    // 把b中所有二进制位取反
    bitset5.flip(0);    // 将b中pos位置的二进制位取反
    unsigned long num = bitset5.to_ulong();     // 将b中同样的二进制位返回一个unsigned long值
    cout << "unsigned long:" << num << endl;
}