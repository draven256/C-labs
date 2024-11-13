#include <stdio.h>

int main (void) 
{ 
    FILE *fp; 
    FILE *fpOut;

    fp = fopen("./nums.txt", "r");
    fpOut = fopen("./output.txt", "w");

    double num; 
    int valid;

    while((valid = fscanf(fp, " %lf", &num)) != EOF){
        if (valid == 1){
            fprintf(fpOut, "%.3lf ", num);
        } else {
            // Point to next char in stream to avoid fscanf conflicts 
            fgetc(fp);
        }
    }
    fclose(fp);
    fclose(fpOut);

    return 0;
}