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

#include "OAIVanityURLErrorResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIVanityURLErrorResponse::OAIVanityURLErrorResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVanityURLErrorResponse::OAIVanityURLErrorResponse() {
    this->initializeModel();
}

OAIVanityURLErrorResponse::~OAIVanityURLErrorResponse() {}

void OAIVanityURLErrorResponse::initializeModel() {

    m_message_isSet = false;
    m_message_isValid = false;

    m_code_isSet = false;
    m_code_isValid = false;
}

void OAIVanityURLErrorResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIVanityURLErrorResponse::fromJsonObject(QJsonObject json) {

    m_message_isValid = ::dc_rest::fromJsonValue(m_message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;

    m_code_isValid = ::dc_rest::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;
}

QString OAIVanityURLErrorResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIVanityURLErrorResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_message_isSet) {
        obj.insert(QString("message"), ::dc_rest::toJsonValue(m_message));
    }
    if (m_code_isSet) {
        obj.insert(QString("code"), ::dc_rest::toJsonValue(m_code));
    }
    return obj;
}

QString OAIVanityURLErrorResponse::getMessage() const {
    return m_message;
}
void OAIVanityURLErrorResponse::setMessage(const QString &message) {
    m_message = message;
    m_message_isSet = true;
}

bool OAIVanityURLErrorResponse::is_message_Set() const{
    return m_message_isSet;
}

bool OAIVanityURLErrorResponse::is_message_Valid() const{
    return m_message_isValid;
}

qint32 OAIVanityURLErrorResponse::getCode() const {
    return m_code;
}
void OAIVanityURLErrorResponse::setCode(const qint32 &code) {
    m_code = code;
    m_code_isSet = true;
}

bool OAIVanityURLErrorResponse::is_code_Set() const{
    return m_code_isSet;
}

bool OAIVanityURLErrorResponse::is_code_Valid() const{
    return m_code_isValid;
}

bool OAIVanityURLErrorResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIVanityURLErrorResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_message_isValid && m_code_isValid && true;
}

} // namespace dc_rest
