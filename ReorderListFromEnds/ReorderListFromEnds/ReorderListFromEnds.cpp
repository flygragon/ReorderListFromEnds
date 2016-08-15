// ReorderListFromEnds.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"ListNodeInput.h"
#include"ListNodeOutput.h"
#include"ReorderListFromEnds.h"
using namespace std;

int main()
{
	SingleListInput SLIP;
	ListNode* p = SLIP.Input();
	ReorderListFromEnds ROL;
	ROL.reorderList(p);
	ListNodeOutput LNOP;
	LNOP.ListOutput(p);
    return 0;
}

