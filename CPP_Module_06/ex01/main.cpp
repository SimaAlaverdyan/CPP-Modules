#include "Data.hpp"
#include <cstdint>
#include <iostream>

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

int	main()
{
	Data	hello;

	uintptr_t	hello_serialized = serialize(&hello);
	Data		*hello_addr = deserialize(hello_serialized);

	std::cout << "test passed? " << (hello_addr == &hello ? "yes" : "no") << std::endl;
}