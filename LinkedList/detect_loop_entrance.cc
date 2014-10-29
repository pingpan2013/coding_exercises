/*
 * =====================================================================================
 *    Description:  Given a linked list, return the node where the cycle begins.
 *                  return nullptr if there is no cycle.
 *                  Can u solve this without using any extra space?
 *
 *        Created:  09/20/2014 05:36:08 PM
 *       Compiler:  g++ 4.7.0
 * =====================================================================================
 */


#include "linklist.h"
#include <iostream>

using namespace std;

class Solution{
public:    
    bool isExistCycle(node* root){
        // detect if there is a cycle
        if(!root)   return false;
        node* slow_ptr = root;
        node* fast_ptr = root;

        while(slow_ptr && fast_ptr){
            if(slow_ptr == fast_ptr)
                return true;
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;
        }
        
        if(slow_ptr != fast_ptr)  return false;
        
        // determine the entrance of loop
        fast_ptr = root;
        while(fast_ptr != slow_ptr){
            fast_ptr = fast_ptr->next;
            slow_ptr = slow_ptr->next;
        }
        return slow_ptr;
    }
};



