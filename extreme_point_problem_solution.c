#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;//n������
    int i;//i��ʵ�ʺ���
    int num;//num�����۵���

    num=0;
    scanf("%d",&n);//��������
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//����ÿ�����۶�
    }

    for(i=1;i<n-1;i++)
    {
        if(((a[i-1]>a[i])&&(a[i+1]>a[i]))||((a[i-1]<a[i])&&(a[i+1]<a[i])))//�����۵�
        {
            num=num+1;//�۵�����һ
        }
    }

    printf("%d",num);//����۵���

    return 0;
}
