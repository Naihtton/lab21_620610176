#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect u,Rect v){
	double rw,rh;
	if (u.x + u.w > v.x)
	{
		if (u.x > v.x)
		{		
			rw = u.w - (u.x - v.x);
		} else  {
			rw = u.w - (v.x - u.x); 
		}
		 
		 	if (rw > u.w) {
				rw = u.w;
			} else if (rw > v.w) {
				rw = v.w;
			} else rw = rw;
		 

		if (u.y > v.y)
		{		
			rh = u.h - (u.y -v.y);
		} else {
			rh = u.h - (v.y - u.y); 
		}
		
			 if (rh > u.h) {
				rh = u.h;
			} else if (rh > v.h) {
				rh = v.h;
			} else rh = rh;
		
		
	} else return 0;

	return rw*rh;	
}
