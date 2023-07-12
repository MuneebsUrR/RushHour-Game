/************************************
* Name: MUNEEB UR REHMAN            *
* Roll number: I210392              * 
* Section: R                        *
************************************/

//============================================================================
// Name        : game.cpp
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Rush Hour...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include<fstream>
#include <cmath>
 // for basic math functions such as cos, sin, sqrt
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


int xI = 50 ,   yI=700;
int x2 = 400 , y2=400;
int x3 = 400 , y3=100; 
int x4 = 40  , y4=400; 
void drawCar() {      /*Taxi*/
	DrawSquare(  xI, yI, 30, colors[GOLD]);
	glutPostRedisplay();
	
}
/*Random cars*/
void drawCar2() {
	DrawSquare( x2 , y2, 25, colors[BLUE]);
	 DrawCircle(x2,y2, 6 , colors[BLACK]);
	 DrawCircle(x2+25,y2, 6 , colors[BLACK]);
	glutPostRedisplay();
	
}
void drawCar3(){
	DrawSquare( x3, y3, 25, colors[VIOLET]);
	DrawCircle(x3,y3, 6 , colors[BLACK]);
	 DrawCircle(x3+25,y3, 6 , colors[BLACK]);
	glutPostRedisplay();
	
}
void drawCar4(){
	DrawSquare( x4, y4, 25, colors[DARK_CYAN]);
	DrawCircle(x4,y4, 6 , colors[BLACK]);
	 DrawCircle(x4+25,y4, 6 , colors[BLACK]);
	glutPostRedisplay();
	
}
/******/

bool flag  = true;
bool flag2 = true;
bool flag3 = true;


void moveCar() {                       /*Movement of random cars*/

	
	if (x2 > 178 && flag) {
		x2 -= 10;
		cout << "going left";
		if(x2 < 180)	
			flag = false;

	}
	else if (x2 < 490 && !flag) {
		cout << "go right";
		x2 += 10;
		if (x2 > 485)
			flag = true;
	}
	//
	if (x3 > 298 && flag2) {
		x3 -= 10;
		cout << "going left";
		if(x3 < 300)
			
			flag2 = false;

	}
	else if (x3 < 570 && !flag2) {
		cout << "go right";
		x3 += 10;
		if (x3 > 560)
			flag2 = true;
}
//
       if (y4 > 298 && flag3) {
		y4 -= 10;
		cout << "going left";
		if(y4 < 300)
			
			flag3 = false;

	}
	else if (y4 < 570 && !flag3) {
		cout << "go right";
		y4 += 10;
		if (y4 > 560)
			flag3 = true;


 } 
 }           

/*
 * Main Canvas drawing function.
 * */
 /*Declerations*/
bool pess=true;
bool pess2=true;
bool pess3=true;
bool descheck=true;
bool descheck2=true;
bool descheck3=true;bool descheck4=true;bool descheck5=true;bool descheck6=true;
bool randDone = false;
bool pointOne = 0;
bool pointTwo = 0;
bool pointThree = 0;
bool space=false;bool stop=false;
string score;
int num = 0;
int condition;
int condition2;
int condition3;
void leaderboard();
/*******/


void grid(){ /***display grid***/

  //DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	    DrawLine( 1 , 1 ,  1 , 800 , 1 , colors[BLACK] );	
	for (int i =1 ; i <=20 ; i++)
	{
	     DrawLine( 40*i , 1 ,  40*i , 800 , 1 , colors[BLACK] );
	     
	     }
	 
}



