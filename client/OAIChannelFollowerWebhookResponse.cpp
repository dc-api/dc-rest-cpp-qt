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

#include "OAIChannelFollowerWebhookResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIChannelFollowerWebhookResponse::OAIChannelFollowerWebhookResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChannelFollowerWebhookResponse::OAIChannelFollowerWebhookResponse() {
    this->initializeModel();
}

OAIChannelFollowerWebhookResponse::~OAIChannelFollowerWebhookResponse() {}

void OAIChannelFollowerWebhookResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_application_id_isSet = false;
    m_application_id_isValid = false;

    m_avatar_isSet = false;
    m_avatar_isValid = false;

    m_channel_id_isSet = false;
    m_channel_id_isValid = false;

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_source_guild_isSet = false;
    m_source_guild_isValid = false;

    m_source_channel_isSet = false;
    m_source_channel_isValid = false;
}

void OAIChannelFollowerWebhookResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChannelFollowerWebhookResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_application_id_isValid = ::dc_rest::fromJsonValue(m_application_id, json[QString("application_id")]);
    m_application_id_isSet = !json[QString("application_id")].isNull() && m_application_id_isValid;

    m_avatar_isValid = ::dc_rest::fromJsonValue(m_avatar, json[QString("avatar")]);
    m_avatar_isSet = !json[QString("avatar")].isNull() && m_avatar_isValid;

    m_channel_id_isValid = ::dc_rest::fromJsonValue(m_channel_id, json[QString("channel_id")]);
    m_channel_id_isSet = !json[QString("channel_id")].isNull() && m_channel_id_isValid;

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_user_isValid = ::dc_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_source_guild_isValid = ::dc_rest::fromJsonValue(m_source_guild, json[QString("source_guild")]);
    m_source_guild_isSet = !json[QString("source_guild")].isNull() && m_source_guild_isValid;

    m_source_channel_isValid = ::dc_rest::fromJsonValue(m_source_channel, json[QString("source_channel")]);
    m_source_channel_isSet = !json[QString("source_channel")].isNull() && m_source_channel_isValid;
}

QString OAIChannelFollowerWebhookResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChannelFollowerWebhookResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_application_id_isSet) {
        obj.insert(QString("application_id"), ::dc_rest::toJsonValue(m_application_id));
    }
    if (m_avatar_isSet) {
        obj.insert(QString("avatar"), ::dc_rest::toJsonValue(m_avatar));
    }
    if (m_channel_id_isSet) {
        obj.insert(QString("channel_id"), ::dc_rest::toJsonValue(m_channel_id));
    }
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::dc_rest::toJsonValue(m_user));
    }
    if (m_source_guild.isSet()) {
        obj.insert(QString("source_guild"), ::dc_rest::toJsonValue(m_source_guild));
    }
    if (m_source_channel.isSet()) {
        obj.insert(QString("source_channel"), ::dc_rest::toJsonValue(m_source_channel));
    }
    return obj;
}

QString OAIChannelFollowerWebhookResponse::getId() const {
    return m_id;
}
void OAIChannelFollowerWebhookResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIChannelFollowerWebhookResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIChannelFollowerWebhookResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIChannelFollowerWebhookResponse::getName() const {
    return m_name;
}
void OAIChannelFollowerWebhookResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIChannelFollowerWebhookResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIChannelFollowerWebhookResponse::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIChannelFollowerWebhookResponse::getType() const {
    return m_type;
}
void OAIChannelFollowerWebhookResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIChannelFollowerWebhookResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIChannelFollowerWebhookResponse::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIChannelFollowerWebhookResponse::getApplicationId() const {
    return m_application_id;
}
void OAIChannelFollowerWebhookResponse::setApplicationId(const QString &application_id) {
    m_application_id = application_id;
    m_application_id_isSet = true;
}

bool OAIChannelFollowerWebhookResponse::is_application_id_Set() const{
    return m_application_id_isSet;
}

bool OAIChannelFollowerWebhookResponse::is_application_id_Valid() const{
    return m_application_id_isValid;
}

QString OAIChannelFollowerWebhookResponse::getAvatar() const {
    return m_avatar;
}
void OAIChannelFollowerWebhookResponse::setAvatar(const QString &avatar) {
    m_avatar = avatar;
    m_avatar_isSet = true;
}

bool OAIChannelFollowerWebhookResponse::is_avatar_Set() const{
    return m_avatar_isSet;
}

bool OAIChannelFollowerWebhookResponse::is_avatar_Valid() const{
    return m_avatar_isValid;
}

QString OAIChannelFollowerWebhookResponse::getChannelId() const {
    return m_channel_id;
}
void OAIChannelFollowerWebhookResponse::setChannelId(const QString &channel_id) {
    m_channel_id = channel_id;
    m_channel_id_isSet = true;
}

bool OAIChannelFollowerWebhookResponse::is_channel_id_Set() const{
    return m_channel_id_isSet;
}

bool OAIChannelFollowerWebhookResponse::is_channel_id_Valid() const{
    return m_channel_id_isValid;
}

QString OAIChannelFollowerWebhookResponse::getGuildId() const {
    return m_guild_id;
}
void OAIChannelFollowerWebhookResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIChannelFollowerWebhookResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIChannelFollowerWebhookResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

OAIUserResponse OAIChannelFollowerWebhookResponse::getUser() const {
    return m_user;
}
void OAIChannelFollowerWebhookResponse::setUser(const OAIUserResponse &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIChannelFollowerWebhookResponse::is_user_Set() const{
    return m_user_isSet;
}

bool OAIChannelFollowerWebhookResponse::is_user_Valid() const{
    return m_user_isValid;
}

OAIWebhookSourceGuildResponse OAIChannelFollowerWebhookResponse::getSourceGuild() const {
    return m_source_guild;
}
void OAIChannelFollowerWebhookResponse::setSourceGuild(const OAIWebhookSourceGuildResponse &source_guild) {
    m_source_guild = source_guild;
    m_source_guild_isSet = true;
}

bool OAIChannelFollowerWebhookResponse::is_source_guild_Set() const{
    return m_source_guild_isSet;
}

bool OAIChannelFollowerWebhookResponse::is_source_guild_Valid() const{
    return m_source_guild_isValid;
}

OAIWebhookSourceChannelResponse OAIChannelFollowerWebhookResponse::getSourceChannel() const {
    return m_source_channel;
}
void OAIChannelFollowerWebhookResponse::setSourceChannel(const OAIWebhookSourceChannelResponse &source_channel) {
    m_source_channel = source_channel;
    m_source_channel_isSet = true;
}

bool OAIChannelFollowerWebhookResponse::is_source_channel_Set() const{
    return m_source_channel_isSet;
}

bool OAIChannelFollowerWebhookResponse::is_source_channel_Valid() const{
    return m_source_channel_isValid;
}

bool OAIChannelFollowerWebhookResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_application_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avatar_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_source_guild.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_source_channel.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChannelFollowerWebhookResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_type_isValid && true;
}

} // namespace dc_rest
