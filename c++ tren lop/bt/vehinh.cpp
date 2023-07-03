#include<stdio.h>
#include<graphics.h>

int main(){
    initwindow(1000, 1000);
    int gd=DETECT, gm;
	int pentagon[12]={320,130,300,90,340,50,380,90,360,130,320,130};
    int hexagon[14] ={360,260,340,240,360,220,400,220,420,240,400,260,360,260}; 
    int octagon[18]={500,200,480,170,480,150,500,120,550,120,570,150,570,170,550,200,500,200};
    setfillstyle(1,BLUE);
    fillpoly(6, pentagon);
	settextstyle(0,0,1);
	outtextxy(290, 95, "Tran Manh Tan");
	fillpoly(9,octagon);
    outtextxy(474, 155, "Tran Manh Tan");
    fillpoly(7,hexagon);
    outtextxy(330,235, "Tran Manh Tan");   
    getch();
    closegraph();
    return 0;
}
