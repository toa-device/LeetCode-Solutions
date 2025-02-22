/*
    Author : Vinh Nguyen
    Date   : February 19, 2025
    LeetCode solutions will be done and tested on LeetCode first,
    before copying them over to this file to transfer to my GitHub.
*/

#include "Solutions.h"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
    Problem #1 - Two Sum (Easy)
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
    Problem #2 - Add Two Numbers (Medium)
    ----------------------------
    You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order,
    and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

    You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
    Problem #383 - Ransom Note (Easy)
    --------------------------
    Given two strings "ransomNote" and "magazine", return true if "ransomNote" can be constructed by using the letters from "magazine"
    and false otherwise.

    Each letter in "magazine" can only be used once in "ransomNote".
*/
bool canConstruct(std::string ransomNote, std::string magazine) {
    if (magazine.find(ransomNote) != std::string::npos) return true;
    else
    {
        std::string temp = ransomNote;
        auto magIter = magazine.begin();
        while (magIter != magazine.end())
        {
            int iIndex = temp.find(*magIter);
            if (iIndex != std::string::npos) temp.erase(iIndex, 1); 
            magIter++;
        }
        return (temp.size() == 0) ? true : false;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
    Problem #412 - Fizz Buzz (Easy)
    ------------------------
    Given an integer n, return a string array answer (1-indexed) where:

    - answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
    - answer[i] == "Fizz" if i is divisible by 3.
    - answer[i] == "Buzz" if i is divisible by 5.
    - answer[i] == i (as a string) if none of the above conditions are true.
*/
std::vector<std::string> fizzBuzz(int n) {
    std::vector<std::string> result;
    for (int i = 1; i <= n; ++i)
    {
        if ( (i % 3 == 0) && (i % 5 == 0) )
            result.push_back("FizzBuzz");
        else if (i % 3 == 0)
            result.push_back("Fizz");
        else if (i % 5 == 0)
            result.push_back("Buzz");
        else
            result.push_back(std::to_string(i));
    }
    return result;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
    Problem #876 - Middle of the Linked List (Easy)
    ----------------------------------------
    Given the "head" of a singly linked list, return the middle node of the linked list.

    If there are two middle nodes, return the second middle node.
*/
ListNode* middleNode(ListNode* head) {
    ListNode* lnCurrent = head;
    
    int iNodeCount = 0;
    while (lnCurrent != nullptr)
    {
        iNodeCount++;
        lnCurrent = lnCurrent->next;
    }
    lnCurrent = head;

    for (int i = 0; i < (iNodeCount / 2); ++i)
        lnCurrent = lnCurrent->next;

    return lnCurrent;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
    Problem #1342 - Number of Steps to Reduce a Number to Zero (Easy)
    ----------------------------------------------------------
    Given an integer "num", return the number of steps to reduce it to zero.

    In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
*/
int numberOfSteps(int num) {
    int iSteps = 0, iTemp = num;
    while (iTemp != 0)
    {
        if (iTemp % 2 == 0) iTemp /= 2;
        else iTemp -= 1;
        iSteps++;
    }
    return iSteps;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
    Problem #1480 - Running Sum of 1D Array (Easy)
    ---------------------------------------
    Given an array nums. We define a running sum of an array as "runningSum[i] = sum(nums[0]…nums[i])".

    Return the running sum of nums.
*/
std::vector<int> runningSum(std::vector<int>& nums) {
    std::vector<int> result;
    result.push_back(nums[0]);
    for (int i = 1; i < nums.size(); ++i)
        result.push_back(result[i - 1] + nums[i]);

    return result;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
    Problem #1672 - Richest Customer Wealth (Easy)
    ---------------------------------------
    You are given an m x n integer grid accounts where "accounts[i][j]" is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank.
    
    Return the wealth that the richest customer has.

    A customer's wealth is the amount of money they have in all their bank accounts. 
    
    The richest customer is the customer that has the maximum wealth.
*/
int maximumWealth(std::vector<std::vector<int>>& accounts) {
    int iMaxWealth = 0;
    for (int i = 0; i < accounts.size(); ++i)
    {
        int iTemp = 0;
        for (int j = 0; j < accounts[i].size(); ++j)
        {
            iTemp += accounts[i][j];
        }
        if (iTemp >= iMaxWealth) iMaxWealth = iTemp;
    }
    return iMaxWealth;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
    Problem #2235 - Add Two Integers (Easy)
    --------------------------------
    Given two integers "num1" and "num2", return the sum of the two integers.
*/
int sum(int num1, int num2) {
    return (num1 + num2);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~