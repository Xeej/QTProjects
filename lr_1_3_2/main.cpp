#include "datetime.h"
#include <QApplication>
#include <QLabel>
#include <QDate>
#include <QTime>
#include <QDateTime>
#include <QTime>
#include <QTimerEvent>

class BlinkLabel : public QLabel
{
private:
    bool m_bBlink;
    QString m_strText;

protected:
        virtual void timerEvent(QTimerEvent*)
    {
        m_bBlink = !m_bBlink;
        setText(m_bBlink ? m_strText : "");
    }
public:
        BlinkLabel(const QString& strText,
                         int nIntervel = 200,
                         QWidget* pwgt =0
                  )
            :QLabel(strText, pwgt)
            , m_bBlink(true)
            ,m_strText(strText)
        {
            startTimer(nIntervel);
        }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    BlinkLabel lbl("<FONT COLOR= RED> <CENTER>Blink</CENETER></FONT>");
    lbl.resize(200,60);
    lbl.show();

    return a.exec();
}
