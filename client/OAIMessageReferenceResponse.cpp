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

#include "OAIMessageReferenceResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIMessageReferenceResponse::OAIMessageReferenceResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessageReferenceResponse::OAIMessageReferenceResponse() {
    this->initializeModel();
}

OAIMessageReferenceResponse::~OAIMessageReferenceResponse() {}

void OAIMessageReferenceResponse::initializeModel() {

    m_channel_id_isSet = false;
    m_channel_id_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_message_id_isSet = false;
    m_message_id_isValid = false;

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;
}

void OAIMessageReferenceResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessageReferenceResponse::fromJsonObject(QJsonObject json) {

    m_channel_id_isValid = ::dc_rest::fromJsonValue(m_channel_id, json[QString("channel_id")]);
    m_channel_id_isSet = !json[QString("channel_id")].isNull() && m_channel_id_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_message_id_isValid = ::dc_rest::fromJsonValue(m_message_id, json[QString("message_id")]);
    m_message_id_isSet = !json[QString("message_id")].isNull() && m_message_id_isValid;

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;
}

QString OAIMessageReferenceResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessageReferenceResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_channel_id_isSet) {
        obj.insert(QString("channel_id"), ::dc_rest::toJsonValue(m_channel_id));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_message_id_isSet) {
        obj.insert(QString("message_id"), ::dc_rest::toJsonValue(m_message_id));
    }
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    return obj;
}

QString OAIMessageReferenceResponse::getChannelId() const {
    return m_channel_id;
}
void OAIMessageReferenceResponse::setChannelId(const QString &channel_id) {
    m_channel_id = channel_id;
    m_channel_id_isSet = true;
}

bool OAIMessageReferenceResponse::is_channel_id_Set() const{
    return m_channel_id_isSet;
}

bool OAIMessageReferenceResponse::is_channel_id_Valid() const{
    return m_channel_id_isValid;
}

QJsonValue OAIMessageReferenceResponse::getType() const {
    return m_type;
}
void OAIMessageReferenceResponse::setType(const QJsonValue &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIMessageReferenceResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIMessageReferenceResponse::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIMessageReferenceResponse::getMessageId() const {
    return m_message_id;
}
void OAIMessageReferenceResponse::setMessageId(const QString &message_id) {
    m_message_id = message_id;
    m_message_id_isSet = true;
}

bool OAIMessageReferenceResponse::is_message_id_Set() const{
    return m_message_id_isSet;
}

bool OAIMessageReferenceResponse::is_message_id_Valid() const{
    return m_message_id_isValid;
}

QString OAIMessageReferenceResponse::getGuildId() const {
    return m_guild_id;
}
void OAIMessageReferenceResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIMessageReferenceResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIMessageReferenceResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

bool OAIMessageReferenceResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessageReferenceResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_channel_id_isValid && true;
}

} // namespace dc_rest
