/* Evolutionary Algorithm - Gems in a Knapsack

   _____ ____ _____
  /    /      \    \
/____ /_________\____\
\    \          /    /
   \  \        /  /
      \ \    / /
        \ \/ /
          \/


 This program is a simple demonstration of an evolutionary algorithm. 
 
 You have just discovered a hidden cave filled with an enormous cache
 of gems and jewels. Each gem has a value, a weight, and a volume. You only have
 one opportunity to fill it up with any assortment of gems, and you've brought
 with you a knapsack. The knapsack has a volume capacity, and a limit 
 capacity.

 Your job is to maximize the value of the gems in your knapsack!
*/

#include <iostream>
#include <math.h>
#include <vector>
#include <random>
#include <time.h>

using namespace std;

class knapsack
{
private:
	int volumeCapacity_;
	int weightCapacity_;
	int totalValueOfGems;
	int totalWeight;
	int totalVolumeRemaining;
	vector<int> gems;

public:

	int getTotalValueOfGems()
	{
		return totalValueOfGems;
	}

	int getTotalWeight()
	{
		return totalWeight;
	}

	int getTotalVolumeRemaining()
	{
		return totalVolumeRemaining;
	}

	knapsack(int volumeCapacity,
			 int weightCapacity)
	{
		volumeCapacity_ = volumeCapacity;
		weightCapacity_ = weightCapacity;
	}

};

class gem
{
private:
	int value;
	int weight;

public:
	int getValue()
	{
		return value;
	}

	int getWeight()
	{
		return weight;
	}

	gem(int gemValue, int gemWeight)
	{
		value = gemValue;
		weight = gemWeight;
	}
};

class hiddenTreasure
{
private:
	vector<gem> gems;

public:

	void printGemCacheData()
	{
		cout << "Gem Data:\n\nValue\tWeight";
		for(int i = 0; i < gems.size(); i++)
		{
			cout << gems[i].getValue() << "\t" << gems[i].getWeight() << endl;
		}
	}


	hiddenTreasure(int valueLowerBound,
				   int valueUpperBound,
				   int weightLowerBound,
				   int weightUpperBound,
				   int numberOfGems)
	{

		srand(time(NULL));

		for(int i = 0; i < numberOfGems; i++)
		{
			int currentGemValue = rand() % (valueUpperBound - valueLowerBound) + valueLowerBound;
			int currentGemWeight = rand() % (valueUpperBound - valueLowerBound) + valueLowerBound;

		}
	}
};

int main()
{
	
}