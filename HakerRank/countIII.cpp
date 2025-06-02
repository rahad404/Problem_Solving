#include<iostream>
using namespace std;

int main(){
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,ic=0,jc=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    string str;
    cin >> str;

    for(int i=0; i<str.size(); i++){
        switch (str[i]) {
            case 'a':a++; break;
            case 'b':b++; break;
            case 'c':c++; break;
            case 'd':d++; break;
            case 'e':e++; break;
            case 'f':f++; break;
            case 'g':g++; break;
            case 'h':h++; break;
            case 'i':ic++; break;
            case 'j':jc++; break;
            case 'k':k++; break;
            case 'l':l++; break;
            case 'm':m++; break;
            case 'n':n++; break;
            case 'o':o++; break;
            case 'p':p++; break;
            case 'q':q++; break;
            case 'r':r++; break;
            case 's':s++; break;
            case 't':t++; break;
            case 'u':u++; break;
            case 'v':v++; break;
            case 'w':w++; break;
            case 'x':x++; break;
            case 'y':y++; break;
            case 'z':z++; break;
        }
    }
    cout << "a" << " - " << a << endl
        << "b" << " - " << b << endl
        << "c" << " - " << c << endl
        << "d" << " - " << d << endl
        << "e" << " - " << e << endl
        << "f" << " - " << f << endl
        << "g" << " - " << g << endl
        << "h" << " - " << h << endl
        << "i" << " - " << ic << endl
        << "j" << " - " << jc << endl
        << "k" << " - " << k << endl
        << "l" << " - " << l << endl
        << "m" << " - " << m << endl
        << "n" << " - " << n << endl
        << "o" << " - " << o << endl
        << "p" << " - " << p << endl
        << "q" << " - " << q << endl
        << "r" << " - " << r << endl
        << "s" << " - " << s << endl
        << "t" << " - " << t << endl
        << "u" << " - " << u << endl
        << "v" << " - " << v << endl
        << "w" << " - " << w << endl
        << "x" << " - " << x << endl
        << "y" << " - " << y << endl
        << "z" << " - " << z << endl;
}
