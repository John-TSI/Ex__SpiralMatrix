#include"../inc/solution.h"


std::vector<int> Solution::spiralOrder(std::vector<std::vector<int>>& matrix)
{
    int StartRow{0}, EndRow = matrix.size(), StartCol{0}, EndCol = matrix[0].size();
    std::vector<int> nums{};

    while(nums.size() < EndRow*EndCol)
    {
        // move right
        for(int c{StartCol}; c < EndCol; ++c){ nums.push_back(matrix[StartRow][c]); }
        ++StartRow;

        // move down
        for(int r{StartRow}; r < EndRow; ++r){ nums.push_back(matrix[r][EndCol-1]); }
        --EndCol;

        // move left
        for(int c{EndCol-1}; c > StartCol-1; --c){ nums.push_back(matrix[EndRow-1][c]); }
        --EndRow;

        // move up
        for(int r{EndRow-1}; r > StartRow-1; --r){ nums.push_back(matrix[r][StartCol]); }
        ++StartCol;
    }
    return nums;
}