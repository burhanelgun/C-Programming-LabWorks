double maxSumOfIncSeq() {
    int longestSeqCount = 0, currSeqCount = 0;
    double maxSum = .0, currSum = .0, inp, prevInp = NAN_MIN;
    while(1) {
        scanf("%lf", &inp);
        if(inp < 1.0) {
            break;
        } else if(inp > prevInp) { /* increasing seq */
            currSeqCount++;
            currSum += inp;
            prevInp = inp;
            if(currSeqCount > longestSeqCount) {
                longestSeqCount = currSeqCount;
                maxSum = currSum;
            }
        } else { /* end of a increasing seq. resetting intermediate variables */
            currSeqCount = 0;
            currSum = .0;
            prevInp = NAN_MIN;
        }
    }
    if(longestSeqCount<=1)
        return 0;
    else
        return maxSum;
}
