#include<glut.h>
void init(void)
{
  glClearColor(1.0,1.0,1.0,0.0);
	glPointSize(8.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,400.0,0.0,300.0);	
}
void area(void)
{
//White Area
	glClear(GL_COLOR_BUFFER_BIT);
	    glBegin(GL_QUADS);
		glColor3f(1.0,1.0,1.0);
		glVertex2i(0,150);
		glVertex2i(1000,150);
		glVertex2i(1000,0);	
		glColor3f(1.0,1.0,1.0);
		glVertex2i(0,0);
		glEnd();
	glFlush();
//End White Area
//begin house
	    glBegin(GL_QUADS);
		glColor3f(0.0,0.3,0.0);
		glVertex2i(20,10);
		glVertex2i(150,135);
		glVertex2i(270,135);
		glVertex2i(405,10);	
		glEnd();
	glFlush();
	  glBegin(GL_QUADS);
		glColor3f(0.75,0.55,0.15);
		glVertex2i(320,160);
		glVertex2i(320,75);	
		glVertex2i(110,75);
		glVertex2i(110,160);
		glEnd();
	glFlush();
	  glBegin(GL_QUADS);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(188,140);
		glVertex2i(188,75);	
		glVertex2i(115,75);
		glVertex2i(115,140);
		glEnd();
	glFlush();

	  glBegin(GL_QUADS);
		glColor3f(0.35,0.30,0.35);
		glVertex2i(187,138);
		glVertex2i(187,76);	
		glVertex2i(118,76);
		glVertex2i(118,138);
		glEnd();
	glFlush();
	  glBegin(GL_QUADS);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(155,78);
		glVertex2i(155,76);	
		glVertex2i(151,76);
		glVertex2i(151,78);
		glEnd();
	glFlush();

   glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(188,160);
		glVertex2i(188,72);	
	    glVertex2i(178,72);
		glVertex2i(178,160);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(250,160);
		glVertex2i(250,72);	
	    glVertex2i(240,72);
		glVertex2i(240,160);
		glEnd();
	glFlush();
//windows
	  glBegin(GL_QUADS);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(318,148);
		glVertex2i(318,100);	
		glVertex2i(250,100);
		glVertex2i(250,148);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(272,146);
		glVertex2i(272,102);	
		glVertex2i(252,102);
		glVertex2i(252,146);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(294,146);
		glVertex2i(294,102);	
		glVertex2i(274,102);
		glVertex2i(274,146);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(316,146);
		glVertex2i(316,102);	
		glVertex2i(296,102);
		glVertex2i(296,146);
		glEnd();
	glFlush();
//step of the house
	 glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(260,66);
		glVertex2i(260,62);	
	    glVertex2i(168,62);
		glVertex2i(168,66);
		glEnd();
	glFlush();
	 glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(264,64);
		glVertex2i(264,60);	
	    glVertex2i(164,60);
		glVertex2i(164,64);
		glEnd();
	glFlush();
	 glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(260,66);
		glVertex2i(250,72);	
	    glVertex2i(178,72);
		glVertex2i(168,66);
		glEnd();
	glFlush();
	 glBegin(GL_QUADS);
		glColor3f(0.60,0.40,0.25);
		glVertex2i(259,65);
		glVertex2i(249,71);	
	    glVertex2i(179,71);
		glVertex2i(169,65);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(188,85);
		glVertex2i(188,72);	
	    glVertex2i(240,72);
		glVertex2i(240,85);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(0.60,0.40,0.25);
		glVertex2i(188,84);
		glVertex2i(188,77);	
	    glVertex2i(240,77);
		glVertex2i(240,84);
		glEnd();
	glFlush();
//door.
	glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(200,147);
		glVertex2i(200,84);	
	    glVertex2i(228,84);
		glVertex2i(228,147);
		glEnd();
	glFlush();
		glBegin(GL_QUADS);
		glColor3f(0.60,0.40,0.25);
		glVertex2i(201,146);
		glVertex2i(201,85);	
	    glVertex2i(227,85);
		glVertex2i(227,146);
		glEnd();
	glFlush();
		glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(201,117);
		glVertex2i(201,115);	
	    glVertex2i(204,115);
		glVertex2i(204,117);
		glEnd();
	glFlush();
//roof of the house
 glBegin(GL_QUADS);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(338,160);
		glVertex2i(338,200);	
		glVertex2i(90,200);
		glVertex2i(90,160);
		glEnd();
	glFlush();
	  glBegin(GL_QUADS);
		glColor3f(1.75,0.55,0.15);
		glVertex2i(337,161);
		glVertex2i(337,199);	
		glVertex2i(91,199);
		glVertex2i(91,161);
		glEnd();
	glFlush();
	
	  	  glBegin(GL_QUADS);
		glColor3f(1.75,0.55,0.15);
		glVertex2i(285,260);
		glVertex2i(285,200);	
		glVertex2i(145,200);
		glVertex2i(145,260);
		glEnd();
	glFlush();
	  	  glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(280,260);
		glVertex2i(280,220);	
		glVertex2i(150,220);
		glVertex2i(150,260);
		glEnd();
	glFlush();
	  	  glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(168,260);
		glVertex2i(168,221);	
		glVertex2i(151,221);
		glVertex2i(151,260);
		glEnd();
	glFlush();
	  	  glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(169,260);
		glVertex2i(169,221);	
		glVertex2i(186,221);
		glVertex2i(186,260);
		glEnd();
	glFlush();
		  glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(204,260);
		glVertex2i(204,221);	
		glVertex2i(187,221);
		glVertex2i(187,260);
		glEnd();
	glFlush();
		  glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(205,260);
		glVertex2i(205,221);	
		glVertex2i(222,221);
		glVertex2i(222,260);
		glEnd();
	glFlush();
		  glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(240,260);
		glVertex2i(240,221);	
		glVertex2i(223,221);
		glVertex2i(223,260);
		glEnd();
	glFlush();
	  glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(241,260);
		glVertex2i(241,221);	
		glVertex2i(258,221);
		glVertex2i(258,260);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(259,260);
		glVertex2i(259,221);	
		glVertex2i(278,221);
		glVertex2i(278,260);
		glEnd();
	glFlush();
//second roof of the house
	glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(125,260);
		glVertex2i(125,297);	
		glVertex2i(305,297);
		glVertex2i(305,260);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(1.75,0.55,0.15);
		glVertex2i(126,261);
		glVertex2i(126,296);	
		glVertex2i(304,296);
		glVertex2i(304,261);
		glEnd();
	glFlush();
		
	////////end house////

}
void house(void)
{
	glBegin(GL_QUADS);
		glColor3f(0.75,0.55,0.15);
		glVertex2i(270,110);
		glVertex2i(270,25);	
		glVertex2i(60,25);
		glVertex2i(60,110);
		glEnd();
	glFlush();
	  glBegin(GL_QUADS);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(138,90);
		glVertex2i(138,25);	
		glVertex2i(65,25);
		glVertex2i(65,90);
		glEnd();
	glFlush();

	  glBegin(GL_QUADS);
		glColor3f(0.35,0.30,0.35);
		glVertex2i(137,88);
		glVertex2i(137,26);	
		glVertex2i(68,26);
		glVertex2i(68,88);
		glEnd();
	glFlush();
	  glBegin(GL_QUADS);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(105,28);
		glVertex2i(105,26);	
		glVertex2i(101,26);
		glVertex2i(101,28);
		glEnd();
	glFlush();

   glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(138,110);
		glVertex2i(138,22);	
	    glVertex2i(128,22);
		glVertex2i(128,110);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(200,110);
		glVertex2i(200,22);	
	    glVertex2i(190,22);
		glVertex2i(190,110);
		glEnd();
	glFlush();
//windows
	  glBegin(GL_QUADS);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(268,98);
		glVertex2i(268,50);	
		glVertex2i(200,50);
		glVertex2i(200,98);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(222,96);
		glVertex2i(222,52);	
		glVertex2i(202,52);
		glVertex2i(202,96);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(244,96);
		glVertex2i(244,52);	
		glVertex2i(224,52);
		glVertex2i(224,96);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(266,96);
		glVertex2i(266,52);	
		glVertex2i(246,52);
		glVertex2i(246,96);
		glEnd();
	glFlush();
//step of the house
	 glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(210,16);
		glVertex2i(210,12);	
	    glVertex2i(118,12);
		glVertex2i(118,16);
		glEnd();
	glFlush();
	 glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(214,14);
		glVertex2i(214,10);	
	    glVertex2i(114,10);
		glVertex2i(114,14);
		glEnd();
	glFlush();
	 glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(210,16);
		glVertex2i(200,22);	
	    glVertex2i(128,22);
		glVertex2i(118,16);
		glEnd();
	glFlush();
	 glBegin(GL_QUADS);
		glColor3f(0.60,0.40,0.25);
		glVertex2i(209,15);
		glVertex2i(199,21);	
	    glVertex2i(129,21);
		glVertex2i(119,15);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(138,35);
		glVertex2i(138,22);	
	    glVertex2i(190,22);
		glVertex2i(190,35);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(0.60,0.40,0.25);
		glVertex2i(138,34);
		glVertex2i(138,27);	
	    glVertex2i(190,27);
		glVertex2i(190,34);
		glEnd();
	glFlush();
//door.
	glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(150,97);
		glVertex2i(150,34);	
	    glVertex2i(178,34);
		glVertex2i(178,97);
		glEnd();
	glFlush();
		glBegin(GL_QUADS);
		glColor3f(0.60,0.40,0.25);
		glVertex2i(151,96);
		glVertex2i(151,35);	
	    glVertex2i(177,35);
		glVertex2i(177,96);
		glEnd();
	glFlush();
		glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(151,67);
		glVertex2i(151,65);	
	    glVertex2i(154,65);
		glVertex2i(154,67);
		glEnd();
	glFlush();
//roof of the house
 glBegin(GL_QUADS);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(288,110);
		glVertex2i(288,150);	
		glVertex2i(40,150);
		glVertex2i(40,110);
		glEnd();
	glFlush();
	  glBegin(GL_QUADS);
		glColor3f(1.75,0.55,0.15);
		glVertex2i(287,111);
		glVertex2i(287,149);	
		glVertex2i(41,149);
		glVertex2i(41,111);
		glEnd();
	glFlush();
	  	  glBegin(GL_QUADS);
		glColor3f(1.75,0.55,0.15);
		glVertex2i(235,210);
		glVertex2i(235,150);	
		glVertex2i(95,150);
		glVertex2i(95,210);
		glEnd();
	glFlush();
	  	  glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(230,210);
		glVertex2i(230,170);	
		glVertex2i(100,170);
		glVertex2i(100,210);
		glEnd();
	glFlush();
	  	  glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(118,210);
		glVertex2i(118,171);	
		glVertex2i(101,171);
		glVertex2i(101,210);
		glEnd();
	glFlush();
	  	  glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(119,210);
		glVertex2i(119,171);	
		glVertex2i(136,171);
		glVertex2i(136,210);
		glEnd();
	glFlush();
		  glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(154,210);
		glVertex2i(154,171);	
		glVertex2i(137,171);
		glVertex2i(137,210);
		glEnd();
	glFlush();
		  glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(155,210);
		glVertex2i(155,171);	
		glVertex2i(172,171);
		glVertex2i(172,210);
		glEnd();
	glFlush();
		  glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(190,210);
		glVertex2i(190,171);	
		glVertex2i(173,171);
		glVertex2i(173,210);
		glEnd();
	glFlush();
	  glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(191,210);
		glVertex2i(191,171);	
		glVertex2i(208,171);
		glVertex2i(208,210);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(1.0,3.2,2.1);
		glVertex2i(209,210);
		glVertex2i(209,171);	
		glVertex2i(228,171);
		glVertex2i(228,210);
		glEnd();
	glFlush();
//second roof of the house
	glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.1);
		glVertex2i(75,210);
		glVertex2i(75,247);	
		glVertex2i(255,247);
		glVertex2i(255,210);
		glEnd();
	glFlush();
	glBegin(GL_QUADS);
		glColor3f(1.75,0.55,0.15);
		glVertex2i(76,211);
		glVertex2i(76,246);	
		glVertex2i(254,246);
		glVertex2i(254,211);
		glEnd();
	glFlush();
//End House		  
}  



void keyboard (unsigned char key,int x, int y)
{
	switch (key)
	{
		case 'h':
		glutIdleFunc(house);
		glutPostRedisplay();
		break;
		
	}
}

void main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(1100,680);
	glutCreateWindow("House");
    init();
	glutDisplayFunc(area);
	glutKeyboardFunc (keyboard);
	glutPostRedisplay();
	glutMainLoop();

}
