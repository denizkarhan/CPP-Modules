#include <iostream>
#include <stdint.h>

typedef struct sData{
	int X;
	int Y;
}Data;

uintptr_t	serialize(Data *ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

int main(void){
	Data data = {0, 1};

	// Test 1 (Serialize)
	std::cout << serialize(&data) << "	: " << &data <<std::endl;
	
	// Test 2 (Deserialize)
	Data *ptr = deserialize(serialize(&data));
	std::cout << ptr << "	: " << &data << std::endl;
	
	// Test 3 (data after serialize and deserialize)
	std::cout << std::endl << (ptr == &data ? "The same pointer"	: "pointers are differ") << std::endl;
	std::cout << "data (x) : " << (&data)->X << "	ptr (x) : " << ptr->X << std::endl;
	std::cout << "data (y) : " << (&data)->Y << "	ptr (y) : " << ptr->Y << std::endl;
}
