#ifndef SOFTBUTTON_H
#define SOFTBUTTON_H

#include <QObject>
#include <QQuickItem>

class SoftButton : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(QString buttonColor READ getButtonColor WRITE setButtonColor NOTIFY buttonColorChanged)
    Q_PROPERTY(QString buttonImage READ getButtonImage WRITE setButtonImage NOTIFY buttonImageChanged)
    Q_PROPERTY(QString buttonText READ getButtonText WRITE setButtonText NOTIFY buttonTextChanged)

public:
    SoftButton();
    void setButtonColor(QString newButtonColor);
    void setButtonImage(QString newButtonImage);
    void setButtonText(QString newButtonText);
    QString getButtonColor() const;
    QString getButtonImage() const;
    QString getButtonText() const;

signals:
    void clicked();
    void buttonColorChanged();
    void buttonImageChanged();
    void buttonTextChanged();

public slots:
    void handleClicked();

private:
    QString buttonColor;
    QString buttonImage;
    QString buttonText;
};


#endif // SOFTBUTTON_H
