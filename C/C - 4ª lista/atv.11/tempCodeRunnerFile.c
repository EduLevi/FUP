int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &n);
        v1[i] = n;
        if (v1[i] < 0)
        {
            nega ++;
        }else
        {
            soma += v1[i];
        }
    }