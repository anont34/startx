#include "library.h"
#include "ui_library.h"

// ГЛАВНОЕ ОКНО

Library::Library(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Library)
{
    ui->setupUi(this);
// для появления и обновления списка при включении
    Library::on_booksButton_clicked();

}

Library::~Library()
{
    delete ui;
    Library::connClose();
}

//Обновление списка, кнопка "Обновить"
void Library::on_booksButton_clicked()
{
    tablBookt();
         tablBook->select();
         ui->tableView->setModel(tablBook);
}

//Кнопка добавить книгу
void Library::on_addBook_clicked()
{
    AddBook addbook;
    addbook.setModal(true); // диалоговое окно
    addbook.exec(); // вызов
}

//Удаление строки
void Library::on_del_clicked()
{
    tablBookt();
         tablBook->select();
    QModelIndex currentIndex = ui->tableView->selectionModel()->currentIndex();
    tablBook->removeRow(currentIndex.row());
    ui->tableView->setModel(tablBook);
}

//Сортировка по автору
void Library::on_sortAuth_clicked()
{
    tablBookt();
         //Сорт.1й колонки по алфавиту
         tablBook->sort(0, Qt::AscendingOrder);
         tablBook->select();
    ui->tableView->setModel(tablBook);
}

//Сортировка по году
void Library::on_sortYear_clicked()
{
    tablBookt();
         //Сорт.3й колонки по убыванию
         tablBook->sort(2, Qt::AscendingOrder);
         tablBook->select();
    ui->tableView->setModel(tablBook);
}
