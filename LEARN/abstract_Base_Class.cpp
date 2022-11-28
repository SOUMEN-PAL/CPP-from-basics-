


#include <iostream>

using namespace std;
//-- this is an abstract base class made only for making derived class with new properties for functionality ----//
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float r){
            title=s;
            rating=r;
        }
    // its important to declare the pure virtual with a virtula keyword --//
        virtual void display()=0;//----pure virtual function is declared----//
        //----display function derived class me declare karna hi padega uske buina compiler dnaga karega-----//

};

class CWHVideo : public CWH{
    float videolength;
    public:
        CWHVideo(string s,float r,float vl): CWH(s,r){
            videolength=vl;
        }
        void display(){
            cout<<"THis is an amazing video with title "<<title<<endl;
            cout<<"ratings: "<<rating<<endl;
            cout<<"length of this video is: "<<videolength<<endl;

        }
};


class CWHtext : public CWH{
    int words;
    public:
        CWHtext(string s,float r,int wc): CWH(s,r){
            words=wc;
        }
        void display(){
            cout<<"This is an amazing text with title "<<title<<endl;
            cout<<"ratings: "<<rating<<endl;
            cout<<"word count is: "<<words<<endl;

        }


};

int main(){
    
    string title[2];
    // ---we did this to not updated the title and have individual title in array-----//
    float rating,vlen;
    int word;

    // for cwh video //
    title[0]="Django tutorial";
    vlen=4.56;
    rating=4.89;
    CWHVideo djvideo(title[0],rating,vlen);
    // djvideo.display();

    // for text //
    title[1]= "Xyz text";
    word=433;
    rating=4.56;
    CWHtext djtext(title[1], rating , word);
    // djtext.display();


    CWH *tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;
    tuts[0]->display();
    tuts[1]->display();


    return 0;
}