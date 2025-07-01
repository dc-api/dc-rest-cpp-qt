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

#include "OAIGuildHomeSettingsResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildHomeSettingsResponse::OAIGuildHomeSettingsResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildHomeSettingsResponse::OAIGuildHomeSettingsResponse() {
    this->initializeModel();
}

OAIGuildHomeSettingsResponse::~OAIGuildHomeSettingsResponse() {}

void OAIGuildHomeSettingsResponse::initializeModel() {

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_enabled_isSet = false;
    m_enabled_isValid = false;

    m_welcome_message_isSet = false;
    m_welcome_message_isValid = false;

    m_new_member_actions_isSet = false;
    m_new_member_actions_isValid = false;

    m_resource_channels_isSet = false;
    m_resource_channels_isValid = false;
}

void OAIGuildHomeSettingsResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildHomeSettingsResponse::fromJsonObject(QJsonObject json) {

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_enabled_isValid = ::dc_rest::fromJsonValue(m_enabled, json[QString("enabled")]);
    m_enabled_isSet = !json[QString("enabled")].isNull() && m_enabled_isValid;

    m_welcome_message_isValid = ::dc_rest::fromJsonValue(m_welcome_message, json[QString("welcome_message")]);
    m_welcome_message_isSet = !json[QString("welcome_message")].isNull() && m_welcome_message_isValid;

    m_new_member_actions_isValid = ::dc_rest::fromJsonValue(m_new_member_actions, json[QString("new_member_actions")]);
    m_new_member_actions_isSet = !json[QString("new_member_actions")].isNull() && m_new_member_actions_isValid;

    m_resource_channels_isValid = ::dc_rest::fromJsonValue(m_resource_channels, json[QString("resource_channels")]);
    m_resource_channels_isSet = !json[QString("resource_channels")].isNull() && m_resource_channels_isValid;
}

QString OAIGuildHomeSettingsResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildHomeSettingsResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_enabled_isSet) {
        obj.insert(QString("enabled"), ::dc_rest::toJsonValue(m_enabled));
    }
    if (m_welcome_message.isSet()) {
        obj.insert(QString("welcome_message"), ::dc_rest::toJsonValue(m_welcome_message));
    }
    if (m_new_member_actions.size() > 0) {
        obj.insert(QString("new_member_actions"), ::dc_rest::toJsonValue(m_new_member_actions));
    }
    if (m_resource_channels.size() > 0) {
        obj.insert(QString("resource_channels"), ::dc_rest::toJsonValue(m_resource_channels));
    }
    return obj;
}

QString OAIGuildHomeSettingsResponse::getGuildId() const {
    return m_guild_id;
}
void OAIGuildHomeSettingsResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIGuildHomeSettingsResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIGuildHomeSettingsResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

bool OAIGuildHomeSettingsResponse::isEnabled() const {
    return m_enabled;
}
void OAIGuildHomeSettingsResponse::setEnabled(const bool &enabled) {
    m_enabled = enabled;
    m_enabled_isSet = true;
}

bool OAIGuildHomeSettingsResponse::is_enabled_Set() const{
    return m_enabled_isSet;
}

bool OAIGuildHomeSettingsResponse::is_enabled_Valid() const{
    return m_enabled_isValid;
}

OAIWelcomeMessageResponse OAIGuildHomeSettingsResponse::getWelcomeMessage() const {
    return m_welcome_message;
}
void OAIGuildHomeSettingsResponse::setWelcomeMessage(const OAIWelcomeMessageResponse &welcome_message) {
    m_welcome_message = welcome_message;
    m_welcome_message_isSet = true;
}

bool OAIGuildHomeSettingsResponse::is_welcome_message_Set() const{
    return m_welcome_message_isSet;
}

bool OAIGuildHomeSettingsResponse::is_welcome_message_Valid() const{
    return m_welcome_message_isValid;
}

QList<OAINewMemberActionResponse> OAIGuildHomeSettingsResponse::getNewMemberActions() const {
    return m_new_member_actions;
}
void OAIGuildHomeSettingsResponse::setNewMemberActions(const QList<OAINewMemberActionResponse> &new_member_actions) {
    m_new_member_actions = new_member_actions;
    m_new_member_actions_isSet = true;
}

bool OAIGuildHomeSettingsResponse::is_new_member_actions_Set() const{
    return m_new_member_actions_isSet;
}

bool OAIGuildHomeSettingsResponse::is_new_member_actions_Valid() const{
    return m_new_member_actions_isValid;
}

QList<OAIResourceChannelResponse> OAIGuildHomeSettingsResponse::getResourceChannels() const {
    return m_resource_channels;
}
void OAIGuildHomeSettingsResponse::setResourceChannels(const QList<OAIResourceChannelResponse> &resource_channels) {
    m_resource_channels = resource_channels;
    m_resource_channels_isSet = true;
}

bool OAIGuildHomeSettingsResponse::is_resource_channels_Set() const{
    return m_resource_channels_isSet;
}

bool OAIGuildHomeSettingsResponse::is_resource_channels_Valid() const{
    return m_resource_channels_isValid;
}

bool OAIGuildHomeSettingsResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_welcome_message.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_new_member_actions.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_resource_channels.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildHomeSettingsResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_guild_id_isValid && m_enabled_isValid && true;
}

} // namespace dc_rest
