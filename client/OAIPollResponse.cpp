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

#include "OAIPollResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIPollResponse::OAIPollResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPollResponse::OAIPollResponse() {
    this->initializeModel();
}

OAIPollResponse::~OAIPollResponse() {}

void OAIPollResponse::initializeModel() {

    m_question_isSet = false;
    m_question_isValid = false;

    m_answers_isSet = false;
    m_answers_isValid = false;

    m_expiry_isSet = false;
    m_expiry_isValid = false;

    m_allow_multiselect_isSet = false;
    m_allow_multiselect_isValid = false;

    m_layout_type_isSet = false;
    m_layout_type_isValid = false;

    m_results_isSet = false;
    m_results_isValid = false;
}

void OAIPollResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPollResponse::fromJsonObject(QJsonObject json) {

    m_question_isValid = ::dc_rest::fromJsonValue(m_question, json[QString("question")]);
    m_question_isSet = !json[QString("question")].isNull() && m_question_isValid;

    m_answers_isValid = ::dc_rest::fromJsonValue(m_answers, json[QString("answers")]);
    m_answers_isSet = !json[QString("answers")].isNull() && m_answers_isValid;

    m_expiry_isValid = ::dc_rest::fromJsonValue(m_expiry, json[QString("expiry")]);
    m_expiry_isSet = !json[QString("expiry")].isNull() && m_expiry_isValid;

    m_allow_multiselect_isValid = ::dc_rest::fromJsonValue(m_allow_multiselect, json[QString("allow_multiselect")]);
    m_allow_multiselect_isSet = !json[QString("allow_multiselect")].isNull() && m_allow_multiselect_isValid;

    m_layout_type_isValid = ::dc_rest::fromJsonValue(m_layout_type, json[QString("layout_type")]);
    m_layout_type_isSet = !json[QString("layout_type")].isNull() && m_layout_type_isValid;

    m_results_isValid = ::dc_rest::fromJsonValue(m_results, json[QString("results")]);
    m_results_isSet = !json[QString("results")].isNull() && m_results_isValid;
}

QString OAIPollResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPollResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_question.isSet()) {
        obj.insert(QString("question"), ::dc_rest::toJsonValue(m_question));
    }
    if (m_answers.size() > 0) {
        obj.insert(QString("answers"), ::dc_rest::toJsonValue(m_answers));
    }
    if (m_expiry_isSet) {
        obj.insert(QString("expiry"), ::dc_rest::toJsonValue(m_expiry));
    }
    if (m_allow_multiselect_isSet) {
        obj.insert(QString("allow_multiselect"), ::dc_rest::toJsonValue(m_allow_multiselect));
    }
    if (m_layout_type_isSet) {
        obj.insert(QString("layout_type"), ::dc_rest::toJsonValue(m_layout_type));
    }
    if (m_results.isSet()) {
        obj.insert(QString("results"), ::dc_rest::toJsonValue(m_results));
    }
    return obj;
}

OAIPollMediaResponse OAIPollResponse::getQuestion() const {
    return m_question;
}
void OAIPollResponse::setQuestion(const OAIPollMediaResponse &question) {
    m_question = question;
    m_question_isSet = true;
}

bool OAIPollResponse::is_question_Set() const{
    return m_question_isSet;
}

bool OAIPollResponse::is_question_Valid() const{
    return m_question_isValid;
}

QList<OAIPollAnswerResponse> OAIPollResponse::getAnswers() const {
    return m_answers;
}
void OAIPollResponse::setAnswers(const QList<OAIPollAnswerResponse> &answers) {
    m_answers = answers;
    m_answers_isSet = true;
}

bool OAIPollResponse::is_answers_Set() const{
    return m_answers_isSet;
}

bool OAIPollResponse::is_answers_Valid() const{
    return m_answers_isValid;
}

QDateTime OAIPollResponse::getExpiry() const {
    return m_expiry;
}
void OAIPollResponse::setExpiry(const QDateTime &expiry) {
    m_expiry = expiry;
    m_expiry_isSet = true;
}

bool OAIPollResponse::is_expiry_Set() const{
    return m_expiry_isSet;
}

bool OAIPollResponse::is_expiry_Valid() const{
    return m_expiry_isValid;
}

bool OAIPollResponse::isAllowMultiselect() const {
    return m_allow_multiselect;
}
void OAIPollResponse::setAllowMultiselect(const bool &allow_multiselect) {
    m_allow_multiselect = allow_multiselect;
    m_allow_multiselect_isSet = true;
}

bool OAIPollResponse::is_allow_multiselect_Set() const{
    return m_allow_multiselect_isSet;
}

bool OAIPollResponse::is_allow_multiselect_Valid() const{
    return m_allow_multiselect_isValid;
}

qint32 OAIPollResponse::getLayoutType() const {
    return m_layout_type;
}
void OAIPollResponse::setLayoutType(const qint32 &layout_type) {
    m_layout_type = layout_type;
    m_layout_type_isSet = true;
}

bool OAIPollResponse::is_layout_type_Set() const{
    return m_layout_type_isSet;
}

bool OAIPollResponse::is_layout_type_Valid() const{
    return m_layout_type_isValid;
}

OAIPollResultsResponse OAIPollResponse::getResults() const {
    return m_results;
}
void OAIPollResponse::setResults(const OAIPollResultsResponse &results) {
    m_results = results;
    m_results_isSet = true;
}

bool OAIPollResponse::is_results_Set() const{
    return m_results_isSet;
}

bool OAIPollResponse::is_results_Valid() const{
    return m_results_isValid;
}

bool OAIPollResponse::isSet() const {
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

        if (m_expiry_isSet) {
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

        if (m_results.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPollResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_question_isValid && m_answers_isValid && m_expiry_isValid && m_allow_multiselect_isValid && m_layout_type_isValid && m_results_isValid && true;
}

} // namespace dc_rest
