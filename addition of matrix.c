//addition of matrix
#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],c[3][3];
    printf("first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("addition of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {


                c[i][j]=a[i][j]+b[i][j];

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;

}


