#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QPushButton button("&Quit");
    QObject::connect(&button,&QPushButton::clicked,&QApplication::quit);
    /*
    connect(sender,   signal, receiver, slot);
    这是我们最常用的形式。connect() 一般会使用前面四个参数，
    第一个是发出信号的对象，第二个是发送对象发出的信号，第三个是接收信号的对象，
    第四个是接收对象在接收到信号之后所需要调用的函数。也就是说，当 sender 发出了 signal 信号之后，
    会自动调用 receiver 的 slot 函数。
    */
    /*Connection的五种重载
    QMetaObject::Connection connect(const QObject *, const char *,
                                const QObject *, const char *,
                                Qt::ConnectionType);

    QMetaObject::Connection connect(const QObject *, const QMetaMethod &,
                                const QObject *, const QMetaMethod &,
                                Qt::ConnectionType);

    QMetaObject::Connection connect(const QObject *, const char *,
                                const char *,
                                Qt::ConnectionType) const;

    QMetaObject::Connection connect(const QObject *, PointerToMemberFunction,
                                const QObject *, PointerToMemberFunction,
                                Qt::ConnectionType)

    QMetaObject::Connection connect(const QObject *, PointerToMemberFunction,
                                Functor);
    */
    button.show();

    return app.exec();
}
