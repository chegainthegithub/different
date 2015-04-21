#define WIN32
#include <FL\Fl.H>
#include <FL\Fl_Window.H>
#include <FL\Fl_Button.H>
#include <FL\Fl_Input.H>

#include <iostream>

using namespace std;

class MyWindow:public Fl_Window
{
	Fl_Button *_btn1;
	Fl_Input *_inpt1;
	static void MyCallBack(Fl_Widget* window,void*para)
{
	std::cout <<"stavj lolita esli ti ne rijiy)))" << std::endl;
	std::cout <<"para = " << (Fl_Input*)para << std :: endl;
	std::cout <<"string input = " <<  ((Fl_Input*)para)->value()<<endl;
}
public:
	MyWindow(int w,int h,const char* caption):Fl_Window(w,h,caption)
	{
		_btn1  = new Fl_Button(50,90,200,175,caption);
		_inpt1 = new Fl_Input(10,10,10,10);
		_btn1 -> callback(MyCallBack,_inpt1);
		Fl_Window *window = new Fl_Window(w,h,caption);
	}
};
class MyMainWindow:public Fl_Window
{
	Fl_Button *_btn1;
	Fl_Input *_inpt1;
	static void MyCallBack(Fl_Widget* window,void*para)
{
	std::cout <<"stavj lolita esli ti ne rijiy)))" << std::endl;
	std::cout <<"para = " << (Fl_Input*)para << std :: endl;
	std::cout <<"string input = " <<  ((Fl_Input*)para)->value()<<endl;
}
	static MyMainWindow *_singleton;
public:
	static MyMainWindow *getSingleton()
	{
		if (_singleton==NULL)
			_singleton = new MyMainWindow(600,600,"Singleton)");
			return _singleton;

	}
	MyMainWindow(int w,int h,const char *caption):Fl_Window(w,h,caption)
	{
		_btn1  = new Fl_Button(50,90,200,175,caption);
		_inpt1 = new Fl_Input(10,10,10,10);
		_btn1 -> callback(MyCallBack,_inpt1);
		Fl_Window *window = new Fl_Window(w,h,caption);
	}
};

void MyCallBack1(MyWindow* window,void*para)
{

	std::cout <<"stavj lolita esli ti ne rijiy)))" << std::endl;
	std::cout <<"para = " << (Fl_Input*)para << std :: endl;
	std::cout <<"string input = " <<  ((Fl_Input*)para)->value()<<endl;
}

MyMainWindow* MyMainWindow::_singleton = 0;

int main(int argc ,char *argv[])
{
	MyMainWindow *mainwindow = MyMainWindow::getSingleton();
	
	/*cout << "LOL "<<endl;
	Fl_Window *window = new Fl_Window(300,180);
	Fl_Button *button = new Fl_Button(10,10,100,25,"Press");
	Fl_Input *input = new Fl_Input(10,40,100,25);
	button->callback(MyCallBack);*/
	mainwindow->show(argc,argv);
	MyMainWindow *mainwindow2 = MyMainWindow::getSingleton();
	mainwindow2->show(argc,argv);
	return Fl::run();
}
