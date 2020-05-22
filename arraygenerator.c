
int arraygenerator(int n)
{
    int i;
    int *a=(int*)malloc(n*sizeof(int));
    srand(time(NULL));
    for(i=0;i<n;i++)
        a[i]=rand()%100;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return a;
}
