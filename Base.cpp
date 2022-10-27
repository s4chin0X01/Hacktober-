# include<iostream>

using namespace std;

    //GLOBAL VAR

     int c = 45;

    int main(){

        int a, b, c;

    //USER INPUT

        cout<<"enter the value of a : "<<endl;

        cin>>a;

        cout<<"enter the value of b : "<<endl;

        cin>>b;

    //USER OUTPUT

        (c = a + b);

        cout<<"the value of Sum is = "<<c<<endl;

        cout<<"the value of Sum is = "<<::c<<endl;

    float d = 33.4f;

    long double e = 33.4l;

    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e; 

    cout<<endl;

    cout<<endl;

    cout<<"The size of 33.4 is = "<<(sizeof 33.4)<<endl;

    cout<<"The size of 33.4f is = "<<(sizeof 33.4f)<<endl;

    cout<<"The size of 33.4F is = "<<(sizeof 33.4F)<<endl;

    cout<<"The size of 33.4l is = "<<(sizeof 33.4l)<<endl;

    cout<<"The size of 33.4L is = "<<(sizeof 33.4L)<<endl;

    cout<<endl;

    cout<<endl;

    cout<<endl;

    float ref_1 = 900;

    cout<<ref_1<<endl;

    float & ref_2 = ref_1;

    cout<<ref_2<<endl;

    int g = 55;

    float f = 33.44;

    int y = int(f);

    cout<<"The value of float f = "<<float(f)<<endl;

    cout<<"The value of float f = "<<int(f)<<endl;

    cout<<"The value of float f = "<<(float)f<<endl;

    cout<<"The value of float y = "<<(float)y<<endl;

    cout<<endl;

    cout<<endl;

    cout<<"The value of g + f = "<<g + f<<endl;

    cout<<"The value of g + f = "<<int(f) + g<<endl;

    cout<<"The value of g + f = "<<g + (int)f<<endl;

        return 0;

    }

    

