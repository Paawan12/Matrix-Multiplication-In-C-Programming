#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<graphics.h>
#include<dos.h>
void menu();
void input(int [][5],int [][5]);
void display();
void addition(int [][5],int [][5]);
void subtraction(int [][5],int [][5]);
void multiplication(int [][5],int [][5]);
void transpose(int [][5],int [][5]);
void elementssum(int [][5],int [][5]);
void diagnol_elements(int [][5],int [][5]);
void sum_diagnol_elements(int [][5],int [][5]);
void product_diagnol_elements(int [][5],int [][5]);
void sum_upper_triangular_matrix(int [][5],int [][5]);
void sum_lower_triangular_matrix(int [][5],int [][5]);
void finish();
void quit();
int i,j,r1,c1,r2,c2,m1[5][5],m2[5][5];
void main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    setbkcolor(RED);
    printf("\n\t\t*************************************************");
    printf("\n\t\t*************************************************");

 
    printf("\n\t\t******MATRIX CALCULATOR KI DUNIYA ME WELCOME*****");
    printf("\n\t\t*************************************************");
    settextstyle(3,1,4);
    setcolor(GREEN);
    outtext("Paawan");
    settextstyle(3,0,4);
    outtextxy(250,63,"Prashad");
    settextstyle(3,1,4);
    outtextxy(550,10,"Bhatt");
    //sleep(2);
    input(m1,m2);
    menu();
    getch();
}
void menu()
{
    int choice=0;
    printf("\n\t\t*************************************************");
    printf("\n\t\t*********************MENU************************");

 
    printf("\n\t\t*************************************************");
    printf("\n\t\t\t\t1.  To Display Matrix ");
    printf("\n\t\t\t\t2.  To Add Matrix");
    printf("\n\t\t\t\t3.  To Subtract Matrix");
    printf("\n\t\t\t\t4.  To Multiply Matrix");
    printf("\n\t\t\t\t5.  To Transpose Matrix");
    printf("\n\t\t\t\t6.  To Get All Elements Sum");
    printf("\n\t\t\t\t7.  To Get Diagnol Elements");
    printf("\n\t\t\t\t8.  To Get Diagnol Elements Sum");
    printf("\n\t\t\t\t9.  To Get Diagnol Elements Product");
    printf("\n\t\t\t\t10. To Get Sum of Upper Triangular Matrix");
    printf("\n\t\t\t\t11. To Get Sum of Lower Triangular Matrix");
    printf("\n\t\t\t\t12. To Quit");
    printf("\n\n\tEnter your choice between 1 to 12    :  ");
    scanf("%d",&choice);
    if(choice==1)
    {
        display();
    }
    else if(choice==2)
    {
    addition(m1,m2);
    }
    else if(choice==3)
    {
    subtraction(m1,m2);
    }
    else if(choice==4)
    {
    multiplication(m1,m2);
    }
    else if(choice==5)
    {
    transpose(m1,m2);
    }
    else if(choice==6)
    {
    elementssum(m1,m2);
    }
    else if(choice==7)
    {
    diagnol_elements(m1,m2);
    }
    else if(choice==8)
    {
    sum_diagnol_elements(m1,m2);
    }
    else if(choice==9)
    {
    product_diagnol_elements(m1,m2);
    }
    else if(choice==10)
    {
    sum_upper_triangular_matrix(m1,m2);
    }
    else if(choice==11)
    {
        sum_lower_triangular_matrix(m1,m2);
    }
    else if(choice==12)
    {
        quit();
    }
    else
    printf("\nInvalid choice. Please input choice between 1 and 5.");
}
void input(int m1[][5],int m2[][5])
{
    printf("\n\n\nEnter size of first matrix:-\n");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter the elements of first matrix:-\n");
    for(i=0;i<r1;i++)
    for(j=0;j<c1;j++)
    scanf("%d",&m1[i][j]);
    printf("\nEnter size of second matrix:-\n");
    scanf("%d%d",&r2,&c2);
    printf("\nEnter the elements of second matrix:-\n");
    for(i=0;i<r2;i++)
    for(j=0;j<c2;j++)
    scanf("%d",&m2[i][j]);
}
void display()
{
    printf("\nThe first matrix is:-\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        printf("%d\t",m1[i][j]);
        printf("\n\n");
    }
    printf("\nThe second matrix is:-\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        printf("%d\t",m2[i][j]);
        printf("\n\n");
    }
    finish();
}
void addition(int m1[][5],int m2[][5])
{
    int sum[5][5];
    if(r1==r2&&c1==c2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            sum[i][j]=m1[i][j]+m2[i][j];
        }
        printf("\nAfter addition:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            printf("%d\t",sum[i][j]);
            printf("\n\n");
        }
    }
    else
    printf("\nSum is not possible because matrixs are not equal.");
    finish();
}
void subtraction(int m1[][5],int m2[][5])
{
    int sub[5][5];
    if(r1==r2&&c1==c2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            sub[i][j]=m1[i][j]-m2[i][j];
        }
        printf("\nAfter subtraction:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            printf("%d\t",sub[i][j]);
            printf("\n\n");
        }
    }
    else
    printf("\nSubtraction is not possible because matrixs are not equal.");
    finish();
}
void multiplication(int m1[][5],int m2[][5])
{
    int k,addition,m3[5][5];
    if(c1==r2)
    {
        printf("\nAfter multiplication:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                addition=0;
                for(k=0;k<c1;k++)
                addition=addition+m1[i][k]*m2[k][j];
                m3[i][j]=addition;
                printf("%d\t",m3[i][j]);
            }
            printf("\n\n");
        }
    }
    else
    printf("\nMultiplication is not possible because c1!=c2");
    finish();
}
void transpose(int m1[][5],int m2[][5])
{
    printf("\nTranspose of first matrix is:-\n");
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        printf("%d\t",m1[j][i]);
        printf("\n\n");
    }
        printf("\nTranspose of second matrix is:-\n");
    for(i=0;i<c2;i++)
    {
        for(j=0;j<r2;j++)
        printf("%d\t",m2[j][i]);
        printf("\n\n");
    }
    finish();
}
void elementssum(int m1[][5],int m2[][5])
{
    int sum=0;
    printf("\nSum of elements of first matrix:-\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        sum=sum+m1[i][j];
    }
    printf("%d",sum);
    printf("\n\nSum of elements of second matrix:-\n");
    sum=0;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        sum=sum+m2[i][j];
    }
    printf("%d",sum);
    finish();
}
void diagnol_elements(int m1[][5],int m2[][5])
{
    if(r1==c1)
    {
        printf("\nDiagnol elements of first matrix are:-\n");
        {
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                if(i==j)
                printf("%d\n",m1[i][j]);
            }
        }
    }
    else
    printf("\n\nFirst matrix is not square matrix!!!");
    if(r2==c2)
    {
        printf("\nDiagnol elements of second matrix are:-\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            if(i==j)
            printf("%d\n",m2[i][j]);
        }
    }
    else
    printf("\n\nSecond matrix is not square matrix!!!");
    finish();
}
void sum_diagnol_elements(int m1[][5],int m2[][5])
{
    int sum=0;
    if(r1==c1)
    {
        printf("\nSum of diagnol elements of first matrix is:-\n" );
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            if(i==j)
            sum=sum+m1[i][j];
        }
        printf("%d",sum);
    }
    else
    printf("\n\nFirst matrix is not square matrix!!!");
    if(r2==c2)
    {
        sum=0;
        printf("\nSum of diagnol elements of second matrix is:-\n" );
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            if(i==j)
            sum=sum+m2[i][j];
        }
        printf("%d",sum);
    }
    else
    printf("\n\nSecond matrix is not square matrix!!!");
    finish();
}
void product_diagnol_elements(int m1[][5],int m2[][5])
{
    int pro=1;
    if(r1==c1)
    {
        printf("\nProduct of diagnol elements of first matrix is:-\n" );
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            if(i==j)
            pro=pro*m1[i][j];
        }
        printf("%d",pro);
    }
    else
    printf("\n\nFirst matrix is not square matrix!!!");
    if(r2==c2)
    {
        pro=1;
        printf("\nSum of diagnol elements of second matrix is:-\n" );
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            if(i==j)
            pro=pro*m2[i][j];
        }
        printf("%d",pro);
    }
    else
    printf("\n\nSecond matrix is not square matrix!!!");
    finish();
}
void sum_upper_triangular_matrix(int m1[][5],int m2[][5])
{
    int sum=0;
    printf("\nThe sum of upper triangular elements of first matrix is:-\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        if(i<=j)
        sum=sum+m1[i][j];
    }
    printf("%d",sum);
    printf("\n\nThe sum of upper triangular elements of second matrix is:-\n");
    sum=0;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        if(i<=j)
        sum=sum+m2[i][j];
    }
        printf("%d",sum);
        finish();
}
void sum_lower_triangular_matrix(int m1[][5],int m2[][5])
{
    int sum=0;
    printf("\nThe sum of lower triangular elements of first matrix is:-\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        if(i>=j)
        sum=sum+m1[i][j];
    }
    printf("%d",sum);
    printf("\n\nThe sum of lower triangular elements of second matrix is:-\n");
    sum=0;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        if(i>=j)
        sum=sum+m2[i][j];
    }
    printf("%d",sum);
    finish();
}
void finish()
{
    char next='y';
    printf("\n Do you want to input another matrix(y/n)\?");
    next=getche();
    if(next=='y'||next=='Y')
    {
        input(m1,m2);
        menu();
    }
    else
    quit();
}
void quit()
{
    exit(0);
}
