#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    int k=1,p1,p2,m=0,q,r=1;
     for(int i=0;i<9;i++)
    {
        if(i==3 || i==6){
            cout<<endl;
            cout<<"  -------------------------";
            cout<<endl; }
        cout<<"    "<<a[i]<<"   |";
    }
    while(k && m<=8)
    {
        cout<<endl;
        cout<<"\nPlayer one: " ;
        cin>>p1;
        a[p1-1]=10;
        m++;
        system("cls");
    for(int i=0;i<9;i++)
    {
        if(i==3 || i==6)
            {
            cout<<endl;
            cout<<"  -------------------------";
            cout<<endl; }
        if(a[i]==10)
            cout<<"    "<<"0"<<"   |";
        else if(a[i]==20)
            cout<<"    "<<"*"<<"   |";
        else
            cout<<"    "<<a[i]<<"   |";
    }

        if(m>=5)
     {
            if(a[0]==10&&a[1]==10&&a[2]==10)
       {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[0]==20&&a[1]==20&&a[2]==20)
        {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;

                }
    else if(a[0]==10&&a[3]==10&&a[6]==10)
        {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[0]==20&&a[3]==20&&a[6]==20)
         {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }
   else  if(a[3]==10&&a[4]==10&&a[5]==10)
         {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[3]==20&&a[4]==20&&a[5]==20)
         {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }
    else if(a[6]==10&&a[7]==10&&a[8]==10)
         {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[6]==20&&a[7]==20&&a[8]==20)
          {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }
    else if(a[1]==10&&a[4]==10&&a[7]==10)
        {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[1]==20&&a[4]==20&&a[7]==20)
        {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }
    else if(a[2]==10&&a[5]==10&&a[8]==10)
        {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[2]==20&&a[5]==20&&a[8]==20)
        {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }
    else if(a[0]==10&&a[4]==10&&a[8]==10)
        {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[0]==20&&a[4]==20&&a[8]==20)
        {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }
    else if(a[2]==10&&a[4]==10&&a[6]==10)
        {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[2]==20&&a[4]==20&&a[6]==20)
        {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }

     }

        if(r && m<=8){
        cout<<endl;
        cout<<"\nPlayer Two: " ;
        cin>>p2;
       a[p2-1]=20;
        m++;
       system("cls");


    for(int i=0;i<9;i++)
    {
        if(i==3 || i==6)
           {
            cout<<endl;
            cout<<"  -------------------------";
            cout<<endl; }
        if(a[i]==10)
            cout<<"    "<<"0"<<"   |";
        else if(a[i]==20)
            cout<<"    "<<"*"<<"   |";
        else
            cout<<"    "<<a[i]<<"   |";
    }

        if(m>=5)
        {
             if(a[0]==10&&a[1]==10&&a[2]==10)
       {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[0]==20&&a[1]==20&&a[2]==20)
        {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;

                }
    else if(a[0]==10&&a[3]==10&&a[6]==10)
        {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[0]==20&&a[3]==20&&a[6]==20)
         {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }
   else  if(a[3]==10&&a[4]==10&&a[5]==10)
         {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[3]==20&&a[4]==20&&a[5]==20)
         {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }
    else if(a[6]==10&&a[7]==10&&a[8]==10)
         {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[6]==20&&a[7]==20&&a[8]==20)
          {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }
    else if(a[1]==10&&a[4]==10&&a[7]==10)
        {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[1]==20&&a[4]==20&&a[7]==20)
        {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }
    else if(a[2]==10&&a[5]==10&&a[8]==10)
        {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[2]==20&&a[5]==20&&a[8]==20)
        {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }
    else if(a[0]==10&&a[4]==10&&a[8]==10)
        {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[0]==20&&a[4]==20&&a[8]==20)
        {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }
    else if(a[2]==10&&a[4]==10&&a[6]==10)
        {
                cout<<"\nPlayer One is win";
                r=0;
                k=0;    break;
                }
    else if(a[2]==20&&a[4]==20&&a[6]==20)
        {
                cout<<"\nPlayer Two is win";
                r=0;
                k=0;    break;
                }


        }
             }

    }
     if(m==9){
                cout<<"\nDrow";
                 }
    getch();
}
