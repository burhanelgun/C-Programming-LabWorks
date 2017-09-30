int getMaxExp(){
    int lastMax = -10000;
    int base = 0;
    int exp = 0;
    int res = 0;
    int i;

    scanf("%d", &base); 
    if(base<=0)
        return -1;

    scanf("%d", &exp);  
    if(exp<=0)
        return -2;

    while(1){
        res = base;
        for (i = 1; i < exp; ++i){
            res*=base;
        }

        if(res>lastMax){
            lastMax = res;
        }

        scanf("%d", &base); 
        if(base<=0)
            return lastMax;

        scanf("%d", &exp);  
        if(exp<=0)
            return -2;
    }

    return lastMax;
}
