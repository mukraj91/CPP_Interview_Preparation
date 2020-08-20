4/10/18
-----------------------

https://www.learncpp.com/cpp-tutorial/6-11a-references-and-const/


Compiler:
-----------------------
GNU G++ /GCC --> unix and linux 
MinGW   -->> Window
Visual C++ compiler -->> Window 

-----------------------
5/10/18
--------

Standard Template Library (STL)

function template
-------------------
temlate<typename T>

T add(T a, T b)
{

return a + b ;
}

int main()
{
int a = 2;
int b = 3;
cout<<add<int>(a,b)<<endl;

}

--------
Without template implementation of class
--------------------
class Something
{

  int a[2];
  int add()'
   
   Something();
 };
 
Something::Something()
{

cin>>a[0]>>a[1];

}

int Something::add()
{

return a[0] + a[1];
}


int main()
{

Something intsomething;

cout<<intsomething.add()<<endl;
return 0;
}

-------------------
class temlate
--------------------
template<typename T>
class Something
{

  T a[2];
  T add();
  Something();
 };
template<typename T> 
Something<T>::Something()
{

cin>>a[0]>>a[1];

}
template<typename T>
T Something<T>::add()
{

return a[0] + a[1];
}


int main()
{

Something <int> intsomething;

cout<<intsomething.add()<<endl;
return 0;
}

---------------------
What are template??
--> Make your program genric.
    increare program reusability.
  Templates are a feature of the C++ programming language 
  that allows functions and classes
   to operate with generic types.
   
   
(i) function template taking one parameter.
template<type T> T add(T a, T b){}

int main()
{
add<int>(2,4)
} 
 
(ii)Function taking two parameter

template<typename T1, typename T2>
T1 add(T1 a, T2 b)  
   
   
 add<int, float>(4, 6.77);  
   
  
----------------------
Template specilization 
----------------------
Special behaviour of perticular data type called template specialization. 
   (i)function template specilization
   
 template<> void add(int i){}
  
(ii)class template specilization 
 
 template<> 
 class Fun<char>
{

public:
  Fun(char ch){
  cout<<ch "indeed charater"} 
   
 
};
------------------------
C++ Standard Library
------------------------
N Algorithms + M container = N+M implementation.
-----------

Containers
--------------
(i) Sequence containers(array and linked list)
 - array
 - linkedlist
 
(ii) Associative containers(binary tree)
 - set, multiset
 - map, multimap 

(iii) Unordered container (hash table)
- Unordered set/ multiset
- Unorser map/ multimap
-------------------------------
Vector :- Sequencial array

/*Property of vector*/
(i)   Fast insert/ remove at the end o(1)
(ii)  Slow insert/remove at the begining or in the middle o(n)
(iii) Slow search o(n)

Created vector
---------------- 
vector<int> vec;

------------
created Dequeue

deque<int> deq = {4, 6, 7}

deq.push_front(2); // {2, 4, 6, 7}
deq.push_back(3); // // {2, 4, 6, 7, 3}

--------------
List: list is double linkedlist

list<int>mylist = {5, 2, 9}
mylist.push_back(6); // mylist {5, 2, 9, 6} 
mylist.push_front(4); // mylist {4, 5, 2, 9, 6}    

list<int>::iterator itr = find(mylist.begin(), mylist.end(), 2); // itr = 2
mylist.insert(itr, 8);
itr++; // itr -> 9

<*> list is musg slower than vector
Cache love contigues memeory of data.
Each element of list store differnt place in memory.
So, once traves the list you will get alot of cache miss.

mylist.splice(itr, mylist2, itr_1, itr_2)

-----------------
Array container

array<int, 3> a = {3, 4, 5}

a.begin()
a.end()
a.size()
a.swap()

---------------------------
Associative container

Set or Multiset
----------------
Associative container typically represented through binary tree.

Note: set/ multiset : value of the element cannot be modified.

multiset<int> myset;


*it = 10;/ *it is the read only: Error

--------------------------
/*
Map */

No Duplicate key
-----------------
map<char,int>mymap;
mymap.insert (pair<char,int>)('a',100);
mymap.insert (make_pair<char,int>)('z',200);

===============================
Unordered Associative Containers(C++11)

(i)  Unordered Set /Multiset 
(ii) Unordered Map /Multimap 

Note: Unordered Associative Containers implemented using 
 hash teble(array of linkedlist)
 


/* unordered set/
*/

unordered_set<string>myset = {"red", "green", "blue"};
unordered_set<string>::const_iterator itr = myset.find("green")

if(itr != myset.end()) // check

cout<< *itr <<endl;

vector<string> vec = {"purple", "pink"};
myset.insert(vec.begin(), vec.end());

