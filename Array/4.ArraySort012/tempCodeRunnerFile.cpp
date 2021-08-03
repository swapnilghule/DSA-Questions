    int low=0,high=n-1,medium=0;
    while(medium<=high)
    {
        if(a[medium]==0)                            // if its one the swap it with low element and increment both value (As set first element and move forward)
        {
            swap(a[low],a[medium]);
            low++;
            medium++;
        }
        if(a[medium]==1)                         // if its one then skip it and increment medium
        {
            medium++;

        } 

        if(a[medium]==2)                       // if its two then swap it with high element and decrement high (as set last element as 2 and move backward)
        {
            swap(a[high],a[medium])
            high--;
        }
    }