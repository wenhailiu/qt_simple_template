#include "mainWindow.h"

#include <QLayout>

mainWindow::mainWindow(QWidget* parent): QMainWindow(parent){
    QWidget* centreWidget = new QWidget(this); 
    this->setCentralWidget(centreWidget); 

    m_button = new QPushButton("test", this); 
}