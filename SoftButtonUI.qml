import QtQuick 2.12
import QtQuick.Window 2.12
import Buttons 1.0

SoftButton
{
    id: widgetRoot
    height:300
    width:300
    Rectangle
    {
        id: rectangle
        anchors.fill: parent
        color:widgetRoot.buttonColor
        radius: 10
        Image {
            id: image
            width: 200
            height: 200
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: parent.top
            anchors.topMargin: 30
            fillMode: Image.PreserveAspectFit
            source: widgetRoot.buttonImage
        }
        Text
        {
            id: element
            text: qsTr(widgetRoot.buttonText)
            anchors.bottomMargin: 20
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom: parent.bottom
            font.pixelSize: 30

        }
        MouseArea
        {
            anchors.fill: parent
            onClicked:
            {
                handleClicked()
            }
        }


     }
}
