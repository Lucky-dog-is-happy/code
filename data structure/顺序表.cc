// 线性表是由n个数据类型相同元素构成的原先序列
// 方法大致分为：插入、删除、修改、排序、计数、查找

// 顺序表：逻辑上相邻，存储空间也连续
#include <iostream>
const int MAXSIZE=100;
typedef int ElemType;
// 创建顺序表基本类型
typedef struct
{
    ElemType data[MAXSIZE]; // 存储的数据
    int length; // 顺序表长度
}SeqList;
// 初始化顺序表
void initList(SeqList *L)
{
    L->length=0;
}
// 尾部添加元素
void appendElem(SeqList *L, ElemType e)
{
    if (L->length>MAXSIZE-1){
        std::cout << "The list is full!" << std::endl;
    }else{
        L->data[L->length] = e;
        L->length++;
    }
}
// 遍历数表
void listElem(SeqList *L)
{
    for (int i=0; i<L->length; i++)
        std::cout << L->data[i] << " "; 
    std::cout << std::endl;
}
// 插入元素
void insertElem(SeqList *L, int position, ElemType e)
{
    if (L->length>=MAXSIZE) std::cout << "This list is full!" << std::endl;
    else
    {
        if (position>L->length || position < 1) std::cout << "the position is wrong." << std::endl;
        else
        {
            for (int i=L->length-1; i>=position-1; i--)
                L->data[i+1]=L->data[i];
            L->data[position-1] = e;
            L->length++;
        }
    }
}
// 删除元素
void deleteElem(SeqList *L, int pos)
{
    if (pos < L->length){
        for (int i=pos; i<L->length; i++)
        {
            L->data[i-1]=L->data[i];
        }
    L->length--;
    }
}
// 查找元素
int findElem(SeqList *L, ElemType e)
{
    for (int i=0; i<L->length; i++)
    {
        if (L->data[i]==e)
        return i+1;
    }
}

int main()
{
    SeqList *L = new SeqList;
    initList(L);
    appendElem(L, 1);
    appendElem(L, 2);
    appendElem(L, 3);
    appendElem(L, 5);
    insertElem(L, 2, 4);
    listElem(L);
    deleteElem(L, 2);
    listElem(L);
    std::cout << findElem(L, 3) << std::endl;
    return 0;
}

/*
    犯错记录~_~
    - for循环中int i*=0* 要初始化
    - L->data*[i]* 这个是个数组要有index
    - 创建顺序表要从堆上分配内存
        SeqList *L = new SeqList;
    - 要从L->length-1开始往前移，下标从0计数
*/