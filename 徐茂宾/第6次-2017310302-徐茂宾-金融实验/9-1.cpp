#include "pch.h"
#include<iostream>
#include<cassert>
using namespace std;

#ifndef ARRAY_CLASS
#define ARRAY_CLASS

//数组类模板
template <class T>
class Array {
private:
	T* alist; //T 类型指针，用于存放动态分配的数组内存首地址
	int size; //数组大小（元素个数）
public:
	Array(int sz = 50); //构造函数
	Array(const Array<T>& A); //拷贝构造函数
	~Array(void); //析构函数
	//重载"="使数组对象可以整体赋值
	Array<T>& operator= (const Array<T>& rhs);
	//重载"[]"与 T*，使Array 对象可以起到C++普通数组的作用
	T & operator[](int i);
	operator T* (void) const;
	int ListSize(void) const; //  取数组的大小
	void Resize(int  sz); //  修改数组的大小
};

//以下为类成员函数的实现

//  构造函数
template <class T> Array<T>::Array(int sz) {
	assert(sz >= 0);
	size = sz; //  将元素个数赋值给变量
	alist = new T[size]; //动态分配 size 个T 类型的元素空间
} 

//  析构函数
template <class T> Array<T>::~Array(void) {
	delete[] alist;    
}

//  拷贝构造函数
template <class T> Array<T>::Array(const Array<T>& X) {
	//从对象X取得数组大小，并赋值给当前对象的成员
	int n = X.size;
	size = n; //为对象申请内存并进行出错检查
	alist = new T[n]; //  动态分配 n 个T 类型的元素空间 
	T* srcptr = X.alist; // X.alist 是对象 X 的数组首地址
	T* destptr = alist; // alist 是本对象中的数组首地址
	while (n--) //  逐个复制数组元素
		*destptr++ = *srcptr++;
}

//  重载"="运算符，将对象rhs赋值给本对象。实现对象之间的整体赋值
template <class T>
Array<T>& Array<T>::operator = (const Array<T>& rhs) {
	int n = rhs.size; //  取 rhs 的数组大小
	//如果本对象中数组大小与rhs不同，则删除数组原有内存，然后重新分配
	if (size != n) {
		delete[] alist; //  删除数组原有内存
		alist = new T[n]; //  重新分配 n 个元素的内存
		size = n; //记录本对象的数组大小  
		//  从 rhs 向本对象复制元素
		T* destptr = alist;
		T* srcptr = rhs.alist;
		while (n--)
			*destptr++ = *srcptr++; //  返回指向本对象的指针
		return *this;
	}
}

	//  重载下标操作符，实现与普通数组一样通过下标访问元素
	template <class T>
	T& Array<T>::operator[] (int n)
	{   
		return alist[n];
	}

	//重载指针转换操作符，使指向T类对象的指针成为当前对象中私有数组的首地址。
	//因而可以象使用普通数组首地址一样使用T类型指针
	template <class T>
	Array<T>::operator T* (void) const { //  返回当前对象中私有数组的首地址
		return alist;
	} 

//取当前数组的大小
	template <class T>
	int Array<T>::ListSize(void) const {
		return size;
	}

    //  将数组大小修改为sz
	template <class T>
	void Array<T>::Resize(int sz) { 
		if (sz == size) return; //  申请新的数组内存，并测试是否申请成功
		T* newlist = new T[sz];
		int n = (sz <= size) ? sz : size; //  将原有数组中前n个元素复制到新数组中
		T* srcptr = alist; //  原数组 alist 的首地址
		T* destptr = newlist; //  新数组 newlist 的首地址
		while (n--) //  复制数组元素
			*destptr++ = *srcptr++; //  删除原数组
		delete[] alist; //  使 alist  指向新数组，并更新size
		alist = newlist;
		size = sz;
	}

#endif

int main() {
	int n;
	double AverScore, TotalScore = 0;
	cout << "请输入课程A学生人数：";
	cin >> n;
	Array<float> Score(n);
	for (int i = 0; i < n; i++) {
		cout << "请输入第" << i + 1 << "个学生的课程 A 成绩(0~100)：";
		cin >> Score[i];
		TotalScore += Score[i];
	}
	AverScore = TotalScore / n;
	cout << "平均成绩为：" << AverScore << endl;
	return 0;
}
