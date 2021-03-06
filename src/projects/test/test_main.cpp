//===========================================================================
//===========================================================================
#include "stdafx.h"
#include "Direct_Access_Image.h"
#include "constants.h"
#include "Test.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>

//===========================================================================
//===========================================================================

using namespace std;

//===========================================================================
//===========================================================================
int _tmain(int argc, _TCHAR* argv[])
{
	// Verify command-line usage correctness

	Test *T = new Test(argv[1]);
	// T->runOCR(ORIGNIAL_IMG);
	T->runOCR(BAM_IMG);
	T->computeScore();

	// Return with success
	return VBAM_EXIT::SUCCESS;
}
//===========================================================================
//===========================================================================
