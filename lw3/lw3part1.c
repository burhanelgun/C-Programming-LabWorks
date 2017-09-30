int getMinAndMax(int *min, int *max){
    int lastMin = 10000;
    int lastMax = -10000;
    int input = 0;


    scanf("%d", &input);
    if(input<=0)
        return -1;

    while(input>0){
        if(input<lastMin){
            lastMin = input;
        }
        if(input>lastMax){
            lastMax = input;
        }

        scanf("%d", &input);
    }

    *min = lastMin;
    *max = lastMax;

    return 0;
}
