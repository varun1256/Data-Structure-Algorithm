int kthSmallest(int arr[], int l, int r, int k)
{
    int t;
    int b;
    for (int j = 1; j <= k; j++)
    {
        t = 8000;
        for (int i = l; i <= r; i++)
        {
            if (t > arr[i])
            {
                t = arr[i];
                b = i;
            }
        }
        arr[b] = 8000;
    }

    return t;
}