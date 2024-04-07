#include "input_data.h"
#include <iostream>
#include <fstream>
using namespace std;
//������ ����� ������



//������� ��� ����� ������ �� �����
// ���������� true, ���� ������ ��������� �������
bool inputArray(char *fname, int& n, float *&x, float *&y)
{
    ifstream fIn(fname);
    if(!fIn.is_open())
    {
        return false;
    }
    fIn>>n;
    if(n<0)
        return false;

    x=new float[n];
    y=new float[n];
    for(int i=0;i<n;i++) //�������� �������� �� ��, ��� �� ����� ����� (�� ������� ������)
        fIn>>x[i]>>y[i];
    fIn.close();
    return true;
}

//������� ��� ����� ������ c �����������
//���������� true, ���� ������ ��������� �������
bool inputArray(int& n, float *&x, float *&y)
{
    cin>>n;
    if(n<0)
        return false;
    x=new float[n];
    y=new float[n];
    for(int i=0;i<n;i++) //�������� �������� �� ��, ��� �� ����� ����� (�� ������� ������)
        cin>>x[i]>>y[i];
    return true;
}
