#include "softbutton.h"
#include "QDebug"

SoftButton::SoftButton()
{
    buttonColor = "#ccffcc";
    buttonImage = "puchacz.png";
    buttonText = "Puchacz";
}

void SoftButton::handleClicked()
{
    if("#ccffcc" == buttonColor)
    {
        setButtonColor("#EAEAAE");
        setButtonImage("plomykowka.png");
        setButtonText("Plomykowka");
    }
    else
    {
        setButtonColor("#ccffcc");
        setButtonImage("puchacz.png");
        setButtonText("Puchacz");
    }
}

void SoftButton::setButtonColor(QString newButtonColor)
{
    buttonColor = newButtonColor;
    emit buttonColorChanged();
}

QString SoftButton::getButtonColor() const
{
    return buttonColor;
}


void SoftButton::setButtonImage(QString newButtonImage)
{
    buttonImage = newButtonImage;
    emit buttonImageChanged();
}

QString SoftButton::getButtonImage() const
{
    return buttonImage;
}

void SoftButton::setButtonText(QString newButtonText)
{
    buttonText = newButtonText;
    emit buttonTextChanged();
}

QString SoftButton::getButtonText() const
{
    return buttonText;
}

