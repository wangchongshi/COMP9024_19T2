# Tutorial 内容讲解

# 开发代码讲解
## Assignment实现细节注意事项
1.从stdin读取数据内容
2.不能使用array, linked list
3.原则上使用pointer
4.ADT的使用

    An abstract data type (ADT) is a data type that
    is defined by the operations that may be performed on it
    the data in the ADT is accessible only via operations
    a user of an ADT cannot access or even see the data (it's hidden)
    In the specification of an ADT, we must:
    
    define the data in some way
    define a set of functions to manipulate the data
    
    https://en.wikipedia.org/wiki/Abstract_data_type
    
```c
   // point.h
   #include <math.h>
   typedef struct point Point;
   struct point{
      float x; float y;
   };
   float distance(Point, Point);  // returns distance between two points
   void move(Point, float, float);// moves a point by a certain amount
```
    
5.malloc以及free

# Makefile 讲解
## dcc 与 gcc 的区别
## 常见Makefile编译错误
### Makefile:6: *** missing separator.  Stop.
    使用vim打开，然后输入一下的命令：:%s/^[ ]\+/\t/g
### no such files or dictionaries:board.o
    check target output 

# C 语言调试
## C语言风格(C style)
## 
## 调试的重要性
## 在Clion里debug代码

# test cases