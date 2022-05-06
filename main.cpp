#include "frmMain.h"
#include <QApplication>
#include "frmMain.h"
#include "quiwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setFont(QFont("Microsoft Yahei", 9));
    a.setWindowIcon(QIcon(":/main.ico"));

    QUIWidget::setCode();
    QUIWidget::setTranslator(":/image/qt_zh_CN.qm");
    QUIWidget::setTranslator(":/image/widgets.qm");


    //读取配置文件
    //QUIConfig::ConfigFile = QString("%1/%2").arg(QUIWidget::appPath()).arg("qui_config.ini");
    //QUIConfig::ReadConfig();

    QUIWidget qui;
    FrmMain *creator = new FrmMain();

    //设置主窗体
    qui.setMainWidget(creator);
    QObject::connect(&qui, SIGNAL(changeStyle(QString)), creator, SLOT(changeStyle(QString)));


    qui.setTitle("智能访客管理平台");

//    设置标题文本居中
   qui.setAlignment(Qt::AlignCenter);

    //设置窗体可拖动大小
    qui.setSizeGripEnabled(true);

    qui.setWindowState(Qt::WindowMaximized);

    //设置换肤下拉菜单可见
    qui.setVisible(QUIWidget::BtnMenu, true);

//    qui.setVisible(QUIWidget::Lab_Ico, false);

//    qui.setVisible(QUIWidget::BtnMenu_Min, false);
//    qui.setVisible(QUIWidget::BtnMenu_Max, false);
//    qui.setVisible(QUIWidget::BtnMenu_Normal, false);
//    qui.setVisible(QUIWidget::BtnMenu_Close, false);

    //    //设置标题栏高度
        //qui.setTitleHeight(10);

    //设置按钮宽度
    //    qui.setBtnWidth(50);

    //    //设置左上角图标-图形字体
    //    qui.setIconMain(QChar(0xf099), 11);

    //    //设置左上角图标-图片文件
    //    qui.setPixmap(QUIWidget::Lab_Ico, ":/main.ico");

    QUIWidget::setStyle(QUIWidget::Style_FlatBlack);
    qui.show();

    return a.exec();
}
