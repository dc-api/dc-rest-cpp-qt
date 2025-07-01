/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIPollCreateRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIPollCreateRequest::OAIPollCreateRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPollCreateRequest::OAIPollCreateRequest() {
    this->initializeModel();
}

OAIPollCreateRequest::~OAIPollCreateRequest() {}

void OAIPollCreateRequest::initializeModel() {

    m_question_isSet = false;
    m_question_isValid = false;

    m_answers_isSet = false;
    m_answers_isValid = false;

    m_allow_multiselect_isSet = false;
    m_allow_multiselect_isValid = false;

    m_layout_type_isSet = false;
    m_layout_type_isValid = false;

    m_duration_isSet = false;
    m_duration_isValid = false;
}

void OAIPollCreateRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPollCreateRequest::fromJsonObject(QJsonObject json) {

    m_question_isValid = ::dc_rest::fromJsonValue(m_question, json[QString("question")]);
    m_question_isSet = !json[QString("question")].isNull() && m_question_isValid;

    m_answers_isValid = ::dc_rest::fromJsonValue(m_answers, json[QString("answers")]);
    m_answers_isSet = !json[QString("answers")].isNull() && m_answers_isValid;

    m_allow_multiselect_isValid = ::dc_rest::fromJsonValue(m_allow_multiselect, json[QString("allow_multiselect")]);
    m_allow_multiselect_isSet = !json[QString("allow_multiselect")].isNull() && m_allow_multiselect_isValid;

    m_layout_type_isValid = ::dc_rest::fromJsonValue(m_layout_type, json[QString("layout_type")]);
    m_layout_type_isSet = !json[QString("layout_type")].isNull() && m_layout_type_isValid;

    m_duration_isValid = ::dc_rest::fromJsonValue(m_duration, json[QString("duration")]);
    m_duration_isSet = !json[QString("duration")].isNull() && m_duration_isValid;
}

QString OAIPollCreateRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPollCreateRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_question.isSet()) {
        obj.insert(QString("question"), ::dc_rest::toJsonValue(m_question));
    }
    if (m_answers.size() > 0) {
        obj.insert(QString("answers"), ::dc_rest::toJsonValue(m_answers));
    }
    if (m_allow_multiselect_isSet) {
        obj.insert(QString("allow_multiselect"), ::dc_rest::toJsonValue(m_allow_multiselect));
    }
    if (m_layout_type_isSet) {
        obj.insert(QString("layout_type"), ::dc_rest::toJsonValue(m_layout_type));
    }
    if (m_duration_isSet) {
        obj.insert(QString("duration"), ::dc_rest::toJsonValue(m_duration));
    }
    return obj;
}

OAIPollMedia OAIPollCreateRequest::getQuestion() const {
    return m_question;
}
void OAIPollCreateRequest::setQuestion(const OAIPollMedia &question) {
    m_question = question;
    m_question_isSet = true;
}

bool OAIPollCreateRequest::is_question_Set() const{
    return m_question_isSet;
}

bool OAIPollCreateRequest::is_question_Valid() const{
    return m_question_isValid;
}

QList<OAIPollAnswerCreateRequest> OAIPollCreateRequest::getAnswers() const {
    return m_answers;
}
void OAIPollCreateRequest::setAnswers(const QList<OAIPollAnswerCreateRequest> &answers) {
    m_answers = answers;
    m_answers_isSet = true;
}

bool OAIPollCreateRequest::is_answers_Set() const{
    return m_answers_isSet;
}

bool OAIPollCreateRequest::is_answers_Valid() const{
    return m_answers_isValid;
}

bool OAIPollCreateRequest::isAllowMultiselect() const {
    return m_allow_multiselect;
}
void OAIPollCreateRequest::setAllowMultiselect(const bool &allow_multiselect) {
    m_allow_multiselect = allow_multiselect;
    m_allow_multiselect_isSet = true;
}

bool OAIPollCreateRequest::is_allow_multiselect_Set() const{
    return m_allow_multiselect_isSet;
}

bool OAIPollCreateRequest::is_allow_multiselect_Valid() const{
    return m_allow_multiselect_isValid;
}

qint32 OAIPollCreateRequest::getLayoutType() const {
    return m_layout_type;
}
void OAIPollCreateRequest::setLayoutType(const qint32 &layout_type) {
    m_layout_type = layout_type;
    m_layout_type_isSet = true;
}

bool OAIPollCreateRequest::is_layout_type_Set() const{
    return m_layout_type_isSet;
}

bool OAIPollCreateRequest::is_layout_type_Valid() const{
    return m_layout_type_isValid;
}

qint32 OAIPollCreateRequest::getDuration() const {
    return m_duration;
}
void OAIPollCreateRequest::setDuration(const qint32 &duration) {
    m_duration = duration;
    m_duration_isSet = true;
}

bool OAIPollCreateRequest::is_duration_Set() const{
    return m_duration_isSet;
}

bool OAIPollCreateRequest::is_duration_Valid() const{
    return m_duration_isValid;
}

bool OAIPollCreateRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_question.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_answers.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_allow_multiselect_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_layout_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_duration_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPollCreateRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_question_isValid && m_answers_isValid && true;
}

} // namespace dc_rest
