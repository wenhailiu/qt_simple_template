#include <QApplication>

#include "mainWindow.h"

int main(int argc, char *argv[]){

    QApplication app(argc, argv); 

    mainWindow Window; 
    Window.show(); 

    return app.exec(); 
}