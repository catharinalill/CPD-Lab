

#include "omp-1.h"

int main(int argc, char *argv[]) {
2.
3. int i, tid;
4.
5. #pragma omp parallel private(i,tid)
6. {
7. tid = omp_get_thread_num();
8.
9. #pragma omp for
10. for(i = 0; i < NUMITER; i++)
11. printf("Thread: %d\titer=%d\n", tid, i); fflush(stdout);
12.
13. printf("Thread %d, almost...\n", tid); fflush(stdout);
14. printf("Thread %d, done!\n", tid); fflush(stdout);
15. }
16.
17. printf("All threads have finished!\n");
18. }
