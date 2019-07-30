#include<iostream>
#include<vector>
#include<cstdio>
#include<ctime>
#include<cmath>
#include<fstream>
using namespace std;

class OneMaxSA{
public:
    int iter;
    int dim;
    int run;

    int fit1;
    int fit2;
    int Best;
    double T;
    double t;
    double turnaround;


    vector<int> alternation;
    vector<int> neighbor;


    OneMaxSA(int Iteration,int Dimension,int Run,double Temperature);
    void SA();
    void initialize();
    vector<int> Transition(vector<int> arr);
    int Fitness(vector<int> arr);
    void Determination();
    void UpdateT();
};
