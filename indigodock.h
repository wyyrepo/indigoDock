#ifndef INDIGOCONTAINER_H
#define INDIGOCONTAINER_H

#include <QMainWindow>
#include <QListWidget>
#include <QDockWidget>
#include "indigopanel.h"

class IndigoDock: public QMainWindow
{
    Q_OBJECT
public:
    void createIndigoPanel(QString title);
    //void addIndigoPanel(IndigoPanel* panel);

    IndigoDock(QWidget* parent = 0);
    ~IndigoDock();
protected:
    bool event ( QEvent * event );
    bool eventFilter( QObject * watched, QEvent * event );

private:
signals:

public slots:
    void dragEnded();
};

#endif // INDIGOCONTAINER_H
