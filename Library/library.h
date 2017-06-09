    #ifndef LIBRARY_H
    #define LIBRARY_H

    #include <QMainWindow>
    #include <QtSql>
    #include <QDebug>
    #include <QFileInfo>
    #include <QMessageBox>
    #include "addbook.h"

    namespace Ui {
    class Library;
    }

    class Library : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit Library(QWidget *parent = 0);
        ~Library();

        // функция отключения от бд
        void connClose()
        {
            mydb.close();
            mydb.removeDatabase(QSqlDatabase::defaultConnection);
            qDebug()<<("!Close connect!");
        }
        //Метод подключения к бд
        bool connOpen()
        {
            mydb = QSqlDatabase::addDatabase("QSQLITE"); // драйвер для СУБД
            mydb.setDatabaseName("D:/baselite.db");

            //проверка соеденения с бд
            if(!mydb.open()){
                qDebug()<<("Fail connect!");
                return false;
            }
            else{
                qDebug()<<("Connected...");
                return true;
            }
        }
        // Удобная функция для экономии места, сразу подключается к бд
        // и выбирает пока единственную таблицу
        QSqlTableModel *tablBookt()
        {
            Library::connOpen();
            tablBook = new QSqlTableModel();
                 tablBook->setTable("Книги");
            return tablBook;
        }


    private slots:

        void on_booksButton_clicked();

        void on_addBook_clicked();

        void on_del_clicked();

        void on_sortAuth_clicked();

        void on_sortYear_clicked();

    private:
        Ui::Library *ui;
        QSqlDatabase mydb;
        QSqlTableModel *tablBook;

    };

    #endif // LIBRARY_H
