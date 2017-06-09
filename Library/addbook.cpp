#include "addbook.h"
#include "ui_addbook.h"
#include "library.h"
#include <QMessageBox>

// Окно добавление книги

AddBook::AddBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);

}

AddBook::~AddBook()
{
    delete ui;
}

//Кнопка добавить книгу(Добавление)
void AddBook::on_addBookBtn_clicked()
{
    QString author,name,year,quant;

    //получение данных с строк в переменные
    author=ui->inpAB->text();
    name=ui->inpNB->text();
    year=ui->inpGOD->text();
    quant=ui->inpKol->text();

    //sql запрос на добавление
    QSqlQuery qry;
    qry.prepare("INSERT INTO Книги (Автор,Название,Год,Количество) "
                "VALUES ('"+author+"','"+name+"','"+year+"','"+quant+"')");

    // проверка на добавление книги
    if(qry.exec( ))
    {
        QMessageBox::information(this,tr("Save"),tr("Saved"));
        close();
    }
    else
    {
        QMessageBox::critical(this,tr("Error"),qry.lastError().text());
    }
}

//кнопка закрыть (добавление книги)
void AddBook::on_closeWind_clicked()
{
    close();
}
