//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

#ifndef UPDATEFORM_H
#define UPDATEFORM_H

#include <QDialog>
#include "webserverquery.h"

namespace Ui
{
    class UpdateForm;
}

namespace Huggle
{
    /*!
     * \brief Update form is shown when there is an update for huggle
     * This form may work on some platforms only
     */
    class UpdateForm : public QDialog
    {
        Q_OBJECT

    public:
        explicit UpdateForm(QWidget *parent = 0);
        ~UpdateForm();

    private:
        Ui::UpdateForm *ui;
    };
}
#endif // UPDATEFORM_H