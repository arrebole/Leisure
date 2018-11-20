#include <stdio.h>
#include <stdlib.h>

void merge(int A[],int p,int q,int r);

int main()
{
    int A[200];
    int m, q, i;
    scanf("%d %d", &m, &q);
    for(i = 1; i <= m; i++)
        scanf("%d",&A[i]);
    merge(A , 1, q, m);
    for(i = 1; i <= m; i++)
        printf("%d\n",A[i]);
}

void merge(int A[],int p,int q,int r)
{
    int *left= new int[q];
    int *right = new int[r-q];
    int i = 0, j = 0, k = 0;
    for(int k = 1; k <= q; k++)
    {
        left[i++] = A[k];
    }
    for(int k = q+1; k <= r; k++)
    {
        right[j++] = A[k];
    }
    i=0,j=0;
    for (k = p; k <= r; k++)
    {
        // 当一个数组归并完毕
        if (i > q)
            A[k] = right[j++];
        else if (j > r)
            A[k] = left[i++];
        // 将小的先归并
        else if (right[j] < left[i])
            A[k] = right[j++];
        else
            A[k] = left[i++];
    }
    delete[] right;
    delete[] left;
}