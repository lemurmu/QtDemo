#ifndef FrmMain_H
#define FrmMain_H

#include <QDialog>

namespace Ui {
class FrmMain;
}

class FrmMain : public QDialog
{
    Q_OBJECT

public:
    explicit FrmMain(QWidget *parent = nullptr);
    ~FrmMain();

private:
    Ui::FrmMain *ui;
    bool max;
    QRect location;
    QList<QWidget *> frms;

private slots:
    void initFrom();//初始化主窗体
    void initTreeWidget();//初始化树控件
    void initPanelWidget();//初始化设备面板
    void initTableWidget();//初始化表格
    void initMenu();
    void doMenu();

private slots:
    void on_btnMenu_Min_clicked();
    void on_btnMenu_Max_clicked();
    void on_btnMenu_Close_clicked();
};

#endif // FrmMain_H
