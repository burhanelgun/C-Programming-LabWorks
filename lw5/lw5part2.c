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


double testResults2d(char questionNumbersArr[][5], int qNArrSize, char keysArr[], int keysArrSize){
    int tempQuestionNumbersArr[30];
    char answersArr[30];
    int ansArrSize = 0;
    
    int markCount = 0;
    char markedOption = 'F';
    
    int i = 0, j = 0;
    
    
    for(i = 0; i < qNArrSize; ++i){
        for(j = 0; j < 5; ++j){
            if(questionNumbersArr[i][j] == '*'){
                ++markCount;
                markedOption = 'A'+j;
            }
        }
        if(markCount == 1){
            tempQuestionNumbersArr[ansArrSize] = i+1;
            answersArr[ansArrSize] = markedOption;
            printf("%d, %c\n",tempQuestionNumbersArr[ansArrSize], answersArr[ansArrSize]);
            ++ansArrSize;
        }else if(markCount > 1){
            tempQuestionNumbersArr[ansArrSize] = i+1;
            answersArr[ansArrSize] = 'F';
            ++ansArrSize;
        }
        
        markCount = 0;
    }
    
    
    
    
    
    
    
    return testResults(tempQuestionNumbersArr, ansArrSize, answersArr, ansArrSize, keysArr, keysArrSize);
}
