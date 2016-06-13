#ifndef MUSICABSTRACTMOVEWIDGET_H
#define MUSICABSTRACTMOVEWIDGET_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#define WIDTH  20
#define HEIGHT 20

#include <QWidget>
#include <QMouseEvent>
#include "musicupdateglobaldefine.h"

/*! @brief The class of the moving widget base.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_UPDATE_EXPORT MusicAbstractMoveWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MusicAbstractMoveWidget(QWidget *parent = 0);
    /*!
     * Object contsructor.
     */
    virtual ~MusicAbstractMoveWidget();

    inline void drawWindowShadow(bool show) { m_showShadow = show;}
    /*!
     * Set or not draw window bound shadow.
     */
    inline void blockMoveOption(bool block) { m_moveOption = block;}
    /*!
     * Set or not block widget moving.
     */

protected:
    virtual void paintEvent(QPaintEvent *event) override;
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;
    /*!
     * Override the widget event.
     */

    QPoint m_pressAt;
    bool m_moveOption, m_showShadow;
    bool m_leftButtonPress;

};

#endif // MUSICABSTRACTMOVEWIDGET_H
