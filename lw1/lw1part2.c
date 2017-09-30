/**************************** part 1 *****************************/
int readInt(){
    int ret = 0;

    scanf("%d", &ret);

    return ret;
}

double readDouble(){
    double ret = 0;

    scanf("%lf", &ret);

    return ret;
}

char readChar(){
    char ret;

    scanf(" %c", &ret);

    return ret;
}

/**************************** part 2 *****************************/


double calculateBMI(int height, double weight){
    double BMI = 0;
    double heightM = 0;

    heightM = height/100.0;

    BMI = weight/(heightM*heightM);

    return BMI;
}

double getInfoAndCalculateBMI(){
    int height;
    double weight;

    height = readInt();
    weight = readDouble();
    return calculateBMI(height, weight);

}

