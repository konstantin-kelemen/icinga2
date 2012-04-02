#ifndef MEMORY_H
#define MEMORY_H

namespace icinga
{

using std::exception;

class OutOfMemoryException : public exception { };

class Memory
{
private:
	Memory(void) { }

public:
	static void *Allocate(size_t size);
	static void *Reallocate(void *ptr, size_t size);
	static void Free(void *ptr);
};

}

#endif /* MEMORY_H */
