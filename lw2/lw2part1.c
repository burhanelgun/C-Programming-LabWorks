double mean() {
    double inp, sum = 0;
    int count = 0;
    while(1) {
        scanf("%lf", &inp);
        if(inp > 0) {
            sum += inp;
            count++;
        } else {
            break;
        }
    }

    if(count == 0) /* division by zero */
        return 0;
    return sum/count;
}
