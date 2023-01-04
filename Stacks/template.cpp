#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Pair{
    T x;
    T y;
    public:
    void setX(T x){
        this->x = x;
    }
    T getX(){
        return x;
    }
};
template<typename T , typename v>
class differentpair{
    T x;
    v y;
    public:
    void setX(T x){
        this->x = x;
    }
    T getX(){
        return x;
    }
     void setY(v y){
        this->y = y;
    }
    v getY(){
        return y;
    }
};
int main(){
Pair<int>p1;
Pair<double>p2;
p1.setX(156);
p2.setX(15.6);
cout<<p1.getX()<<endl;
cout<<p2.getX()<<endl;

differentpair<int,double>p3;
p3.setX(204);
p3.setY(20.4);
cout<<p3.getX()<<endl;
cout<<p3.getY()<<endl;

differentpair<differentpair<int,int>,int>p4;//making a pair class that has a pair in it
p4.setY(10);
differentpair<int,int>p5;
p5.setX(5); 
p5.setY(16);

p4.setX(p5);
cout<<p4.getX().getX()<<" "<<p4.getX().getY() <<" "<<p4.getY()<<endl;


return 0;
}