#ifndef ARRAY_H
#define ARRAAY_H
#include <iostream>
#include<stdlib.h>
#ifndef NULL
const int NULL = 0;
#endif 

enum ErrorType
{
	invalidArraySize, memoryAllocationError,indexOutOfRange
};
char *errorMsg[] =
{ "Invalid array size","Memory allocation error","Invalid index:" 
};
template <class T>
class Array
{
private:
	T* alist;
	int size;
	void Error(ErrorType error, int badIndex = 0) const;
public:
	Array(int sz = 50);
	Array(const Array<T>&A);
	~Array(void);
	Array<T>&operator=(const Array<T>&rhs);
	T&operator[](int i);
	operator T*(void) const;
	int ListSize(void) const;
	void Resize(int sz);
};
	template<class T>
	void Array <T>::Error(ErrorType error, int badIndex) const
	{
		cout << errorMsg[error];
		if (error == indexOutOfRange)
			cout << badIndex;
		cout << endl;
		exit(1);
	}
	template<class T>
	Array<T>::Array(int sz)
	{
		if (sz <= 0)
			Error(invalidArraySize);
		size = sz;
		alist = new T[size];
		if (alist == NULL)
			Error(memoryAllocationError);
	}
	template<class T>
	Array<T>::~Array(void)
	{
		delete[] alist;
	}
	template<class T>
	Array<T>::Array(const Array<T>&X)
	{
		int n = X.size;
		size = n;
		alist = new T[n];
		if (alist == NULL)
			Error[memoryAllocationError]
			T*srcptr = X.alist;
		T*destptr = alist;
		while (n--)
			*destptr++ = *srcptr++;
	}
	template <class T>
	Array<T>&Array<T>::operator=(const Array<T>& rhs)
	{
		int n = rhs.size;
		if (size != n)
		{
			delete[]list;
			alist = newT[n];
			if (alist == NULL)
				Error(memoryAllocationError);
			size = n;
		}
		T*destptr = alist;
		T*srcptr = rhs.alist;
		while (n--)
			*destptr++ = *srcptr++;
		return *this;
	}
	template<class T>
	T&Array<T>::operator[](int n)
	{
		if (n<0 || n>size - 1)
			Error(indexOutOfRange, n);
		return alist[n];
	}
	template<class T>
	Array<T>::operator T*(void) const
	{
		return alist;
	}
	template<class T>
	int Array<T>::ListSize(void) const
	{
		return size;
	}

	template <class T>
	void Array<T>::Resize(int sz)
	{
		if (sz <= 0)
			Error(invalidArraySize);
		if (sz == size)
			return;
		T* newlist = new T[sz];
		if (newlist == NULL)
			Error(memoryAllocationError);
		int n = (sz <= size) ? sz : size;
		T* srcptr = alist;
		T* destptr = newlist;
		while (n--)
			*destptr++ = *srcptr--;
		delete[] alist;
		alist = newlist;
		size = sz;
	}
#endif
#include<iostream>
	using namespace std;

	void main()
	{
		int n;
		double AverScore, TotalScore = 0;
		cout << "请输入学生人数：";
		cin >> n;
		Array<float> Score(n);
		for (int i = 0; i < n; i++)
		{
			cout << "请输入第" << i + 1 << "个学生的课程A成绩（0~100）：";
			cin >> Score[i];
			TotalScore += Score[i];
		}
		AverScore = TotalScore / n;
		cout << "平均成绩为" << AverScore << endl;
	}



