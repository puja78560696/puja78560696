
// #include <iostream>
// using namespace std;
// class Sing{

//     static Sing* getinstance;

//     int width;

//     Sing() : width(19)
//     {

//      }



// public:
//     static Sing* getInstance(){
//         if(getinstance==NULL){

//             getinstance= new Sing();
//     }

//         return getinstance;
//     }
//     void setwidth( int w){

//         width=w;
//     }
//     int getwidth()
//     {
//         return width;

//     }
//     void displayinfo()
//     {
//         cout<<"width="<<width<<endl;

//     }
// };







// int main()
// {

//     Sing* s=Sing::getInstance();
//      s->displayinfo();
//     return 0;
// }

# include<iostream>
using namespace std;
class Singleton {


    static Singleton* _instance;
    int width;
    Singleton ():width(10)
    {

    }
public:


    static Singleton* Getinstance()
    {
        if(_instance==NULL){
            _instance = new  Singleton();

    }
     return _instance;
    }

void setwidth( int width1)
{
        width=width1;

 }

int getwidth(){

    return width;

}


void display()
{
    cout<<"width="<<width<<endl;
}

};

Singleton* Singleton::_instance= NULL;

void some(){

    Singleton * s= Singleton::Getinstance();
    s->display();
}

int main()
{

    Singleton * s=Singleton::Getinstance();
    s->display();
     some();
    return 0;
}





























