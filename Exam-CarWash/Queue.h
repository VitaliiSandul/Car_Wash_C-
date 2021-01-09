#pragma once

template <class T>
class Queue
{
	T *arr;
	int size;
	int capacity;
public:
	Queue()
	{
		size = 0;
		capacity = 100;
		arr = new T[capacity]{};
	}

	Queue(int c)
	{
		size = 0;
		capacity = c;
		arr = new T[capacity]{};
	}

	Queue(const Queue &obj)
	{
		size = obj.size;
		capacity = obj.capacity;

		arr = new T[capacity]{};
		for (int i = 0; i < size; ++i)
		{
			arr[i] = obj.arr[i];
		}
	}

	Queue(Queue &&obj)
	{
		size = obj.size;
		capacity = obj.capacity;
		arr = obj.arr;

		obj.capacity = 0;
		obj.arr = nullptr;
	}

	~Queue()
	{
		if (capacity)
			delete[] arr;
	}

	Queue &operator = (const Queue &obj)
	{
		if (this == &obj)
			return *this;

		if (capacity)
			delete[] arr;

		size = obj.size;
		capacity = obj.capacity;
		arr = new T[capacity]{};
		for (int i = 0; i < size; ++i)
		{
			arr[i] = obj.arr[i];
		}

		return *this;
	}

	Queue &operator = (Queue &&obj)
	{
		if (this == &obj)
			return *this;
		if (capacity)
			delete[] arr;

		size = obj.size;
		capacity = obj.capacity;
		arr = obj.arr;
		obj.capacity = 0;
		obj.arr = nullptr;

		return *this;
	}

	bool is_empty()
	{
		return size == 0;
	}

	bool is_full()
	{
		return size == capacity;
	}

	void push(T val)
	{
		arr[size++] = val;
	}

	T pop()
	{
		T tmp = arr[0];

		for (int i = 1; i < size; ++i)
		{
			arr[i - 1] = arr[i];
		}
		size--;

		return tmp;
	}

	T peek()
	{
		return arr[0];
	}

	int getSize()const
	{
		return size;
	}

	T getItem(int pos)const
	{
		return arr[pos];
	}
};