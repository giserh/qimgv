#ifndef SAVECONFIRMOVERLAY_H
#define SAVECONFIRMOVERLAY_H

#include "gui/customwidgets/floatingwidget.h"

namespace Ui {
class SaveConfirmOverlay;
}

class SaveConfirmOverlay : public FloatingWidget
{
    Q_OBJECT
public:
    explicit SaveConfirmOverlay(QWidget *parent = 0);
    ~SaveConfirmOverlay();

signals:
    void saveClicked();
    void saveAsClicked();
    void discardClicked();

private:
    Ui::SaveConfirmOverlay *ui;
};

#endif // SAVECONFIRMOVERLAY_H
