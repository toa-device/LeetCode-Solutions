/*
    Author : Vinh Nguyen
    Date   : February 19, 2025
    LeetCode solutions will be done and tested on LeetCode first,
    before copying them over to this file to transfer to my GitHub.
*/

#include "Solutions.h"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
    Problem #1 - Two Sum
    --------------------
    Given an array of integers "nums" and an integer "target", return indices of the two numbers such that they add up to target.

    You may assume that each input would have exactly one solution, and you may not use the same element twice.

    You can return the answer in any order.
*/
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> result;
    bool bTargetFound = false;
    for (int i = 0; i < nums.size() - 1; ++i)
    {
        for (int j = 1; j < nums.size(); ++j)
        {
            if ( (i != j) && (nums[i] + nums[j]) == target )
            {
                result.push_back(i);
                result.push_back(j);
                bTargetFound = true;
                break;
            }
        }
        if (bTargetFound) break;
    }
    return result;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
    Problem #2 - Add Two Numbers
    ----------------------------
    You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order,
    and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

    You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/
