#include <iostream>
#include <string>
using namespace std;
//Md Harunar Rashid
int main()
{
    int m[20];
    float p[20];
    int ts;             //ts=Total Subject
    float gpa;
    float tp=0;        //tp=Total Point
    cout <<"ts:";
    cin >>ts;
    for (int i=0; i<ts;++i)
        {
            cin>>m[i];
        }
        for(int j=0; j<ts; j++)
        {
            cout<<m[j];

        if (m[j]>=80&& m[j]<=100)
        {
            cout<<"gp=5\n";
            p[j]=5;
        }
        else if (m[j]>=70 && m[j]<80)
        {
            cout<<"gp=4\n";
            p[j]=4;
        }
         else if (m[j]>=60 && m[j]<70)
        {
            cout<<"gp=3.5\n";
            p[j]=3.5;
        }
         else if (m[j]>=50 && m[j]<60)
        {
            cout<<"gp=3\n";
            p[j]=3;
        }
         else if (m[j]>=40 && m[j]<50)
        {
            cout<<"gp=2\n";
            p[j]=2;
        }
         else if (m[j]>=33 && m[j]<40)
        {
            cout<<"gp=1\n";
            p[j]=1;
        }
        else {cout<< "gp=0\n";
        gpa==0;}
        tp+=p[j];
        }
        gpa=tp/ts;
        cout<<"\n gpA="<<gpa<<endl;


    int fm[20];
    float fp[20];
    int fts;             //fts=Total Subject
    float gfpa;
    float tfp=0;        //tfp=Total fpoint
    cout <<"fts:";
    cin >>fts;
    for (int i=0; i<fts;++i)
        {
            cin>>fm[i];
        }
        for(int j=0; j<fts; j++)
        {
            cout<<fm[j];

        if (fm[j]>=80&& fm[j]<=100)
        {
            cout<<"gfp=5\n";
            fp[j]=5;
        }
        else if (fm[j]>=70 && fm[j]<80)
        {
            cout<<"gfp=4\n";
            fp[j]=4;
        }
         else if (fm[j]>=60 && fm[j]<70)
        {
            cout<<"gfp=3.5\n";
            fp[j]=3.5;
        }
         else if (fm[j]>=50 && fm[j]<60)
        {
            cout<<"gfp=3\n";
            fp[j]=3;
        }
         else if (fm[j]>=40 && fm[j]<50)
        {
            cout<<"gfp=2\n";
            fp[j]=2;
        }
         else if (fm[j]>=33 && fm[j]<40)
        {
            cout<<"gfp=1\n";
            fp[j]=1;
        }
        else {cout<< "gfp=0\n";
        gfpa==0;}
        tfp+=fp[j];
        }
        gfpa=tfp/fts;
      {

        cout<<"\n gfpA="<<gfpa<<endl;
float f,z,Agpa;
f=gfpa-2;
z=f/10;
Agpa=gpa+z;
cout<<"n\Agpa="<<Agpa;}

        return 0;

    }

