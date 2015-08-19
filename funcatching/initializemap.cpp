#include "initializemap.h"
#include "ui_initializemap.h"
#include "initialmap_stackmap.h"

initializemap::initializemap(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::initializemap)
{
    map_num = 0;
    ui->setupUi(this);

    initialmap_stackmap *current_stack_map = new initialmap_stackmap;
    ui->stackedWidget->insertWidget(map_num,current_stack_map);
    ui->stackedWidget->setCurrentIndex(map_num);
    total_stack_num.insert(map_num,current_stack_map);
    connect(current_stack_map->ui->directoryButton,SIGNAL(clicked()),this,SLOT(on_currentstack_directory_clicked()));
}

initializemap::~initializemap()
{
    delete ui;
}

void initializemap::on_listWidget_currentRowChanged(int currentRow)
{
    ui->stackedWidget->setCurrentIndex(currentRow);
}

void initializemap::on_currentstack_directory_clicked()
{
    ui->listWidget->currentItem()->setText(QString::number(++map_num));
    initialmap_stackmap *current_stack_map = new initialmap_stackmap;
    ui->listWidget->addItem("new");
    ui->stackedWidget->insertWidget(map_num,current_stack_map);
    total_stack_num.insert(map_num,current_stack_map);
    connect(current_stack_map->ui->directoryButton,SIGNAL(clicked()),this,SLOT(on_currentstack_directory_clicked()));
}
