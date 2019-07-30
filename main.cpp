#include "OneMaxSA.h"

int main(int argc,char *argv[]){

    int Iteration  = atoi(argv[1]);
    int Dimension  = atoi(argv[2]);
    int Run = atoi(argv[3]);
    double Temperature = atoi(argv[4]);

    OneMaxSA sa(Iteration,Dimension,Run,Temperature);
    sa.SA();
    return 0;
}