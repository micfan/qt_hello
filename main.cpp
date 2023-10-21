// CMakeProject2.cpp : Defines the entry point for the application.
//

#include "main.h"

#include <QCoreApplication>
#include <QApplication>
#include <QDebug>
#include <QWidget>
#include <QPushButton>

using namespace std;

int main(int argc, char** argv)
{
	// cout << "Hello world" << endl;
	QApplication app(argc, argv);

	// qDebug() << "hello world";

	QWidget window;
	window.setWindowTitle("Hello world !");
	window.show();

	QPushButton button("Hello world !");
	button.setParent(&window);
	button.show();

	return app.exec();
}