------------------------------------
unordered multiset : unordered set that allows duplicated elements.
unordered map : unordered set of pairs
unordered multimap : unordered map that allows duplicated keys.

Note: Hash collision => performance Degrade

----------------
/*
Associative array
* 
* map and onordered map/

unordered_map<char, string> day = {{'S', "Sunday"}, {'M', "Monday"}};

cout<< day['s'] <<endl; // No range check
cout<< day.at('s') <<endl; // Has range check

----------------------------
Notes about associative array:
(i) Search time : unordered_map, o(1); map, o(log(n));
(ii) Unordered_map may degrade to o(n)
(iii) Can't use multimap and unordered_maltimap, they don't have [] operator


----------------------
Container Adapter
- provide a restricted interface to meet special needs.
- Implemented with fundamental container classes
(1) stack : LIFO, push(),pop(), top();
(2) queue : FIFO, push(), pop(), front(), back();
(3) priority queue : first items 


---------------------------
Iterator
(i)   Random access (vector,deque, array)
(ii)  Bidirectional iterator(list, set/multiset, map/multimap)
(iii) Forward iterator(forward_list)
(iv)  Input iterator
(v)   Output iterator
---------------------
Function Object(functors)


Class X{

public:

void operator(string str)
{
cout<<"Calling functors X with parameter"<<endl;

}

operator string
};

int main()
{

X foo;
foo("Hi")// Calling functors X with parameter

}
=================================================
Stack
---------
#include<iostream>
#include<stack>
using namespace std;
int main()
{
std::stack<int> stack;
stack.push(1)
stack.push(2)
stack.push(3)
stack.push(4)
std::cout<<stack.top()<<std::endl;
}
-----------------
Conversion constructors (C++ only)
=====================
https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.3.0/com.ibm.zos.v2r3.cbclx01/cplr384.htm
https://www.geeksforgeeks.org/g-fact-35/
=============

Advanced C++ | Conversion Operators
=============
https://www.geeksforgeeks.org/advanced-c-conversion-operators/

============
Assignment operator
-------------

class Test
{
// copy constructors
Test(const Test &t);
// Assignment operator
 Test& operator = (const Test&);
};
Test& Test ::operator = (const Test &t)
{

}
-------------
=================================
Explicit conversion operators (C++11)
------------
https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.3.0/com.ibm.zos.v2r3.cbclx01/explicit_conversion_operators.htm


Note: - Prefixing the explicit keyword to the constructor prevents the compiler from using that constructor for implicit conversions. 












==============================
Design Pattern
---------------
Creational 
Structural 
Behavioural 

----------------
creational Design pattern
(i)   Prototype --> A fully initialized instance should be copy and clone.  
(ii)  Builder --> Separates object construction from it's represented.
(iii) Singleton --> create singalton object
(iv)  Factory Methods --> Create a object for family

-------------
Structural Design Pattern
(i)  Proxy --> An Object representing another object.
              (Credit card is a proxy for what is in our bank account)
(ii) Decorator --> Add responsibility to object dynamically.
(iii)Facade --> A single class that represent an entire subsystem.
(iv) Adapter --> Match interface of differnt classes
(v)  Flyweight --> A fine-grained instance used for efficient sharing.
                (creating instances for efficent sharing)
---------------------
Behavioural Design Pattern
(i)  Chain of responsibility --> A way of passing a request between a chain of object. 
(ii) Iterator --> Sequentially access the elements of a collection.
(iii) State --> Alter an object behaviour when it's state change.
(iv)  Stategy -->> Encapsulate and algoritham insidea class.
(v)   Observer -->> A way of notifying change to a number of class.
(vi)  Visitor -->> Define a new operation to a class without change.
(vii) Template method --> Refer the exact steps of an algoritham to a subclass.
(viii) Command --> Encapsulate a command request as an object.
 (ix) Memento --> Capture and restore an object internal state.
 (x) Mediator  --> Define simplified communication between classes.
 
 
  
 --------------------------------
 5/6/19 : Daily Learning 
 -------------------------------
 (1)Threading Concepts : - 
 
 
 
 
 

 




int x = 5 ;
const int MAX = 12 ;
int &ref_x1 = x ;
const int &ref_x2 = x ;
 
//Try to modify the pointer (e.g. ptr1) and the pointee value (*ptr1)
const int *ptr1 = &x ;
int *const ptr2 = &x ;
const int * const ptr3 = &x ;
 
//Find which declarations are valid. If invalid, correct the declaration
const int *ptr3 = &MAX ;
int *ptr4 = &MAX ;
 
const int &r1 = ref_x1 ;
int &r2 = ref_x2 ;
 
int *&p_ref1 = ptr1 ;
const int*&p_ref2 = ptr2 



















