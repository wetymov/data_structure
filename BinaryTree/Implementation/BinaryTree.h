#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Branch
{
	int Data;
	Branch* LeftBranch;
	Branch* RightBranch;
};


void Add(int aData, Branch*& aBranch)
{
	if (!aBranch)
	{
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;

		return;

	}
	else {
		if (aBranch->Data > aData)
		{
			Add(aData, aBranch->LeftBranch);
		}
		else
		{
			Add(aData, aBranch->RightBranch);
		};
	}
}


vector<int> inorder(Branch*& root)
{
    Branch *current, *pre;
    vector<int> result;
    if (root == NULL)
        return result;
 
    current = root;
    while (current != NULL) {
 
        if (current->LeftBranch == NULL) {
            result.push_back(current->Data);
            current = current->RightBranch;
        }
        else {

            pre = current->LeftBranch;
            while (pre->RightBranch != NULL
                   && pre->RightBranch != current)
                pre = pre->RightBranch;

            if (pre->RightBranch == NULL) {
                pre->RightBranch = current;
                current = current->LeftBranch;
            }

            else {
                pre->RightBranch = NULL;
                result.push_back(current->Data);
                current = current->RightBranch;
            }
        }
    }
    return result;
}

void FreeTree(Branch* aBranch)
{
	if (!aBranch) return;
	FreeTree(aBranch->LeftBranch);
	FreeTree(aBranch->RightBranch);
	delete aBranch;
	return;
}

Branch* remove(Branch*& aBranch, int aData) {
	if (aBranch == NULL)
		return aBranch;
	if (aData == aBranch->Data) {
		Branch* tmp;
		if (aBranch->RightBranch == NULL)
			tmp = aBranch->LeftBranch;
		else {
			Branch* ptr = aBranch->RightBranch;
			if (ptr->LeftBranch == NULL) {
				ptr->LeftBranch = aBranch->LeftBranch;
				tmp = ptr;
			}
			else {
				Branch* pmin = ptr->LeftBranch;
				while (pmin->LeftBranch != NULL) {
					ptr = pmin;
					pmin = ptr->LeftBranch;
				}
				ptr->LeftBranch = pmin->RightBranch;
				pmin->LeftBranch = aBranch->LeftBranch;
				pmin->RightBranch = aBranch->RightBranch;
				tmp = pmin;
			}
		}
		delete aBranch;
		return tmp;
	}
	else if (aData < aBranch->Data)
		aBranch->LeftBranch = remove(aBranch->LeftBranch, aData);
	else
		aBranch->RightBranch = remove(aBranch->RightBranch, aData);
	return aBranch;
}