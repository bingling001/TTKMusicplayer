#ifndef MUSICUSERLINEEDIT_H
#define MUSICUSERLINEEDIT_H

/* =================================================
 * This file is part of the Music Player project
 * Copyright (c) 2014 - 2015 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QLineEdit>
#include <QLabel>

#include "musiclibexportglobal.h"

enum LabelType
{
    User,
    Passwd,
    PwdConfirm,
    Mail
};

class MUSIC_USER_EXPORT MusicUserLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit MusicUserLineEdit(QWidget *parent = 0);

    void setLabel(LabelType ty, QLabel *t, QLabel *s);
    inline bool getMailStatus() const { return m_mailContains;}
    inline bool getStrStatus() const { return m_strContains;}

signals:
    //0 weak, 1 middle, 2 strong
    void checkPwdStrength(int code);

protected:
    virtual void focusInEvent(QFocusEvent *event);
    virtual void focusOutEvent(QFocusEvent *event);
    void checkTheInput();
    void checkPwdStrength();
    void showLabel();
    void showLabel(int s, int e);
    void labelCheck(bool check);

    QLabel *m_tipsLabel;
    QLabel *m_statusLabel;
    LabelType m_type;
    bool m_mailContains;
    bool m_strContains;

};

#endif // MUSICUSERLINEEDIT_H