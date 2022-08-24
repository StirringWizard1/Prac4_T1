#include <iostream>
#include "EfficientTruckloads.h"

std::vector<std::vector<int>> EfficientTruckloads::stored (1000,std::vector<int>(1000,0));

EfficientTruckloads::EfficientTruckloads()
{}

int EfficientTruckloads::numTrucks(int numcrates, int loadsize)
{
	if (stored.at(numcrates).at(loadsize)!=0)

}