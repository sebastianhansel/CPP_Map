#include "pch.h"
#include <map>
#include <iostream>

int main()
{
	std::map<int, int> simplemap;

	// add
	simplemap[-1] = 0;
	simplemap[0] = 2;
	simplemap[1] = 4;
	simplemap[3] = 6;
	simplemap[5] = 8;
	simplemap[7] = 1;
	simplemap.insert(std::pair<int, int>(6, 0));
	simplemap.insert(std::pair<int, int>(4, 0));

	// list
	for (std::map<int, int>::iterator it = simplemap.begin(); it != simplemap.end(); it++)
		std::cout << it->first << " - " << it->second << "\n";
	// size
	std::cout << "Size: " << simplemap.size() << "\n\n";

	// find
	std::map<int, int>::iterator it2 = simplemap.find(0);
	std::cout << "Found: " << it2->first << " - " << it2->second << "\n\n";
	
	// erase
	std::cout << "Erase: " << it2->first << " - " << it2->second << "\n\n";
	simplemap.erase(0);


	// list
	for (std::map<int, int>::iterator it = simplemap.begin(); it != simplemap.end(); it++)
		std::cout << it->first << " - " << it->second << "\n";
	// size
	std::cout << "Size: " << simplemap.size() << "\n\n";

	std::cin.get();
	return 0;
}