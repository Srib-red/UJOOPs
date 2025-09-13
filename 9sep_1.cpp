#include<iostream>
using namespace std;

class temple_run{
    private:
    int score;

    public:
      void left(void);
      void right(void);
      void getscore(void);
    
    friend void bonus(temple_run*t);

};
void temple_run ::left(void){
    this->score++;
}
void temple_run ::right(void){
    this->score++;
}
void temple_run ::getscore(void){
    cout<<"score: "<<this->score<<endl;
}
void bonus(temple_run *p6){
    // p6.score = p6.score + 5;
    p6->score = p6->score + 5;
}
int main(){
    temple_run p1;
    p1.left();
    p1.right();
    p1.getscore();

    bonus(&p1);

    p1.getscore();

    return 0;
}