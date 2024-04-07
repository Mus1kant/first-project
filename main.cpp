#include <iostream>
#include "menu.h"
#include "input_data.h"
#include "find_line.h"
#include "main_view.h"

using namespace std;

//controller
int main()
{

    char *fname;
    int res=menu();
    int n;
    float *x=NULL, *y;
    int imin=-1, jmin=-1,delta;
    while(res!=0){
        switch(res){
        case 1:
                fname=getFilename();
                inputArray(fname, n, x, y);
                break;
        case 3: if(x!=NULL)
                  showPoints(n, x, y);
                else
                  showError(ERROR_DATA_NOT_INPUTED);
                break;
        case 4:if(x!=NULL)
                  {
                    delta=findLine(n, x, y,imin, jmin);
                    showAnswer(imin,jmin, x,y,delta);
                  }
                else
                  showError(ERROR_DATA_NOT_INPUTED);
                break;
        }


        res=menu();
    }

    return 0;
}
