#include <string>
using namespace std;

struct Player
{
	string name;
	float health;
	double armorFactor;
	int maxNumWeapons;
	int maxNumSpells;
};

void Init(Player& temp1)
{
	temp1.name = "Joe";
	temp1.health = 100.0f;
	temp1.armorFactor = 0.5;
	temp1.maxNumWeapons = 10;
	temp1.maxNumSpells = 5;
}

static const int SizeArray = 5;

bool Init(int parameter[], int sizeOfArray)
{
	if (sizeOfArray <= 0 || sizeOfArray > SizeArray )
	{
		return false;
	}

	for (int i = 0; i < sizeOfArray; ++i)
	{
		parameter[i] = 1;
	}

	return true;
}

bool Divide10ByValueAndIncrease(int& temp1, int& result)
{
	if ( temp1 != 0 )
	{
		result = 10 / temp1;
		++temp1;

		return true;
	}

	return false;
}
int MultiplyBy10AndIncrease(int& temp1)
{
	int result = temp1;
	result *= 10;

	++temp1;

	return result;
}

int main()
{
	int myArray[SizeArray];
	Init(myArray, -1);

	Player myPlayer;
	Init(myPlayer);
	
	int myNumber = 7;
	int myResult;
	bool myResult2;
	int divisionResult;
	int factor = 0;

	myResult = MultiplyBy10AndIncrease(myNumber);
	myResult2 = Divide10ByValueAndIncrease(factor, divisionResult);
	return 0;
}