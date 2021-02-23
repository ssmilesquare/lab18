#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	R1.w = min(R2.x+R2.w,R1.x+R1.w) - max(R1.x,R2.x);
	R2.h = min(R2.y,R1.y) - max(R2.y-R2.h,R1.y-R1.h);
	if(R1.w > 0 && R2.h > 0){
		return R1.w*R2.h;
	}
	else return 0;
}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};	
	cout << overlap(R1,R2);	
}