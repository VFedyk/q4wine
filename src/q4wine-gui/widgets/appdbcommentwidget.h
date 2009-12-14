/***************************************************************************
 *   Copyright (C) 2008 by Malakhov Alexey                                 *
 *   brezerk@gmail.com                                                     *
 *                                                                         *
 *   This program is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 *                                                                         *
 *   In addition, as a special exception, the copyright holders give       *
 *   permission to link the code of this program with any edition of       *
 *   the Qt library by Trolltech AS, Norway (or with modified versions     *
 *   of Qt that use the same license as Qt), and distribute linked         *
 *   combinations including the two.  You must obey the GNU General        *
 *   Public License in all respects for all of the code used other than    *
 *   Qt.  If you modify this file, you may extend this exception to        *
 *   your version of the file, but you are not obligated to do so.  If     *
 *   you do not wish to do so, delete this exception statement from        *
 *   your version.                                                         *
 ***************************************************************************/

#ifndef APPDBCOMMENTWIDGET_H
#define APPDBCOMMENTWIDGET_H

#include <ui_AppDBCommentWidget.h>

#include "config.h"

#include <QFrame>
#include <QObject>
#include <QWidget>
#include <QString>
#include <QDebug>
#include <QLabel>

#include "appdbstructs.h"
#include "appdblinkitemwidget.h"
#include "appdbappversionwidget.h"

class AppDBCommentWidget : public QFrame, public Ui::AppDBCommentWidget
{
	Q_OBJECT
public:
	AppDBCommentWidget(const WineAppDBComment *comment, QWidget * parent = 0);
	void setId(int id);
	void setParentId(int id);
	bool isId(int id);

signals:
	void linkTrigged(short int action, QString search="", int val1=0, int val2=0);

private:
	void setTopic(QString topic);
	void setDate(QString autor, QString date);
	void setMessage(QString message);
	int Id;
	int ParentId;
};

#endif // APPDBCOMMENTWIDGET_H
