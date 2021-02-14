#ifndef  SORTFUNC_H_INCLUDED
#define  SORTFUNC_H_INCLUDED
#include  "SwapFT.h"

// bubble sort algorithm
template <typename T> void sortFT(T arr[], int size)
{
	bool	doAgain = true;
	for (int i = 1; doAgain ; i++) {
		doAgain = false;
		for (int j = 0; j < size - i; j++)
			if (arr[j] > arr[j + 1])
				swapFT(arr[j], arr[j + 1]), doAgain = true;
	}
}
#endif  // SORTFUNC_H_INCLUDED