
#include <stdio.h>
void print_subarray( int *v, int e, int d)
{
    int i;
    for(i = 0; i <= d; i++)
        printf("%d ", v[i]);
}

static int BuscaBinariaR(int *v, int e, int d, int x)
{
    if(e <= d)
    {
        int m = (e+d)/2;
        if(x == v[m])
        return m;    
        if(x < v[m])
            return BuscaBinariaR(v, e, m-1, x);
        return BuscaBinariaR(v, m+1, d, x);
    }
    return -1;
}

int BuscaBinaria(int *v, int n, int x)
{
    return BuscaBinariaR(v, 0, n-1, x);

}