#include "pr.h"
extern int N;
float func(Journal *J) {
	int k = 0;
	float average = 0;
	for (int i = 0; i < N; i++)
		if (J[i].val > 1000)
		{
			average += J[i].price;
			k++;
		}
	if (k)
		return average / k;
	return 0;
}