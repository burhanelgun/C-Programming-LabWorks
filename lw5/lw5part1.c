double testResults(int questionNumbersArr[], int qNArrSize, char answersArr[], int ansArrSize, char keysArr[], int keysArrSize){
    int trueAns = 0;
    int falseAns = 0;
    int i = 0;
    
    for(i = 0; i < qNArrSize; ++i){
        if(answersArr[i] == keysArr[questionNumbersArr[i]-1]){
            ++trueAns;
        }else{
            ++falseAns;
        }
    }
    
    return calculateResult(trueAns, falseAns, keysArrSize);
}


double calculateResult(int trueAns, int falseAns, int totalAns){
    double net = 0;
    
    net = trueAns - falseAns/4.0;

    return net/totalAns;
}


