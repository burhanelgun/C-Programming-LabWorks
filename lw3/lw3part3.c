void swap(int *n1, int *n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int getMaxThreeTotal(int *first, int *second, int *third){
    int lastMax1 = 0;
    int lastMax2 = 0;
    int lastMax3 = 0;
    int n1 = 0;
    int n2 = 0;
    int res = 0;
    int i = 0;

    scanf("%d", &n1);   
    if(n1<=0)
        return -1;

    scanf("%d", &n2);   
    if(n2<=0)
        return -2;
    if(n2<n1)
            return -3;
    
    while(1){
        res = 0;
        for (i = n1; i <= n2; ++i){
            res+=i;
        }

        if(res>lastMax3){
            lastMax3 = res;
        }       

        if(lastMax3>lastMax2){
            swap(&lastMax2, &lastMax3);
        }

        if(lastMax2>lastMax1){
            swap(&lastMax1, &lastMax2);
        }

        scanf("%d", &n1);   
        if(n1<=0){
            *first = lastMax1;
            *second = lastMax2;
            *third = lastMax3;
            return 0;
        }

        scanf("%d", &n2);   
        if(n2<=0)
            return -2;
        if(n2<n1)
            return -3;
    }

    return 0;
}
