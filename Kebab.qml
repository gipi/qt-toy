import QtQuick 2.0
import QtQuick.Controls 2.10

import miao 1.0

Button {
    text: qsTr("kebab?")
    onClicked: {
        console.log("Button clicked!")
        //Specimen{this};
        specimen.yeah()
    }
    Specimen {
        id: specimen
    }
}
