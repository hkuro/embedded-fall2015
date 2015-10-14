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

int main(int argc, char* argv[])
{
    int N = atoi(argv[1]);
    clock_t begin = clock();
    double result = compute_pi(N*1024*1024);
    clock_t end = clock();
    double time = (double)(end-begin)/CLOCKS_PER_SEC;

    printf("%lf \n",time);

    return 0;
}
