#ifndef MAIN_VIEW_CPP
#define MAIN_VIEW_CPP
#include <iostream>
#define ERROR_DATA_NOT_INPUTED 1
using namespace std;

char* getFilename(){
    char *fname=new char[100];
    cout<<"Input name of file: ";
    cin>>fname;
    return fname;
}

void endOfProgram(){
cout<<"Thanks for using our program!";
}

void showPoints(int n, float *x, float *y){
    for(int i=0;i<n;i++)
        cout<<"("<<x[i]<<","<<y[i]<<") ";
    cout<<endl;
}

void showError(int error=ERROR_DATA_NOT_INPUTED){
    switch(error){
        case ERROR_DATA_NOT_INPUTED: cout<<"You didnot input data yet!"<<endl;
                                    break;
    }
}

void showAnswer(int imin,int jmin, float *x, float *y,int delta){
    cout<<"Best difference ("<<delta<<") is for point "<<imin<<": ("<<x[imin]<<", "<<y[imin]<<") and "<<jmin<<": ("<<x[jmin]<<", "<<y[jmin]<<") "<<endl;
}

#endif  MAIN_VIEW_CPP
