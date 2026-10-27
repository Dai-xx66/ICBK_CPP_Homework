#include <iostream>
using namespace std;

class Robot{
    public:
    int* speed;
    Robot (int s){
        speed=new int (s);
    }
    Robot (const Robot& other){
        speed = new int (*other.speed);
    }
    ~Robot(){
        delete speed;
    }
    
};
int main(){
    Robot a(10);
    Robot b(a);
    *b.speed = 20;
    cout << *a.speed << endl;
    cout << *b.speed << endl;
    return 0;
}