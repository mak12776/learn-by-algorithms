
#include <iostream>
#include <cstdint>
#include <cmath>

using namespace std;

int main()
{
	uint32_t num;

	uint32_t array_size;
	uint32_t *array;
	

	cout << "enter a number: ";
	cin >> num;

	array_size = (size_t)log10(num) + 1;
	array = new uint32_t[array_size];

	uint32_t index = array_size - 1;
	while (num > 0)
	{
		array[index] = num % 10;
		num /= 10;

		index -= 1;
	}

	for (index = 0; index < array_size; index += 1)
	{
		cout << array[index];
	}
	
	cout << endl;
}