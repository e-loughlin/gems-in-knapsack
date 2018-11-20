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

using namespace std;

class knapsack
{
private:
	int volumeCapacity;
	int weightCapacity;
	int totalValueOfGems;
	int totalWeight;
	int totalVolumeRemaining;
	vector<int> gems;

public:
	int volumeCapacity()
	{
		return this.volumeCapacity;
	}

	int weightCapacity()
	{
		return this.weightCapacity;
	}

	int setVolumeCapacity(capacity)
	{
		this.volumeCapacity = capacity;
	}

	int weightCapacity(capacity)
	{
		this.weightCapacity = capacity;
	}

	int totalValueOfGems()
	{
		return totalValueOfGems;
	}

	int totalWeight()
	{
		return totalWeight;
	}

	int totalVolumeRemaining()
	{
		return totalVolumeRemaining;
	}

}

class gem
{
private:
	int value;
	int weight;

public:
	int getValue()
	{
		return this.value;
	}

	int getWeight()
	{
		return this.weight;
	}
}

class hiddenTreasure
{
private:
	vector<gem> gems;
	int valueLowerBound;
	int valueUpperBound;
	int numberOfGems;

public:
	void setNumberOfGems(int amount)
	{
		this.numberOfGems = amount;
	}

	void setValueLowerBound(int lowerBound)
	{
		this.valueLowerBound = lowerBound;
	}

	void setValueUpperBound(int upperBound)
	{
		this.valueUpperBound = upperBound;
	}
}