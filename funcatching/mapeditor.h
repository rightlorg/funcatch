#ifndef MAPEDITOR_H
#define MAPEDITOR_H

#include <QMainWindow>
#include <QtGui>
#include <ui_mapeditor.h>
#include <QLabel>

class QMenuBar;

namespace Ui {
    class MapEditor;
}

class MapEditor : public QMainWindow
{
    Q_OBJECT

public:
   explicit MapEditor(QWidget *parent = 0);
   ~MapEditor();
private slots:
   void openFile();
   void saveFile();
   void quitFile();
   void newFile();
   void on_treeWidget_activated(const QModelIndex &index);

   void on_treeWidget_clicked(const QModelIndex &index);

private:
   void createToolBar();
   void createMenuBar();
   void createStatusBar();
   QMenuBar *menuBar;
   QString filename;
   QLabel *statusLabel;
   QMenuBar *menubar;
   QMenu *fileMenu;
   QMenu *toolMenu;
   //menubar  action
   QAction *actionNew;
   QAction *actionOpen;
   QAction *actionSave;
   QAction *actionQuit;
   Ui::MapEditor *ui;
};

#endif // MAPEDITOR_H
