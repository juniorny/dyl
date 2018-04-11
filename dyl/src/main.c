#include "head.h"

int main(int argc, char **argv)
{

	void *handle = dlopen(argv[1], RTLD_NOW);
	void (*p1)(void) = dlsym(handle, "have_meal");
	void (*p2)(void) = dlsym(handle, "hair_cut");
	void (*p3)(void) = dlsym(handle, "one_more");

	if (p1 != NULL)
		p1();
	if (p2 != NULL)
		p2();
	if (p3 != NULL)
		p3();

	return 0;
}

