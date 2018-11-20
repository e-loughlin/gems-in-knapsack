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
	int totalValueOfGems_;
	int totalWeight_;
	int totalVolumeRemaining_;
	vector<int> gems;

public:

	int totalValueOfGems()
	{
		return totalValueOfGems_;
	}

	int totalWeight()
	{
		return totalWeight_;
	}

	int totalVolumeRemaining()
	{
		return totalVolumeRemaining_;
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
		cout << "All The Gems In The Hidden Treasure:\n\nValue\tWeight\n";
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
			int currentGemWeight = rand() % (weightUpperBound - weightLowerBound) + weightLowerBound;
			gems.push_back(gem(currentGemValue, currentGemWeight));
		}
	}
};

bool mutate(knapsack* currentKnapsack)
{
	srand(time(NULL));
}

bool crossover(knapsack* firstKnapsack, knapsack* secondKnapsack)
{

}

int main()
{
	hiddenTreasure ht = hiddenTreasure(20, 100, 5, 30, 50);
	ht.printGemCacheData();
}