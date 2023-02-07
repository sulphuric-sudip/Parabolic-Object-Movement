#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void drawBall(int x, int y){
	setcolor(12);
	circle(x,y,5);
	setfillstyle(SOLID_FILL, 12);
	floodfill(x,y,12);
}

int main() {
    int gdriver = DETECT, gmode;
    int i;
    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
    clrscr();

	// move in parabolic path from (10, 100) to (70, 80); (50, 20) also lies in the path
	// using equation y = a[X]^2 + b[X] + c
	// using equation y = (1/12)*[X]^2 - 7*[X] + (485/3)
    drawBall(10, 100);
	for(i = 10; i <= 70; i++){
		int x = i;
		// on every point of X from 10 -> 70,  value of Y get updated
		int y = 1/12.0*x*x - 7*x + 485/3.0; //y = (1/12)*[X]^2 - 7*[X] + (485/3)
		drawBall(x,y);
		delay(80);
	    // clrscr();
	}

    getch();
    closegraph();
    return 0;
}
