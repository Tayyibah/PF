#ifndef SINGLETON_H
#define SINGLETON_H
class Singleton
{
private:
	Singleton()
	{};
	~Singleton()
	{}
	static Singleton * ptr;
public:
	static Singleton * CreateObject();
	static void freeObject();
};
#endif