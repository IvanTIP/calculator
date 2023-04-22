#pragma once
#include <QMainWindow>
#include <QtWidgets/QLineEdit>

class CallerMainWindow : public QMainWindow {
    Q_OBJECT
    bool plusStatus = false;
    bool minusStatus = false;
    bool multiplicationStatus = false;
    bool divideStatus = false;
    bool equalStatus = false;
public:
    QLineEdit* lineEdit = nullptr;
    QLineEdit* lineEdit_2 = nullptr;
    QLineEdit* lineEdit_3 = nullptr;
    explicit CallerMainWindow(QWidget* parent): QMainWindow(parent) {}

public slots:
    void plus(){
        if (!lineEdit_2->text().isEmpty() && !plusStatus && !minusStatus && !multiplicationStatus && !divideStatus && !equalStatus) {
            plusStatus = true;
        }
    };
    void minus(){
        if (!lineEdit_2->text().isEmpty() && !plusStatus && !minusStatus && !multiplicationStatus && !divideStatus && !equalStatus) {
            minusStatus = true;
        }

    };
    void multiplication(){
        if (!lineEdit_2->text().isEmpty() && !plusStatus && !minusStatus && !multiplicationStatus && !divideStatus && !equalStatus) {
            multiplicationStatus = true;
        }

    };
    void divide(){
        if (!lineEdit_2->text().isEmpty() && !plusStatus && !minusStatus && !multiplicationStatus && !divideStatus && !equalStatus) {
            divideStatus = true;
        }

    };
    void result(){
        equalStatus = true;
        if (!lineEdit_3->text().isEmpty()) {
            if (plusStatus) {
                double num1 = (lineEdit_2->text()).toDouble();
                double num2 = (lineEdit_3->text()).toDouble();
                QString result = QString::number(num1 + num2);
                lineEdit->setText(result);
                plusStatus = false;
            } else if (minusStatus) {
                double num1 = (lineEdit_2->text()).toDouble();
                double num2 = (lineEdit_3->text()).toDouble();
                QString result = QString::number(num1 - num2);
                lineEdit->setText(result);
                minusStatus = false;
            } else if (multiplicationStatus) {
                double num1 = (lineEdit_2->text()).toDouble();
                double num2 = (lineEdit_3->text()).toDouble();
                QString result = QString::number(num1 * num2);
                lineEdit->setText(result);
                multiplicationStatus = false;
            } else if (divideStatus) {
                double num1 = (lineEdit_2->text()).toDouble();
                double num2 = (lineEdit_3->text()).toDouble();
                QString result;
                if (num2 == 0.0) {
                    result = "ERROR!";
                    lineEdit->setText(result);
                    divideStatus = false;
                } else {
                    result = QString::number(num1 / num2);
                    lineEdit->setText(result);
                    divideStatus = false;
                }

            }
        }


    };
    void clear() {
        lineEdit->clear();
        lineEdit_2->clear();
        lineEdit_3->clear();
        equalStatus = false;
    }
    void dot() const {
        if (plusStatus || minusStatus || multiplicationStatus || divideStatus) {
            if (!(lineEdit_3->text().contains("."))) {
                lineEdit_3->setText(lineEdit_3->text() + ".");
            }
        } else if (!equalStatus){
            if (!(lineEdit_2->text().contains("."))) {
                lineEdit_2->setText(lineEdit_2->text() + ".");
            }
        }
    }
    void add0() const {
        if (plusStatus || minusStatus || multiplicationStatus || divideStatus) {
            lineEdit_3->setText(lineEdit_3->text() + "0");
        } else if (!equalStatus){
            lineEdit_2->setText(lineEdit_2->text() + "0");
        }
    };
    void add1() const {
        if (plusStatus || minusStatus || multiplicationStatus || divideStatus) {
            lineEdit_3->setText(lineEdit_3->text() + "1");
        } else if (!equalStatus){
            lineEdit_2->setText(lineEdit_2->text() + "1");
        }
    };
    void add2() const {
        if (plusStatus || minusStatus || multiplicationStatus || divideStatus) {
            lineEdit_3->setText(lineEdit_3->text() + "2");
        } else if (!equalStatus){
            lineEdit_2->setText(lineEdit_2->text() + "2");
        }
    };
    void add3() const {
        if (plusStatus || minusStatus || multiplicationStatus || divideStatus) {
            lineEdit_3->setText(lineEdit_3->text() + "3");
        } else if (!equalStatus){
            lineEdit_2->setText(lineEdit_2->text() + "3");
        }
    };
    void add4() const {
        if (plusStatus || minusStatus || multiplicationStatus || divideStatus) {
            lineEdit_3->setText(lineEdit_3->text() + "4");
        } else if (!equalStatus){
            lineEdit_2->setText(lineEdit_2->text() + "4");
        }
    };
    void add5() const {
        if (plusStatus || minusStatus || multiplicationStatus || divideStatus) {
            lineEdit_3->setText(lineEdit_3->text() + "5");
        } else if (!equalStatus){
            lineEdit_2->setText(lineEdit_2->text() + "5");
        }
    };
    void add6() const {
        if (plusStatus || minusStatus || multiplicationStatus || divideStatus) {
            lineEdit_3->setText(lineEdit_3->text() + "6");
        } else if (!equalStatus){
            lineEdit_2->setText(lineEdit_2->text() + "6");
        }
    };
    void add7() const {
        if (plusStatus || minusStatus || multiplicationStatus || divideStatus) {
            lineEdit_3->setText(lineEdit_3->text() + "7");
        } else if (!equalStatus){
            lineEdit_2->setText(lineEdit_2->text() + "7");
        }
    };
    void add8() const {
        if (plusStatus || minusStatus || multiplicationStatus || divideStatus) {
            lineEdit_3->setText(lineEdit_3->text() + "8");
        } else if (!equalStatus){
            lineEdit_2->setText(lineEdit_2->text() + "8");
        }
    };
    void add9() const {
        if (plusStatus || minusStatus || multiplicationStatus || divideStatus) {
            lineEdit_3->setText(lineEdit_3->text() + "9");
        } else if (!equalStatus){
            lineEdit_2->setText(lineEdit_2->text() + "9");
        }
    };
};


