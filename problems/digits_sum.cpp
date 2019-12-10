

#include <iostream>
#include <cstdint>

using namespace std;

uint32_t digits_sum(uint32_t num)
{
	uint32_t sum = 0;

	while (num > 0)
	{
		sum += (num % 10);
		num /= 10;
	}

	return sum;
}

int main()
{
	uint32_t num;
	uint32_t sum;

	cout << "enter a number: ";
	cin >> num;

	sum = digits_sum(num);

	cout << "sum of digits: " << sum << endl;
	return 0;
}
