#ifndef COOKINGMENUBAR_HPP
#define COOKINGMENUBAR_HPP

#include "qcookbook.hpp"

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QWidget>
#include <vector>
#include <string>
class QAction;
class QMenu;
class QCookbook;
class QRecepy;

class CookingMenuBar : public QWidget
{
    Q_OBJECT

public:
    CookingMenuBar(QMainWindow *inMainWindow); // Constructor
    ~CookingMenuBar();                         // Destructor

public:
    QMainWindow  *mainWindow_;

private slots:
    // Declare function prototypes
    void openCookbookSlot();
    void openExtCookbookSlot();
//    void openRecepySlot();
//    void openNewRecepySlot();

public:
    // Declare function prototypes for creating actions and menus
    void createActions();
    void createCookbookActions();
    void createRecepyActions();
    void createNewRecepyActions();
    void createMenus();

    void addCookbookMenu(const char* name, QCookbook * openedBook);
    void addRecepyMenu(const char* name, QRecepy * openedRecepy);

    // Define menubar elements
    QMenu *cookingmenu_;

    // Define menubar and toolbar actions
    QAction *openCookbook_;
    QAction *openExtCookbook_;
    QAction *quit_;

    //Cookbook menu actions
    QAction *newRecepy_;
    QAction *loadRecepy_;
    QAction *listRecepies_;

    //Recepy menu actions
    QAction *nextStep_;
    QAction *previousStep_;
    QAction *showIngredients_;
    //New Recepy action
    QAction *saveRecepy_;
};

#endif // COOKINGMENUBAR_HPP
