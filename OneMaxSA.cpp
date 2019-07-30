#include "OneMaxSA.h"


OneMaxSA::OneMaxSA(int Iteration,int Dimension,int Run,double Temperature){
    iter = Iteration;
    dim = Dimension;
    run = Run;

    fit1 = 0;
    fit2 = 0;
    Best = 0;
    T = Temperature;

    alternation = vector<int> (Dimension,0);
    neighbor = vector<int> (Dimension,0);

    srand(time(NULL));
}

void OneMaxSA::SA(){
    string s="output0.dat";
    for(int r=0;r<run;r++){
        if(r<10)
            s.replace(6,1,to_string(r+1));
        else 
            s.replace(6,2,to_string(r+1));
        ofstream file(s);
        initialize();
        for(int i=0;i<iter;i++){
            neighbor = Transition(alternation);
            fit1 = Fitness(alternation);
            fit2 = Fitness(neighbor);
            Determination();
            file << i << " " << Best << endl;
            // if(Best==dim){
            //     break;
            // }
            UpdateT();
        }
        file.close();
    }

}

void OneMaxSA::initialize(){
    for(int i=0;i<dim;i++){
        alternation[i] = rand()%2;
        neighbor[i] = alternation[i];
    }
    Best = Fitness(alternation);
    t = T;
    turnaround = 0;
}

vector<int> OneMaxSA::Transition(vector<int> arr){
    int pos = rand()%dim;
    if( arr[pos]==0 )
        arr[pos] = 1;
    else
        arr[pos] = 0;
    
    return arr;
}

int OneMaxSA::Fitness(vector<int> arr){
    int cnt=0;

    for(int i=0;i<dim;i++)
        if(arr[i]==1)
            cnt++;

    return cnt;
}

void OneMaxSA::Determination(){
    double random = (double)((rand()%100)+1)/100;
    if(fit1<fit2){  // neighbor is better than current solution
        if(Best<fit2)
            Best = fit2;
        alternation = neighbor;
        
    } 
    else{
        turnaround = (double)  exp( (fit1-fit2)/t );
        if(random>turnaround)
            alternation = neighbor; 
    }
}

void OneMaxSA::UpdateT(){
    t *= 0.99;
}
//if (fit1-fit2) is positive
//then expvalue becomes larger equal than 1
//in the other words ,must be accept
//otherwise, possibly be accepted                                                          