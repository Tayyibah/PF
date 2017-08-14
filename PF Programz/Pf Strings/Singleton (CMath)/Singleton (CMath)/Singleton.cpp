#include"Singleton.h"
Singleton * Singleton::ptr=0;
Singleton * Singleton::CreateObject()
{
	if (!ptr)
	ptr = new Singleton;
	return ptr;
}
void Singleton::freeObject()
{
	if (ptr)
	{
		delete ptr;
		ptr=0;
	}
}