void collision(){  /*Fucntions for car collision with buildings*/


//1///	 
        
	if(xI > 50 and xI<=75 and yI>=585 and yI<=645  )
	{
	xI-=10;
	}
	if(xI>=76 and xI<=190 and yI>=585 and yI<=645  )
	{
	xI+=10;
	}
	if(xI>=50 and yI>=640 and yI<=645 and xI<=190  )
	{
	yI+=10;
	}
	
	if(xI>=50 and yI>=582 and yI<=585 and xI<=190  )
	{
	yI-=10;
	}
//////	

///2//
       if(xI>=415 and yI>=585  and yI<645 and xI<=785 )
	{
	xI-=10;
	}
	if(xI>=415 and yI>=585 and yI<645 and xI<=785 )
	{
	xI+=10;
	}
	if(xI>=415 and yI>=585 and yI<645 and xI<=785 )
	{
	yI-=10;
	}
	if(xI>=415 and yI>=585 and yI<645 and xI<=785 )
	{
	yI+=10;
	}
	
	if(xI>=415 and yI>=640  and yI<=646 and xI<=785 )
	{
	yI+=10;
	}
	if(xI>=415 and yI>=640 and yI<=646 and xI<=785 )
	{
	yI-=10;
	}
	if(xI>=415 and yI>=640 and yI<=646 and xI<=785 )
	{
	xI-=10;
	}
	if(xI>=415 and yI>=640 and yI<=646 and xI<=785 )
	{
	xI+=10;
	}
	
/////3/	
       if(xI>=60 and yI>=430  and yI<490 and xI<=140 )
	{
	xI-=10;
	}
	if(xI>=60 and yI>=430 and yI<490 and xI<=140 )
	{
	xI+=10;
	}
	if(xI>=60 and yI>=430 and yI<490 and xI<=140 )
	{
	yI-=10;
	}
	if(xI>=60 and yI>=430 and yI<490 and xI<=140 )
	{
	yI+=10;
	}
	
	if(xI>=100 and yI>=350 and yI<480 and xI<=140 )
	{
	xI-=10;
	}
	
	
       if(xI>=60 and yI>=430  and yI<490 and xI<=140 )
	{
	yI+=10;
	}
	if(xI>140 and yI>=350 and yI<=488 and xI<=150 )
	{
	xI+=10;
	}
	
//////

////4/

        if(xI>=212 and yI>=430  and yI<490 and xI<=220 )
	{
	xI-=10;
	}
	if(xI>=212 and yI>=430 and yI<490 and xI<=320 )
	{
	yI+=10;
	}
	if(xI>=300 and yI>=490 and yI<580 and xI<=320 )
	{
	xI-=10;
	}
	if(xI>=300 and yI>=580 and yI<=581 and xI<=350 )
	{
	yI+=10;
	}
	if(xI>=350 and yI>=430  and yI<=575 and xI<=355 )
	{
	xI+=10;
	}
	if(xI>=220 and yI>=418 and yI<=420 and xI<=355 )
	{
	yI-=10;
	}
//////

///5//

       if(xI>=495 and yI>=360  and yI<=550 and xI<=520 )
	{
	xI-=10;
	}
	if(xI>505 and yI>=560  and yI<=565 and xI<=550 )
	{
	yI+=10;
	}
	if(xI>495 and yI>=360 and yI<=550 and xI<=558 )
	{
	xI+=10;
	}
	if(xI>=559 and yI>=479 and yI<=489 and xI<=620 )
	{
	yI+=10;
	}
	if(xI>=628 and yI>=424 and yI<=472 and xI<=638 )
	{
	xI+=10;
	}
	
	if(xI>=560 and yI>=421 and yI<=478 and xI<=620 )
	{
	yI-=10;
	}
	if(xI>=505 and yI>=340 and yI<=344 and xI<=550 )
	{
	yI-=10;
	}
	
//////

///6//

       if(xI>=692 and yI>=315  and yI<=559 and xI<=700 )
	{
	xI-=10;
	}
	if(xI>694 and yI>=560  and yI<=568 and xI<=750 )
	{
	yI+=10;
	}
	if(xI>694 and yI>=309 and yI<=310 and xI<=750 )
	{
	yI-=10;
	}
	if(xI>700 and yI>=315 and yI<=559 and xI<=758 )
	{
	xI+=10;
	}
	
//////

//7//

        if(xI>290 and yI>=250 and yI<=300 and xI<=300 )
	{
	xI-=10;
	}
	if(xI>=292 and yI>250 and yI<=308 and xI<=370 )
	{
	yI+=10;
	}
	if(xI>370 and yI>=310 and yI<=340 and xI<=380 )
	{
	xI-=10;
	}
	if(xI>=380 and yI>=340 and yI<350 and xI<=428 )
	{
	yI+=10;
	}
	if(xI>437 and yI>=250 and yI<=335 and xI<449 )
	{
	xI+=10;
	}
	if(xI>=294 and yI>240 and yI<=250 and xI<435 )
	{
	yI-=10;
	}
	
/////

////8//
       if(xI>=209 and yI>=86 and yI<=242 and xI<=214 )
	{
	xI-=10;
	}
	if(xI>=212 and yI>242 and yI<=260 and xI<=275 )
	{
	yI+=10;
	}
	if(xI>270 and yI>=86 and yI<=242 and xI<=280 )
	{
	xI+=10;
	}
	if(xI>=212 and yI>=72 and yI<86 and xI<=275 )
	{
	yI-=10;
	}
	
////

///9//
       if(xI>=331 and yI>=120 and yI<=170 and xI<=340 )
	{
	xI-=10;
	}
	if(xI>=340 and yI>174 and yI<181 and xI<=460 )
	{
	yI+=10;
	}
	if(xI>450 and yI>=181 and yI<=210 and xI<=460 )
	{
	xI-=10;
	}
	if(xI>=455 and yI>=210 and yI<=220 and xI<=518 )
	{
	yI+=10;
	}
	if(xI>510 and yI>=120 and yI<=220 and xI<=521 )
	{
	xI+=10;
	}
	if(xI>=334 and yI>=111 and yI<=120 and xI<=515 )
	{
	yI-=10;
	}
////

///10//
       if(xI>=98 and yI>=70 and yI<80 and xI<=150 )
	{
	yI+=10;
	}
	if(xI>88 and yI>=-5 and yI<=70 and xI<=98 )
	{
	xI-=10;
	}
	if(xI>98 and yI>=-5 and yI<=70 and xI<=160 )
	{
	xI+=10;
	}
	if(xI>=150 and yI>=180 and yI<=230 and xI<160 )
	{
	xI+=10;
	}
	if(xI>95 and yI>=210 and yI<=240 and xI<=150 )
	{
	yI+=10;
	}
	if(xI>90 and yI>=180 and yI<=230 and xI<=100 )
	{
	xI-=10;
	}
	if(xI>95 and yI>170 and yI<230 and xI<=150 )
	{
	yI-=10;
	}
	
////    

///11//
       if(xI>=580 and yI>=160 and yI<200 and xI<=800 )
	{
	yI+=10;
	}
	
////    
     
}
void GameDisplay()/**/{
 
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	
	

 

    
	/****Buildings****/
  
        //Red Square
	DrawSquare(80, 610, 41, colors[BLACK]);
	
	//RED Square
	DrawSquare( 120 , 610 ,41,colors[BLACK]);
	
        //RED Square
	DrawSquare( 159 ,610 ,41,colors[BLACK]);  
	//
	
	//
	//RED Square
	DrawSquare( 440 ,610 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 478 ,610 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 517 ,610 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 556 ,610 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 595 ,610 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 631 ,610 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 670 ,610 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 709 ,610 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 748 ,610 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 785 ,610 ,40,colors[BLACK]);
	//
	
	//
	//RED Square
	DrawSquare( 81 ,450 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 120 ,450 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 120 ,411 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 120 ,372 ,40,colors[BLACK]);
	//
	
	//
	//RED Square
	DrawSquare( 240 ,450 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 280 ,450 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 320 ,450 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 320 ,489 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 320 ,528 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 320 ,547 ,40,colors[BLACK]);
	//
	
	//
	
	//RED Square
	DrawSquare( 559 ,450 ,42,colors[BLACK]);
	
	//RED Square
	DrawSquare( 600 ,450 ,42,colors[BLACK]);
	
	//RED Square
	DrawSquare( 520 ,489 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 520 ,528 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 520 ,451 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 520 ,412 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 520 ,373 ,40,colors[BLACK]);
	//
	
	//
	//RED Square
	DrawSquare( 720 ,450 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 720 ,489 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 720 ,528 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 720 ,411 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 720 ,372 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 720 ,333 ,40,colors[BLACK]);
	
	//
	
	//RED Square
	DrawSquare( 320 ,270 ,41,colors[BLACK]);
	
	//RED Square
	DrawSquare( 359 ,270 ,41,colors[BLACK]);
	
	//RED Square
	DrawSquare( 399 ,270 ,41,colors[BLACK]);
	
	//RED Square
	DrawSquare( 399 ,309 ,41,colors[BLACK]);
	//
	
	//
	
	//RED Square
	DrawSquare( 240 ,220 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 240 ,181 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 240 ,142 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 240 , 103 ,40,colors[BLACK]);
	//
	
	//
	//RED Square
	DrawSquare( 360 ,140 ,41,colors[BLACK]);
	
	//RED Square
	DrawSquare( 399 ,140 ,41,colors[BLACK]);
	
	//RED Square
	DrawSquare( 439 , 140 ,41,colors[BLACK]);
	
	//RED Square
	DrawSquare( 480 , 140 ,41,colors[BLACK]);
	
	//RED Square
	DrawSquare( 480 ,179 ,41,colors[BLACK]);
	//
	
	//
	//RED Square
	DrawSquare( 600 , 179 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 638 , 179 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 677 , 179 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 716 , 179 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 755 , 179 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 794 , 179 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 600 , 140 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 600 , 101 ,40,colors[BLACK]);
	//
	
	//
	//RED Square
	DrawSquare( 120 , 40 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 120 , 1 ,40,colors[BLACK]);
	
	//RED Square
	DrawSquare( 120 , 200 ,40,colors[BLACK]);
	//
	
	/*Trees*/
	DrawCircle(497 , 675, 15 , colors[GREEN]);
	DrawSquare( 490 , 650 ,15,colors[BROWN]);
	//
	DrawCircle(300, 515, 15 , colors[GREEN]);
	DrawSquare( 292 , 488 ,15,colors[BROWN]);
	//
	//
	DrawCircle(140, 265, 15 , colors[GREEN]);
	DrawSquare( 132 , 240 ,15,colors[BROWN]);
	//
	DrawCircle(618, 425, 15 , colors[GREEN]);
	DrawSquare( 611 ,400 ,15,colors[BROWN]);
	//
	
       
       /** random destinations and pick and drop**/

 /*pessengers random destination*/
  if(!randDone)
	{
	
		int random=rand()%2;
  		if  (random==0){ 
  		
  		pointOne = true;
  		}
  		
  		else if(random==1){
  		
  		pointTwo = true;
  		}
  		
  
  		randDone = true;

	}
	

  /*Pick and drop */
  
    
   if (pess){
           if (space==true){
             if (xI>=410 && xI <= 460 && yI>=660 && yI <= 678){
                 
                 DrawCircle(900, 900, 8 , colors[BLACK]);
                 
                 condition =1;
                 pess= false;
                 }    
             }     
             space = false;     
    }
    
    if (pess){
   
                 DrawCircle(450, 674, 8 , colors[BLACK]);
                 pess=true;
                 }
                 
   if (pess2){
            if (space==true){
              if (xI>=575 && xI <= 635 && yI>=230 && yI <= 250){
              
                 DrawCircle(900, 900, 8 , colors[BLACK]);
                 condition2 =1;
                 pess2= false;
                   }
               }
               space = false;
    }
                
                
    if (pess2){
                 DrawCircle(622, 243, 8 , colors[BLACK]); 
                 pess2=true;
                 }
           
    if (pess3){
             if (space==true){
                 if (xI>=110 && xI <= 160 && yI>=295 && yI <= 345){
                 DrawCircle(900, 900, 8 , colors[BLACK]);
                 condition3 =1;
                 pess3= false;
                            }         
                 }
                  space = false;
    }   
           
                 
    if (pess3){
              DrawCircle(140, 320, 8 , colors[BLACK]);
              pess3=true;
                 }
                             
                            
                 if (condition ==1 ){
                 if(pointOne)
	{       
		DrawCircle(620, 672, 8 , colors[GREEN]);
		
	}
	
       else 
       {
               DrawCircle(100, 500, 8 , colors[GREEN]);
               
       }   

                 }
                 ////
                 
                    if (condition2 ==1 ){
                 if(pointOne)
	{       
		DrawCircle(200, 150, 8 , colors[GREEN]);	
	}
	      else if (pointTwo)
	
	{
		DrawCircle(300, 60, 8 , colors[GREEN]);
	}
    

                 }   
                 ////
                 
                   if (condition3 ==1 ){
                 if(pointOne)
	{       
		DrawCircle(100, 100, 8 , colors[GREEN]);
		
	}
	   else if (pointTwo)
	
	{
		  DrawCircle(600, 520, 8 , colors[GREEN]);
	}
    

                 }    
                 /*destination*/
                 
           if (descheck){
               if(stop==true) { 
             if (xI>=80 && xI <= 120 && yI>=480 && yI <= 520){
                 DrawCircle(100, 500, 8 , colors[WHITE]);
                 descheck = false;
              
                 }
                       
              } 
                
    }
        if (!descheck){
                  DrawCircle(100, 500, 8 , colors[WHITE]);
                 
              }
              
         if (descheck3){
             if(stop==true){
              if (xI>=580 && xI <= 640 && yI>=650 && yI <= 690){
                 DrawCircle(620, 672, 8 , colors[WHITE]);
                 descheck3 = false;
              
               
                 }  
           }
            
        }   
           if (!descheck3){  
                  DrawCircle(620, 672, 8 , colors[WHITE]);
               
              }    
              
          if (descheck4){
          if (stop==true){
          if (xI>=175 && xI<=230 && yI>=120 && yI<=170){
             DrawCircle(200, 150, 8 , colors[WHITE]);	
             descheck4=false;
          
            
                 }  
           }
              
        }   
           if (!descheck4){  
                  DrawCircle(200, 150, 8 , colors[WHITE]);
                 
              }
              
               if (descheck5){
               if (stop==true){
               if (xI>=280 && xI<= 325 && yI>=40 && yI<=80 ){
         	DrawCircle(300, 60, 8 , colors[WHITE]);
             descheck5=false;
          
                 }  
           }
             
       }    
           if (!descheck5){  
                 DrawCircle(300, 60, 8 , colors[WHITE]);
                
              } 
              
            if (descheck2){
            if (stop==true){
               if (xI>=75 && xI<=125 && yI>=80 && yI<=120){
                DrawCircle(100, 100, 8 , colors[WHITE]);
                 descheck2 = false;
              
                 }  
            } 
                    
         }      
            if (!descheck2){
                  
                  DrawCircle(100, 100, 8 , colors[WHITE]);
               
              }
              
            if (descheck6){
            if (stop==true){
               if (xI>=585 && xI<=625 && yI>=500 && yI<=540){
                 DrawCircle(600, 520, 8 , colors[WHITE]);
                 descheck6 = false;
            
                 }  
            }  
                     
       }        
            if (!descheck6){
                  
                  DrawCircle(600, 520, 8 , colors[WHITE]);
                 
              }   
                          
   ///

  /*Storing score in a file*/
  
     ofstream out ("file.txt");
  if (out.is_open ())
    {
      out <<score<<endl;

      out.close ();
    }



          /*Display score*/
          DrawString( 50, 700, score, colors[BLACK]);
          /***************/


     /**Fucntions calls**/

	  drawCar();
	  drawCar2();
	  drawCar3();
	  drawCar4();
	  grid();
	  collision();
     /*******************/	
	glutPostRedisplay();
	glutSwapBuffers(); // do not modify this line..
  
}



