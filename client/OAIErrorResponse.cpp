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

#include "OAIErrorResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIErrorResponse::OAIErrorResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIErrorResponse::OAIErrorResponse() {
    this->initializeModel();
}

OAIErrorResponse::~OAIErrorResponse() {}

void OAIErrorResponse::initializeModel() {

    m_code_isSet = false;
    m_code_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;
}

void OAIErrorResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIErrorResponse::fromJsonObject(QJsonObject json) {

    m_code_isValid = ::dc_rest::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_message_isValid = ::dc_rest::fromJsonValue(m_message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;

    m_errors_isValid = ::dc_rest::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;
}

QString OAIErrorResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIErrorResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_code_isSet) {
        obj.insert(QString("code"), ::dc_rest::toJsonValue(m_code));
    }
    if (m_message_isSet) {
        obj.insert(QString("message"), ::dc_rest::toJsonValue(m_message));
    }
    if (m_errors.isSet()) {
        obj.insert(QString("errors"), ::dc_rest::toJsonValue(m_errors));
    }
    return obj;
}

qint32 OAIErrorResponse::getCode() const {
    return m_code;
}
void OAIErrorResponse::setCode(const qint32 &code) {
    m_code = code;
    m_code_isSet = true;
}

bool OAIErrorResponse::is_code_Set() const{
    return m_code_isSet;
}

bool OAIErrorResponse::is_code_Valid() const{
    return m_code_isValid;
}

QString OAIErrorResponse::getMessage() const {
    return m_message;
}
void OAIErrorResponse::setMessage(const QString &message) {
    m_message = message;
    m_message_isSet = true;
}

bool OAIErrorResponse::is_message_Set() const{
    return m_message_isSet;
}

bool OAIErrorResponse::is_message_Valid() const{
    return m_message_isValid;
}

OAIErrorDetails OAIErrorResponse::getErrors() const {
    return m_errors;
}
void OAIErrorResponse::setErrors(const OAIErrorDetails &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIErrorResponse::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIErrorResponse::is_errors_Valid() const{
    return m_errors_isValid;
}

bool OAIErrorResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_errors.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIErrorResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_code_isValid && m_message_isValid && true;
}

} // namespace dc_rest
