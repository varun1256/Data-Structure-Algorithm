void sort012(int a[], int n)
{

    int b[1000000];
    int size = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            b[size] = a[i];
            size++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            b[size] = a[i];
            size++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            b[size] = a[i];
            size++;
        }
    }
    size--;
    for (int i = 0; i < n; i++)
    {
        a[i] = b[size];
        if (size > 0)
        {
            size--;
        }
    }
}