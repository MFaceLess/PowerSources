#ifndef SVGVIEW_H
#define SVGVIEW_H

#include <QGraphicsView>

QT_BEGIN_NAMESPACE
class QGraphicsSvgItem;
class QSvgRenderer;
class QWheelEvent;
class QPaintEvent;
QT_END_NAMESPACE

class SvgView : public QGraphicsView
{
    Q_OBJECT
public:
    enum RendererType { Native, OpenGL, Image };

    explicit SvgView(QWidget *parent = nullptr);

    bool openFile(const QString &fileName);
    void setRenderer(RendererType type = Native);

    QSize svgSize() const;
    QSvgRenderer *renderer() const;

    qreal zoomFactor() const;

public slots:
    void zoomIn();
    void zoomOut();
    void resetZoom();

signals:
    void zoomChanged();

protected:
    void wheelEvent(QWheelEvent *event) override;

private:
    void zoomBy(qreal factor);

    RendererType m_renderer;

    QGraphicsSvgItem *m_svgItem;
};

#endif // SVGVIEW_H
