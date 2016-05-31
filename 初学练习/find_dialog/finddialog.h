#ifndef FINDDIALOG_H
#define FINDDIALOG_H
#include <QDialog>
#include <QApplication>
class QCheckBox;
class QLabel;
class QLineEdit;
class FindDialog : public QDialog{
    Q_OBJECT;
public:
    FindDialog(QWidget *parent = 0);//设置父窗体,无父窗体
signals://信号量
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str,Qt::CaseSensitivity cs);
private slots://槽
    void findClicked();
    void enableFindButten(const QString &text);
private:
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;
    QPushButton *findButton;
    QPushButton *closeButton;
};

#endif // FINDDIALOG_H
