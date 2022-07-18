// https://leetcode.com/problems/spiral-matrix/

#include<iostream>
#include"../inc/solution.h"


void PrintVec(std::vector<int> vec)
{
	for(int i : vec){ std::cout << i << ' ';}
}

int main()
{
	//std::vector<std::vector<int>> matrix{{1,2},{3,4}};
	std::vector<std::vector<int>> matrix{{1,2,3},{4,5,6},{7,8,9}};
	//std::vector<std::vector<int>> matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

	Solution sol{};
	PrintVec(sol.spiralOrder(matrix));
	return 0;
}

