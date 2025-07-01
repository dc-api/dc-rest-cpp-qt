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

#include "OAIPrivateChannelResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIPrivateChannelResponse::OAIPrivateChannelResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPrivateChannelResponse::OAIPrivateChannelResponse() {
    this->initializeModel();
}

OAIPrivateChannelResponse::~OAIPrivateChannelResponse() {}

void OAIPrivateChannelResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_recipients_isSet = false;
    m_recipients_isValid = false;

    m_last_message_id_isSet = false;
    m_last_message_id_isValid = false;

    m_last_pin_timestamp_isSet = false;
    m_last_pin_timestamp_isValid = false;
}

void OAIPrivateChannelResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPrivateChannelResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_recipients_isValid = ::dc_rest::fromJsonValue(m_recipients, json[QString("recipients")]);
    m_recipients_isSet = !json[QString("recipients")].isNull() && m_recipients_isValid;

    m_last_message_id_isValid = ::dc_rest::fromJsonValue(m_last_message_id, json[QString("last_message_id")]);
    m_last_message_id_isSet = !json[QString("last_message_id")].isNull() && m_last_message_id_isValid;

    m_last_pin_timestamp_isValid = ::dc_rest::fromJsonValue(m_last_pin_timestamp, json[QString("last_pin_timestamp")]);
    m_last_pin_timestamp_isSet = !json[QString("last_pin_timestamp")].isNull() && m_last_pin_timestamp_isValid;
}

QString OAIPrivateChannelResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPrivateChannelResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    if (m_recipients.size() > 0) {
        obj.insert(QString("recipients"), ::dc_rest::toJsonValue(m_recipients));
    }
    if (m_last_message_id_isSet) {
        obj.insert(QString("last_message_id"), ::dc_rest::toJsonValue(m_last_message_id));
    }
    if (m_last_pin_timestamp_isSet) {
        obj.insert(QString("last_pin_timestamp"), ::dc_rest::toJsonValue(m_last_pin_timestamp));
    }
    return obj;
}

QString OAIPrivateChannelResponse::getId() const {
    return m_id;
}
void OAIPrivateChannelResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIPrivateChannelResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIPrivateChannelResponse::is_id_Valid() const{
    return m_id_isValid;
}

qint32 OAIPrivateChannelResponse::getType() const {
    return m_type;
}
void OAIPrivateChannelResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIPrivateChannelResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIPrivateChannelResponse::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIPrivateChannelResponse::getFlags() const {
    return m_flags;
}
void OAIPrivateChannelResponse::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIPrivateChannelResponse::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIPrivateChannelResponse::is_flags_Valid() const{
    return m_flags_isValid;
}

QList<OAIUserResponse> OAIPrivateChannelResponse::getRecipients() const {
    return m_recipients;
}
void OAIPrivateChannelResponse::setRecipients(const QList<OAIUserResponse> &recipients) {
    m_recipients = recipients;
    m_recipients_isSet = true;
}

bool OAIPrivateChannelResponse::is_recipients_Set() const{
    return m_recipients_isSet;
}

bool OAIPrivateChannelResponse::is_recipients_Valid() const{
    return m_recipients_isValid;
}

QString OAIPrivateChannelResponse::getLastMessageId() const {
    return m_last_message_id;
}
void OAIPrivateChannelResponse::setLastMessageId(const QString &last_message_id) {
    m_last_message_id = last_message_id;
    m_last_message_id_isSet = true;
}

bool OAIPrivateChannelResponse::is_last_message_id_Set() const{
    return m_last_message_id_isSet;
}

bool OAIPrivateChannelResponse::is_last_message_id_Valid() const{
    return m_last_message_id_isValid;
}

QDateTime OAIPrivateChannelResponse::getLastPinTimestamp() const {
    return m_last_pin_timestamp;
}
void OAIPrivateChannelResponse::setLastPinTimestamp(const QDateTime &last_pin_timestamp) {
    m_last_pin_timestamp = last_pin_timestamp;
    m_last_pin_timestamp_isSet = true;
}

bool OAIPrivateChannelResponse::is_last_pin_timestamp_Set() const{
    return m_last_pin_timestamp_isSet;
}

bool OAIPrivateChannelResponse::is_last_pin_timestamp_Valid() const{
    return m_last_pin_timestamp_isValid;
}

bool OAIPrivateChannelResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_recipients.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_pin_timestamp_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPrivateChannelResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_type_isValid && m_flags_isValid && m_recipients_isValid && true;
}

} // namespace dc_rest
