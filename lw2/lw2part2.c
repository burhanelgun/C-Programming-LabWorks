/**
    checks if realVal equals expectedVal.
*/
int compareDouble(double realVal, double expectedVal) {
    return ((realVal + THRESHOLD) > expectedVal) && ((realVal - THRESHOLD) < expectedVal);
}

/**
    Find the minimum of user inputs.
*/
double minimum() {
    double min = NAN_MAX, inp;
    while(1) {
        scanf("%lf", &inp);
        if(inp > 0) {
            if(min > inp)
                min = inp;
        } else {
            break;
        }
    }
    if (compareDouble(min, NAN_MAX)) /* if user does not input a positive val */
        return 0.0;
    return min;
}


/**
    Find the maximum of user inputs.
*/
double maximum() {
    double max = NAN_MIN, inp;
    while(1) {
        scanf("%lf", &inp);
        if(inp > 0) {
            if(max < inp)
                max = inp;
        } else {
            break;
        }
    }
    if (compareDouble(max, NAN_MAX)) /* if user does not input a positive val */
        return 0.0;
    return max;
}