/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */
 
void Score(){

 string str = "score = ";
	    using std::to_string; 
             if (xI==280  && yI==490 ){
           	
	            num -= 10;
	            str+=to_string(num);
	            score = str;
           }
       ///
       if ( xI>=475 && xI <=480 && yI>=650 && yI<=670){
	   
	      num -= 4;
	       str+=to_string(num);
	       score = str;
	       
           }
          ///
          
           if ( xI==130  && yI>=240 && yI<=270){
	   
	      num -= 4;
	       str+=to_string(num);
	       score = str;
	       
           }
          ///
          
            if ( xI==600 && yI>=395 && yI<=425){
	   
	      num -= 4;
	       str+=to_string(num);
	       score = str;
	       
           }
           /*Car collision score*/
           
          ///  
          if(xI==x2 && yI>=380 && yI<=415)
             {
                num -= 2;
	       str+=to_string(num);
	       score = str;
             
             }
             
          ///
           
           if(xI==x3 && yI>=80 && yI<=115)
             {
                num -= 2;
	       str+=to_string(num);
	       score = str;
             
             }
             
          ///
          
            if(xI>=20 && xI<=60 && yI==y4)
             {
                num -= 2;
	       str+=to_string(num);
	       score = str;
             
             }
           
          ///
          
           /*Pessengers score*/
          
           if(xI==100 && yI>=495 && yI<=500){
               num += 10;
	       str+=to_string(num);
	       score = str;
	      
          }  
          
           if(xI>=585 && xI<=595 && yI>=500 && yI<=515){
               num += 10;
	       str+=to_string(num);
	       score = str;
	  
          }  
             
            if(xI==620 && yI>=655 && yI<=678){
               num += 10;
	       str+=to_string(num);
	       score = str;
	    
          }  
          
           if(xI>=175 && xI<=190 && yI>=175 && yI<=180){
               num += 10;
	       str+=to_string(num);
	       score = str;
	     
          }  
           
           if(xI>=290 && xI<=305 && yI>=55 && yI<=66){
               num += 10;
	       str+=to_string(num);
	       score = str;
	    
          }     
           
           if(xI>=75 && xI<=95 && yI>=98 && yI<=100){
               num += 10;
	       str+=to_string(num);
	       score = str;
	    
          }  
}
void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		xI -= 10;

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		xI += 10;
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		yI += 10;
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		yI -= 10;
	}
	   
	     /******/ 
             Score();

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/
	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}
        

	if (key==13){
	    glutDisplayFunc(GameDisplay); /**gamedisplay calling after pressing Enter key**/
	}
	
	if (key==32){   /*ASCII of spacebar*/
	    space=true;
	}
	if (key==32){
	    stop=true;
	}
	
	if (key==108){   /*ASCII of spacebar*/
	    glutDisplayFunc(leaderboard); 
	}
	
	glutPostRedisplay();	
}



/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here
	moveCar();

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
	 
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	
	glutPostRedisplay();
}


/*+
 * our gateway main function
 * */
void Menu(){   /****Dispaly menu****/

// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors

    DrawString( 330, 700, "RUSH HOUR!", colors[WHITE]);

    DrawString( 345, 400, "Start Game", colors[WHITE]);
    
    DrawString( 335, 300, "Leader Board", colors[WHITE]);
    
    DrawString( 355, 250, "Taxi Color", colors[WHITE]);
    
    DrawString( 315, 200, "RED", colors[RED]);
    
    DrawString( 395, 200, "YELLOW", colors[GOLD]);
     


glutPostRedisplay();
glutSwapBuffers(); // do not modify this line..

}

void leaderboard(){   /****Dispaly leaderboard****/

// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors

    
    DrawString( 335, 600, "Leader Board", colors[WHITE]);
    
    DrawString( 335, 300, "score = 0", colors[WHITE]);
     

glutPostRedisplay();
glutSwapBuffers(); // do not modify this line..

 
}



int main(int argc, char*argv[]) {

	int width = 800, height = 740; // i have set my window size 
      
       
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Rush Hour by Muneeb"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(Menu); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse
        
      
        
	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* RushHour_CPP_ */
