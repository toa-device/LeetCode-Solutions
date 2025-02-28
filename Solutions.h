/*
    Author : Vinh Nguyen
    Date   : February 19, 2025

    This file will include all necessary headers and/or libraries
    to go along with the various LeetCode solutions.
*/

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};