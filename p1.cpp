#include<iostream>

#define n 100
using namespace std;
int main()
{
    int a[n], b[n][n];
    int length, i, j, w = 0, p = 0, q = 0, temp, m;
    cout << "����һά���飨�����������" << endl;
    for (length = 0;;)
    {
        cin >> a[length];
        length++;
        if (getchar() == '\n')
        {
            break;
        }
    }
    cout << "�������ĳ���Ϊ��" << length << endl;
    //��������
    for (i = 0; i<length; i++)//����ѭ���������ų������ж�ÿ���������ɵ����������
    {
        m = i;
        w = 0;
        j = 0;
        while (j <= length - 1)
        {
            w += a[m];
            b[i][j] = w;
            m++;
            if (m>length - 1)
            {
                m = 0;
            }
            j++;
        }
    }

    temp = b[0][0];
    for (i = 0; i<length; i++)//��ÿ������Ӧ���������������жϣ����õ���������������������
    {
        for (j = 0; j<length; j++)
        {
            if (b[i][j]>temp)
            {
                temp = b[i][j];
                p = i;
                q = j;
            }
        }
    }

    cout << "����������ֵΪ��" << temp << endl;
    cout << "�����������Ԫ�ص��±�λ��Ϊ��" << endl;
    i = 0;
    while (i <= q)
    {
        cout << p << "  ";
        p++;
        if (p >= length)
        {
            p = 0;
        }
        i++;
    }

    cout << endl;
}
