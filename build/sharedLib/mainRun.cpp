#include <dlfcn.h>
#include <iostream>
int main()
{
	void * handle = dlopen("./libfoo.so", RTLD_LAZY);
	if(!handle)
	{
		std::cout << "No library" << std::endl;
		return 1;
	}

	void (*fooPtr)();
	fooPtr = (void(*)())dlsym(handle,"_Z3foov");
	const char* dlsym_error = dlerror();
	if(dlsym_error)
	{
		std::cout << "No symbol" << std::endl;
		return 1;
	}

	(*fooPtr)();
	dlclose(handle);
	return 0;

}