#ifndef REGISTRATION_MAIN_WINDOW
#define REGISTRATION_MAIN_WINDOW

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>

class mainWindow : public QMainWindow{

Q_OBJECT

public: 
    mainWindow(QWidget* parent = nullptr); 

private: 
    QPushButton* m_button; 

}; 

#endif