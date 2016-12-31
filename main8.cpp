#include <stdio.h>
#include <winbgim.h>
#include <conio.h>
using namespace std;

int main()
{
	initwindow(1200,700); // khoi tao window co chieu dai x va chieu rong y.
	setwindowtitle("He Thong Gia Lap Cay ATM"); // Thiet lap tieu de cho window
	
	//Viet CHuoi HE THONG GIA LAP ATM.
	setcolor(4); // mau do 
	settextstyle(0,0,3);
	outtextxy(310,50,"- HE THONG GIA LAP ATM -");
	
	//Toan bo khung chu nhat.
	setcolor(1); // Mau xanh duong cho duong ve.
	setlinestyle(0,4,9); // Duong ve lien - bong.
	line(300,100,900,100); // Cac duong ve.
	line(300,100,300,400);
	line(900,100,900,400);
	line(300,400,900,400);
	
	setcolor(9);
	setlinestyle(1,2,1);
	line(310,130,890,130); //  net gach chan dut khuc cho ngan hang hoc vien ki thuat mat ma
	
	
	setcolor(14); // MAU VANG cho Ngan hang hoc vien ki thuat mat ma.
	settextstyle(0,0,1); // font, co chu.
	outtextxy(370,115," * * * * * NGAN HANG HOC VIEN KY THUAT MAT MA * * * * *");
	
	setcolor(5);
	outtextxy(480,134,"THUC HIEN: TRAN VAN HUY HOANG");
	
	// Phan rut tien:
	setcolor(1);
	setlinestyle(0,1,1);
	rectangle(330,165,515,215); //3 o ben trai.
	rectangle(330,245,515,295);
	rectangle(330,325,515,375);
	
	rectangle(685,165,870,215); //3 o ben phai.
	rectangle(685,245,870,295);
	rectangle(685,325,870,375);
	
	setcolor(8);
	settextstyle(0,0,2);
	outtextxy(360,190,"500.000");
	outtextxy(340,270,"1.000.000");
	outtextxy(340,350,"2.000.000");
	outtextxy(695,190,"5.000.000");
	outtextxy(695,270,"10.000.000");
	outtextxy(705,350,"So khac..");
	
	//Khung cham dut khuc ben trong khung chu nhat.
	setcolor(9); 
	setlinestyle(1,2,1);
	rectangle(305,105,895,395);
	
	
	//Phan ban phim.
	setcolor(1);
	setlinestyle(3,10,1);
	// Hang doc thu 2
	settextstyle(0,0,2);
	outtextxy(595,445,"4");
	outtextxy(595,500,"5");
	outtextxy(595,555,"6");
	outtextxy(595,610,"0");
	rectangle(580,430,620,470);
	rectangle(580,485,620,525);
	rectangle(580,540,620,580);
	rectangle(580,595,620,635); 
    //Hang doc thu 1.
    settextstyle(0,0,2);
    outtextxy(515,445,"1");
	outtextxy(515,500,"2");
	outtextxy(515,555,"3");
	outtextxy(515,610,"*");
    rectangle(500,430,540,470);
	rectangle(500,485,540,525);
	rectangle(500,540,540,580);
	rectangle(500,595,540,635);	
	//Hang doc thu 3.
	settextstyle(0,0,2);
	outtextxy(675,445,"7");
	outtextxy(675,500,"8");
	outtextxy(675,555,"9");
	outtextxy(675,610,"#");
	rectangle(660,430,700,470);
	rectangle(660,485,700,525);
	rectangle(660,540,700,580);
	rectangle(660,595,700,635);
	
	// Phan Lua chon 2 ben: A B C D E F.
	//sUON trai.
	settextstyle(0,0,2);  //bi du
	outtextxy(245,185,"A");
	outtextxy(245,265,"B");
	outtextxy(245,345,"C");
	rectangle(230,170,270,210);
	rectangle(230,250,270,290);
	rectangle(230,330,270,370);
	//Suon phai
	outtextxy(945,185,"D");
	outtextxy(945,265,"E");
	outtextxy(945,345,"F");
	rectangle(930,170,970,210);
	rectangle(930,250,970,290);
	rectangle(930,330,970,370); 
	
	
	delay(30000); // cho chuong trinh ngu trong 30s
	getch();
	return 0;
	
}
