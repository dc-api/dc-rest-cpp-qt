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

#include "OAIGuildWelcomeScreenChannelResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildWelcomeScreenChannelResponse::OAIGuildWelcomeScreenChannelResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildWelcomeScreenChannelResponse::OAIGuildWelcomeScreenChannelResponse() {
    this->initializeModel();
}

OAIGuildWelcomeScreenChannelResponse::~OAIGuildWelcomeScreenChannelResponse() {}

void OAIGuildWelcomeScreenChannelResponse::initializeModel() {

    m_channel_id_isSet = false;
    m_channel_id_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_emoji_id_isSet = false;
    m_emoji_id_isValid = false;

    m_emoji_name_isSet = false;
    m_emoji_name_isValid = false;
}

void OAIGuildWelcomeScreenChannelResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildWelcomeScreenChannelResponse::fromJsonObject(QJsonObject json) {

    m_channel_id_isValid = ::dc_rest::fromJsonValue(m_channel_id, json[QString("channel_id")]);
    m_channel_id_isSet = !json[QString("channel_id")].isNull() && m_channel_id_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_emoji_id_isValid = ::dc_rest::fromJsonValue(m_emoji_id, json[QString("emoji_id")]);
    m_emoji_id_isSet = !json[QString("emoji_id")].isNull() && m_emoji_id_isValid;

    m_emoji_name_isValid = ::dc_rest::fromJsonValue(m_emoji_name, json[QString("emoji_name")]);
    m_emoji_name_isSet = !json[QString("emoji_name")].isNull() && m_emoji_name_isValid;
}

QString OAIGuildWelcomeScreenChannelResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildWelcomeScreenChannelResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_channel_id_isSet) {
        obj.insert(QString("channel_id"), ::dc_rest::toJsonValue(m_channel_id));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_emoji_id_isSet) {
        obj.insert(QString("emoji_id"), ::dc_rest::toJsonValue(m_emoji_id));
    }
    if (m_emoji_name_isSet) {
        obj.insert(QString("emoji_name"), ::dc_rest::toJsonValue(m_emoji_name));
    }
    return obj;
}

QString OAIGuildWelcomeScreenChannelResponse::getChannelId() const {
    return m_channel_id;
}
void OAIGuildWelcomeScreenChannelResponse::setChannelId(const QString &channel_id) {
    m_channel_id = channel_id;
    m_channel_id_isSet = true;
}

bool OAIGuildWelcomeScreenChannelResponse::is_channel_id_Set() const{
    return m_channel_id_isSet;
}

bool OAIGuildWelcomeScreenChannelResponse::is_channel_id_Valid() const{
    return m_channel_id_isValid;
}

QString OAIGuildWelcomeScreenChannelResponse::getDescription() const {
    return m_description;
}
void OAIGuildWelcomeScreenChannelResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIGuildWelcomeScreenChannelResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIGuildWelcomeScreenChannelResponse::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIGuildWelcomeScreenChannelResponse::getEmojiId() const {
    return m_emoji_id;
}
void OAIGuildWelcomeScreenChannelResponse::setEmojiId(const QString &emoji_id) {
    m_emoji_id = emoji_id;
    m_emoji_id_isSet = true;
}

bool OAIGuildWelcomeScreenChannelResponse::is_emoji_id_Set() const{
    return m_emoji_id_isSet;
}

bool OAIGuildWelcomeScreenChannelResponse::is_emoji_id_Valid() const{
    return m_emoji_id_isValid;
}

QString OAIGuildWelcomeScreenChannelResponse::getEmojiName() const {
    return m_emoji_name;
}
void OAIGuildWelcomeScreenChannelResponse::setEmojiName(const QString &emoji_name) {
    m_emoji_name = emoji_name;
    m_emoji_name_isSet = true;
}

bool OAIGuildWelcomeScreenChannelResponse::is_emoji_name_Set() const{
    return m_emoji_name_isSet;
}

bool OAIGuildWelcomeScreenChannelResponse::is_emoji_name_Valid() const{
    return m_emoji_name_isValid;
}

bool OAIGuildWelcomeScreenChannelResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildWelcomeScreenChannelResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_channel_id_isValid && m_description_isValid && true;
}

} // namespace dc_rest
