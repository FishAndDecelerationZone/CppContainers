
# ifndef C__STL_STL_VECTOR_H
# define C__STL_STL_VECTOR_H


# include <vector>
# include <stack>
# include <queue>
# include <deque>
# include <map>
# include <iostream>
# include <algorithm>
# include <set>
# include <string>
# include <utility>    // pair
# include <bitset>

using namespace std;

// vector
void vector_init();
void vector_visit();

// stack
void stack_func();

// queue
void queue_func();

// deque
void deque_func();
void deque_sort();

// priority_queue
void priority_queue_func();

// set和map底层都由红黑树实现，接口类似
// map
void map_func();

void set_func();

// pair
void pair_func();

// string
void string_func();
void string_basic();

// bitset
void bitset_func();

#endif