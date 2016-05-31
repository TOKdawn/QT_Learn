//!!! Qt5
#include <QCoreApplication>
#include "newspaper.h"
#include "reader.h"
int main(int argc,char *argv[]){
    QCoreApplication app(argc,argv);
    Newspaper newspaper("Newspaperpp X");
    Reader reader;
    QObject::connect(&newspaper,&Newspaper::newPaper,
                     &reader   ,&Reader::receiveNewspaper);
    newspaper.send();
    return app.exec();
}
