#include <stdio.h>
#include <time.h>
double compute_pi(size_t dt)
{
	size_t i;
	double pi = 0.0;
	double delta = 1.0 / dt;
	for (i = 0; i < dt; i++) {
		double x = (double) i / dt;
		pi += delta / (1.0 + x * x);
	}
	return pi * 4.0;
}

int main(){
	clock_t begin = clock();
	double result = compute_pi(128*1000000);
	clock_t end = clock();
	double time = (double)(end-begin)/CLOCKS_PER_SEC;

	printf("baseline_pi = %.10f\n",result);
	printf("baseline_pi time = %f seconds\n",time);

	return 0;
}
