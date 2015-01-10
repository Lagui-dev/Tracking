#include "trackedit.h"
#include "ui_trackedit.h"

trackedit::trackedit(QWidget *parent, Database *pdb, int idx) :
    QMainWindow(parent),
    ui(new Ui::trackedit) {
    ui->setupUi(this);
    db = pdb;
    db->getTrack(idx);

    ui->cmbType->setModel(this->db->typesmodel());
    ui->cmbType->setModelColumn(1);

    db->levels2combobox(ui->cmbLevel);

    ui->cmbOpenUser->clear();
    ui->cmbCloseUser->clear();
    ui->cmbOpenUser->addItem("Votre choix");
    ui->cmbCloseUser->addItem("Votre choix");
    db->users2combobox(ui->cmbOpenUser);
    db->users2combobox(ui->cmbCloseUser);

    ui->dateClose->setVisible(false);
    ui->dateOpen->setVisible(false);

#if QT_NO_DEBUG
    ui->txtCloseDate->setVisible(false);
    ui->txtOpenDate->setVisible(false);
#endif

    track2form();
}

trackedit::~trackedit() {
    delete ui;
}

void trackedit::track2form() {
    ui->txtOpenDate->setText(db->track.open_date);
    ui->txtCloseDate->setText(db->track.close_date);
    if (ui->txtOpenDate->text().isEmpty()) {
        ui->chkOpenDate->setCheckState(Qt::Unchecked);
    }
    else {
        ui->chkOpenDate->setCheckState(Qt::Checked);
    }

    if (ui->txtCloseDate->text().isEmpty()) {
        ui->chkCloseDate->setCheckState(Qt::Unchecked);
    }
    else {
        ui->chkCloseDate->setCheckState(Qt::Checked);
    }

    ui->txtComments->setPlainText(db->track.comments );
    ui->txtIssue->setPlainText(db->track.issue);

    QModelIndexList result = ui->cmbType->model()->match(ui->cmbType->model()->index(0,0),Qt::EditRole,db->track.type_id,1,Qt::MatchExactly);
    if (!result.empty()) {
        ui->cmbType->setCurrentIndex(result.value(0).row());
    }
    else {
        ui->cmbType->setCurrentIndex(0);
    }

    ui->cmbLevel->setCurrentIndex(ui->cmbLevel->findData(db->track.level_id));
    if (ui->cmbLevel->currentIndex()==-1) {
        ui->cmbLevel->setCurrentIndex(0);
    }

    ui->cmbOpenUser->setCurrentIndex(ui->cmbOpenUser->findData(db->track.open_user_id));
    if (ui->cmbOpenUser->currentIndex()==-1) {
        ui->cmbOpenUser->setCurrentIndex(0);
    }

    ui->cmbCloseUser->setCurrentIndex(ui->cmbCloseUser->findData(db->track.close_user_id));
    if (ui->cmbCloseUser->currentIndex()==-1) {
        ui->cmbCloseUser->setCurrentIndex(0);
    }
}

void trackedit::form2track() {
    if (ui->chkOpenDate->isChecked()) {
        db->track.open_date=ui->txtOpenDate->text();
    }
    else {
        db->track.open_date="";
    }
    if (ui->chkCloseDate->isChecked()) {
        db->track.close_date=ui->txtCloseDate->text();
    }
    else {
        db->track.close_date="";
    }


    db->track.comments = ui->txtComments->toPlainText();
    db->track.issue = ui->txtIssue->toPlainText();
    db->track.level_id = ui->cmbLevel->itemData(ui->cmbLevel->currentIndex()).toInt();
    db->track.type_id = ui->cmbLevel->itemData(ui->cmbType->currentIndex()).toInt();
    db->track.open_user_id= ui->cmbOpenUser->itemData(ui->cmbOpenUser->currentIndex()).toInt();
    db->track.close_user_id= ui->cmbCloseUser->itemData(ui->cmbCloseUser->currentIndex()).toInt();
}

void trackedit::on_cmbLevel_currentIndexChanged(int index) {
    ui->txtLevel->setText(ui->cmbLevel->itemData(index).toString());
}

///
/// \brief Quand on clique, cela ajoute ou modifie l'enregistrement en cours d'édition
/// \author CoyoteBE
/// \version 0.0.1
/// \date 2014-06-12
///
/// blabla bla bla blablabla bla. :)
///
void trackedit::on_btnOk_clicked() {
    form2track();
    db->setTrack(db->track.id);
    emit JeTeste(1);
    close();
}


void trackedit::on_btnCancel_clicked() {
    close();
}

void trackedit::on_chkOpenDate_toggled(bool checked)
{
    ui->dateOpen->setVisible(checked);
    QDate d = QDate::fromString(ui->txtOpenDate->text(),"yyyy-MM-dd");
    if (d.isValid()) {
        ui->dateOpen->setDate(d);
    }
    else {
        ui->dateOpen->setDate(QDate::currentDate());
    }
}


void trackedit::on_chkCloseDate_toggled(bool checked)
{
    ui->dateClose->setVisible(checked);
    QDate d = QDate::fromString(ui->txtCloseDate->text(),"yyyy-MM-dd");
    if (d.isValid()) {
        ui->dateClose->setDate(d);
    }
    else {
        ui->dateClose->setDate(QDate::currentDate());
    }
}

void trackedit::on_dateOpen_dateChanged(const QDate &date)
{
    ui->txtOpenDate->setText(date.toString("yyyy-MM-dd"));
}

void trackedit::on_dateClose_dateChanged(const QDate &date)
{
    ui->txtCloseDate->setText(date.toString("yyyy-MM-dd"));
}
