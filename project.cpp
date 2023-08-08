#include<iostream>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>


using namespace std;


int main()
{
    int i,x,y,walk=0;
    int gd = DETECT, gm, midx, midy,maxx;
    initgraph(&gm,&gm," ");
    initwindow(1500,800);




    int option;



    // display menu


     std::cout << "Name      :Md Delower Hossen "<< std::endl;
      std::cout <<"ID        :CSE2001019242    "<< std::endl;
       std::cout << "Section   :20A21A    "<< std::endl;
    std::cout <<"Subject   : Computer graphics  "<< std::endl;
     std::cout << "        "<< std::endl;


    std::cout << "Choose a shape to draw:" << std::endl;
    std::cout << "1. Falg" << std::endl;
    std::cout << "2. Emoji" << std::endl;
    std::cout << "3. House" << std::endl;
 std::cout << "4. Tree" << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> option;


    switch (option)
    {

    case 1:

 initwindow(1500,800);

    setbkcolor(WHITE);
    setcolor(WHITE);
    rectangle(150,40,450,180);
    setfillstyle(1,GREEN);
    floodfill(160,50,WHITE);
    setcolor(WHITE);
    rectangle(138,35,150,450);
    setfillstyle(1,BLUE);
    floodfill(140,40,WHITE);
    setcolor(WHITE);
    bar(130,450,160,460);
    setcolor(WHITE);
    circle(300,110,55);
    setfillstyle(1,RED);
    floodfill(320,120,WHITE);


        break;

    case 2:

 initwindow(1500,800);

    setcolor(YELLOW);

    circle(300, 100, 40);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(300, 100, YELLOW);


    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);


    fillellipse(310, 85, 2, 6);
    fillellipse(290, 85, 2, 6);


    ellipse(300, 100, 205, 335, 20, 9);
    ellipse(300, 100, 205, 335, 20, 10);
    ellipse(300, 100, 205, 335, 20, 11);

        break;


    case 3:
         initwindow(1500,800);

        setcolor(WHITE);
        rectangle(150,180,250,300);
        rectangle(250,180,420,300);
        rectangle(180,250,220,300);

        line(200,100,150,180);
        line(200,100,250,180);
        line(200,100,370,100);
        line(370,100,420,180);

        /* Fill colours */
        setfillstyle(SOLID_FILL, BROWN);
        floodfill(152, 182, WHITE);
        floodfill(252, 182, WHITE);
        setfillstyle(SLASH_FILL, BLUE);
        floodfill(182, 252, WHITE);
        setfillstyle(HATCH_FILL, GREEN);
        floodfill(200, 105, WHITE);
        floodfill(210, 105, WHITE);


        break;


    case 4:

 initwindow(1500,800);


    line(207,220,207,280);
line(240,220,240,280);
ellipse(200,200,90,280,25,30);
ellipse(186,170,60,240,25,30);
ellipse(190,142,40,200,29,30);

ellipse(220,117,20,170,29,30);
ellipse(250,117,0,120,29,30);
ellipse(260,127,310,60,35,30);
ellipse(274,150,280,50,35,30);

ellipse(270,180,260,22,35,30);
ellipse(243,200,270,340,35,30);
break;


    }

    getch();
    closegraph();
    return 0;
}
