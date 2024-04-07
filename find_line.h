#ifndef LINE_CALC_CPP
#define LINE_CALC_CPP
#include <math.h>

int sideOfLine(float x1, float y1, float x2, float y2, float x_check, float y_check)
{
    float t=((y2-y1)*(x_check-x1)-(y_check-y1)*(x2-x1));
    if (t>0)
        return 1;
    else
        if(t<0)
          return -1;
        else
          return 0;

}


int findLine(int n, float *x, float *y, int &imin, int &jmin){

    int sign_plus, sign_minus, delta;
    int delta_min=n;
    imin=-1;
    jmin=-1;

    //choice 2 points:
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            sign_plus=0;
            sign_minus=0;
            //go throw other points:
            for(int k=0;k<n;k++)
                {//find points on the borth side:
                    switch(sideOfLine(x[i],y[i],x[j],y[j],x[k],y[k])){
                        case 1:sign_plus++;
                                break;
                        case -1:sign_minus++;
                                break;
                    }
                }
            delta=abs(sign_plus-sign_minus);
            if(delta<delta_min)
            {
                delta_min=delta;
                imin=i;
                jmin=j;
            }
        }
    return delta_min;
}


#endif  LINE_CALC_CPP
