#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
double kiir(vector<double>v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    double szam1,szam2,szam3;
    double eredmeny=0;
    char muv;

    vector<double>v;
    cout<<"Adja meg a muveletjelet(+,-,*,/),majd az ertekeket "<<endl;
    cout<<"Muvelet: ";cin>>muv; cout<<endl;
    cout<<"Ertek1: ";cin>>szam1;cout<<endl;
    cout<<"Ertek2: ";cin>>szam2;cout<<endl;


    switch(muv)
    {
        case '+':
        eredmeny=szam1+szam2;
        cout<<"Eredmeny:"<<eredmeny<<endl;
        v.push_back(eredmeny);
        break;

        case '-':
         eredmeny=szam1-szam2;
           cout<<"Eredmeny:"<<eredmeny<<endl;
           v.push_back(eredmeny);
         break;


        case '*':
         eredmeny=szam1*szam2;
           cout<<"Eredmeny:"<<eredmeny<<endl;
           v.push_back(eredmeny);
         break;

        case '/':
        eredmeny=szam1/szam2;
          cout<<"Eredmeny:"<<eredmeny<<endl;
          v.push_back(eredmeny);
          break;


        default:
 cout<<"A muvelet nem szerepelt a listan!"; return 0;
            break;
    }
    while(cin)
    {
        cout<<"Muvelet:";cin>>muv;cout<<endl;
        cout<<"Ertek:";cin>>szam3;cout<<endl;
        switch(muv)
        {


        case '+':
        eredmeny=eredmeny+szam3;
        cout<<"Eredmeny:"<<eredmeny<<endl;
        v.push_back(eredmeny);

        break;

        case '-':
         eredmeny=eredmeny-szam3;
           cout<<"Eredmeny:"<<eredmeny<<endl;
           v.push_back(eredmeny);

         break;


        case '*':
         eredmeny=eredmeny*szam3;
           cout<<"Eredmeny:"<<eredmeny<<endl;
           v.push_back(eredmeny);

         break;

        case '/':
    eredmeny=eredmeny/szam3;
          cout<<"Eredmeny:"<<eredmeny<<endl;
          v.push_back(eredmeny);
          break;


        default: cout<<"A muvelet nem szerepelt a listan!";return 0;
            break;
        }
        cout<<"Elozo eredmenyek:";
        kiir(v);
        cout<<endl;


    }


    return 0;

}
