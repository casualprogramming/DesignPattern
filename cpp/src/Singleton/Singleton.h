#pragma once
#include <iostream>

template <typename T>
class Singleton
{
protected:
	static T* _instance;
	Singleton() {}
	virtual ~Singleton() { DestroyInstance(); }
	inline static T* BasicGetInstance()
	{
		if (!_instance)
		{
			_instance = new T();
			printf("%s created [singleton]\n", typeid(T).name());
		}
		return _instance;
	}
public:
	static T* GetInstance() {
		return BasicGetInstance();
	};
	//easy to use
	static T* I() {
		return BasicGetInstance();
	};
	static void DestroyInstance() {
		if (_instance)
		{
			delete _instance;
			_instance = nullptr;
		}
	}
};

template <typename T> T* Singleton<T>::_instance = nullptr;
