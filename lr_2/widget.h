/* Для реализации отображения плейлиста, придется использовать QStandardItemModel.
 * В неё будут помещаться пути к аудио файлам, а также имена аудио файлов.
 * В первой колонке будет имя аудио файла, а во второй будет полный путь,
 * но данная колонка будет скрыта в объекте QTableView,
 * который будет отвечать за отображение плейлиста.
 *
 * Также пути к файлам в качестве медиа источников необходимо будет поместить в объект
 * QMediaPlaylist, который будет помещён в QMediaPlayer.
 *
 * Указатели на эти объекты помещаются в заголовочном файле окна приложения.
 * Также здесь присутствует слот
 * для обработки нажатия по кнопке добавления треков в плейлист.*/


#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStandardItemModel>
#include <QMediaPlayer>
#include <QMediaPlaylist>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_btn_add_clicked();              // Слот для обработки добавления треков через диалоговое окно

private:
    Ui::Widget *ui;
    QStandardItemModel  *m_playListModel;   // Модель данных плейлиста для отображения
    QMediaPlayer        *m_player;          // Проигрыватель треков
    QMediaPlaylist      *m_playlist;        // Плейлист проигрывателя
};

#endif // WIDGET_H
