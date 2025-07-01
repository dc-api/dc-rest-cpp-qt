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

#include "OAIUpdate_guild_member_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIUpdate_guild_member_request::OAIUpdate_guild_member_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUpdate_guild_member_request::OAIUpdate_guild_member_request() {
    this->initializeModel();
}

OAIUpdate_guild_member_request::~OAIUpdate_guild_member_request() {}

void OAIUpdate_guild_member_request::initializeModel() {

    m_nick_isSet = false;
    m_nick_isValid = false;

    m_roles_isSet = false;
    m_roles_isValid = false;

    m_mute_isSet = false;
    m_mute_isValid = false;

    m_deaf_isSet = false;
    m_deaf_isValid = false;

    m_channel_id_isSet = false;
    m_channel_id_isValid = false;

    m_communication_disabled_until_isSet = false;
    m_communication_disabled_until_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;
}

void OAIUpdate_guild_member_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUpdate_guild_member_request::fromJsonObject(QJsonObject json) {

    m_nick_isValid = ::dc_rest::fromJsonValue(m_nick, json[QString("nick")]);
    m_nick_isSet = !json[QString("nick")].isNull() && m_nick_isValid;

    m_roles_isValid = ::dc_rest::fromJsonValue(m_roles, json[QString("roles")]);
    m_roles_isSet = !json[QString("roles")].isNull() && m_roles_isValid;

    m_mute_isValid = ::dc_rest::fromJsonValue(m_mute, json[QString("mute")]);
    m_mute_isSet = !json[QString("mute")].isNull() && m_mute_isValid;

    m_deaf_isValid = ::dc_rest::fromJsonValue(m_deaf, json[QString("deaf")]);
    m_deaf_isSet = !json[QString("deaf")].isNull() && m_deaf_isValid;

    m_channel_id_isValid = ::dc_rest::fromJsonValue(m_channel_id, json[QString("channel_id")]);
    m_channel_id_isSet = !json[QString("channel_id")].isNull() && m_channel_id_isValid;

    m_communication_disabled_until_isValid = ::dc_rest::fromJsonValue(m_communication_disabled_until, json[QString("communication_disabled_until")]);
    m_communication_disabled_until_isSet = !json[QString("communication_disabled_until")].isNull() && m_communication_disabled_until_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;
}

QString OAIUpdate_guild_member_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUpdate_guild_member_request::asJsonObject() const {
    QJsonObject obj;
    if (m_nick_isSet) {
        obj.insert(QString("nick"), ::dc_rest::toJsonValue(m_nick));
    }
    if (m_roles.size() > 0) {
        obj.insert(QString("roles"), ::dc_rest::toJsonValue(m_roles));
    }
    if (m_mute_isSet) {
        obj.insert(QString("mute"), ::dc_rest::toJsonValue(m_mute));
    }
    if (m_deaf_isSet) {
        obj.insert(QString("deaf"), ::dc_rest::toJsonValue(m_deaf));
    }
    if (m_channel_id_isSet) {
        obj.insert(QString("channel_id"), ::dc_rest::toJsonValue(m_channel_id));
    }
    if (m_communication_disabled_until_isSet) {
        obj.insert(QString("communication_disabled_until"), ::dc_rest::toJsonValue(m_communication_disabled_until));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    return obj;
}

QString OAIUpdate_guild_member_request::getNick() const {
    return m_nick;
}
void OAIUpdate_guild_member_request::setNick(const QString &nick) {
    m_nick = nick;
    m_nick_isSet = true;
}

bool OAIUpdate_guild_member_request::is_nick_Set() const{
    return m_nick_isSet;
}

bool OAIUpdate_guild_member_request::is_nick_Valid() const{
    return m_nick_isValid;
}

QSet<QString> OAIUpdate_guild_member_request::getRoles() const {
    return m_roles;
}
void OAIUpdate_guild_member_request::setRoles(const QSet<QString> &roles) {
    m_roles = roles;
    m_roles_isSet = true;
}

bool OAIUpdate_guild_member_request::is_roles_Set() const{
    return m_roles_isSet;
}

bool OAIUpdate_guild_member_request::is_roles_Valid() const{
    return m_roles_isValid;
}

bool OAIUpdate_guild_member_request::isMute() const {
    return m_mute;
}
void OAIUpdate_guild_member_request::setMute(const bool &mute) {
    m_mute = mute;
    m_mute_isSet = true;
}

bool OAIUpdate_guild_member_request::is_mute_Set() const{
    return m_mute_isSet;
}

bool OAIUpdate_guild_member_request::is_mute_Valid() const{
    return m_mute_isValid;
}

bool OAIUpdate_guild_member_request::isDeaf() const {
    return m_deaf;
}
void OAIUpdate_guild_member_request::setDeaf(const bool &deaf) {
    m_deaf = deaf;
    m_deaf_isSet = true;
}

bool OAIUpdate_guild_member_request::is_deaf_Set() const{
    return m_deaf_isSet;
}

bool OAIUpdate_guild_member_request::is_deaf_Valid() const{
    return m_deaf_isValid;
}

QString OAIUpdate_guild_member_request::getChannelId() const {
    return m_channel_id;
}
void OAIUpdate_guild_member_request::setChannelId(const QString &channel_id) {
    m_channel_id = channel_id;
    m_channel_id_isSet = true;
}

bool OAIUpdate_guild_member_request::is_channel_id_Set() const{
    return m_channel_id_isSet;
}

bool OAIUpdate_guild_member_request::is_channel_id_Valid() const{
    return m_channel_id_isValid;
}

QDateTime OAIUpdate_guild_member_request::getCommunicationDisabledUntil() const {
    return m_communication_disabled_until;
}
void OAIUpdate_guild_member_request::setCommunicationDisabledUntil(const QDateTime &communication_disabled_until) {
    m_communication_disabled_until = communication_disabled_until;
    m_communication_disabled_until_isSet = true;
}

bool OAIUpdate_guild_member_request::is_communication_disabled_until_Set() const{
    return m_communication_disabled_until_isSet;
}

bool OAIUpdate_guild_member_request::is_communication_disabled_until_Valid() const{
    return m_communication_disabled_until_isValid;
}

qint32 OAIUpdate_guild_member_request::getFlags() const {
    return m_flags;
}
void OAIUpdate_guild_member_request::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIUpdate_guild_member_request::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIUpdate_guild_member_request::is_flags_Valid() const{
    return m_flags_isValid;
}

bool OAIUpdate_guild_member_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_nick_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_roles.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_mute_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_deaf_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_communication_disabled_until_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUpdate_guild_member_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
