
//Implement the class Box 
class Box{
int l, b, h;
public:
Box(){
l = 0;
b = 0;
h = 0;
}
Box(int length, int breadth, int height){
l = length;
b = breadth;
h = height;
}
Box(const Box& B){
l = B.l;
b = B.b;
h = B.h;
}

int getLength(){
return l;
}
int getBreadth(){
return b;
}
int getHeight(){
return h;
}
long long CalculateVolume(){
return (long long) l*b*h;
}
friend bool operator < (const Box& a, const Box& b){
if(a.l < b.l) return true;
if(a.b < b.b && a.l == b.l) return true;
if(a.h < b.h && a.b == b.b && a.l == b.l) return true;
return false;
}
friend ostream& operator<<(ostream& out, const Box& B){
out<<B.l<<" "<<B.b<<" "<<B.h;
return out;
}
// void operator<<(const Box& B){
// cout<<B.l<<" "<<B.b<<" "<<B.h;
// }
};
