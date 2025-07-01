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

#include "OAIGuildMemberResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildMemberResponse::OAIGuildMemberResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildMemberResponse::OAIGuildMemberResponse() {
    this->initializeModel();
}

OAIGuildMemberResponse::~OAIGuildMemberResponse() {}

void OAIGuildMemberResponse::initializeModel() {

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_joined_at_isSet = false;
    m_joined_at_isValid = false;

    m_pending_isSet = false;
    m_pending_isValid = false;

    m_roles_isSet = false;
    m_roles_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_mute_isSet = false;
    m_mute_isValid = false;

    m_deaf_isSet = false;
    m_deaf_isValid = false;

    m_avatar_isSet = false;
    m_avatar_isValid = false;

    m_avatar_decoration_data_isSet = false;
    m_avatar_decoration_data_isValid = false;

    m_banner_isSet = false;
    m_banner_isValid = false;

    m_communication_disabled_until_isSet = false;
    m_communication_disabled_until_isValid = false;

    m_nick_isSet = false;
    m_nick_isValid = false;

    m_premium_since_isSet = false;
    m_premium_since_isValid = false;
}

void OAIGuildMemberResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildMemberResponse::fromJsonObject(QJsonObject json) {

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_joined_at_isValid = ::dc_rest::fromJsonValue(m_joined_at, json[QString("joined_at")]);
    m_joined_at_isSet = !json[QString("joined_at")].isNull() && m_joined_at_isValid;

    m_pending_isValid = ::dc_rest::fromJsonValue(m_pending, json[QString("pending")]);
    m_pending_isSet = !json[QString("pending")].isNull() && m_pending_isValid;

    m_roles_isValid = ::dc_rest::fromJsonValue(m_roles, json[QString("roles")]);
    m_roles_isSet = !json[QString("roles")].isNull() && m_roles_isValid;

    m_user_isValid = ::dc_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_mute_isValid = ::dc_rest::fromJsonValue(m_mute, json[QString("mute")]);
    m_mute_isSet = !json[QString("mute")].isNull() && m_mute_isValid;

    m_deaf_isValid = ::dc_rest::fromJsonValue(m_deaf, json[QString("deaf")]);
    m_deaf_isSet = !json[QString("deaf")].isNull() && m_deaf_isValid;

    m_avatar_isValid = ::dc_rest::fromJsonValue(m_avatar, json[QString("avatar")]);
    m_avatar_isSet = !json[QString("avatar")].isNull() && m_avatar_isValid;

    m_avatar_decoration_data_isValid = ::dc_rest::fromJsonValue(m_avatar_decoration_data, json[QString("avatar_decoration_data")]);
    m_avatar_decoration_data_isSet = !json[QString("avatar_decoration_data")].isNull() && m_avatar_decoration_data_isValid;

    m_banner_isValid = ::dc_rest::fromJsonValue(m_banner, json[QString("banner")]);
    m_banner_isSet = !json[QString("banner")].isNull() && m_banner_isValid;

    m_communication_disabled_until_isValid = ::dc_rest::fromJsonValue(m_communication_disabled_until, json[QString("communication_disabled_until")]);
    m_communication_disabled_until_isSet = !json[QString("communication_disabled_until")].isNull() && m_communication_disabled_until_isValid;

    m_nick_isValid = ::dc_rest::fromJsonValue(m_nick, json[QString("nick")]);
    m_nick_isSet = !json[QString("nick")].isNull() && m_nick_isValid;

    m_premium_since_isValid = ::dc_rest::fromJsonValue(m_premium_since, json[QString("premium_since")]);
    m_premium_since_isSet = !json[QString("premium_since")].isNull() && m_premium_since_isValid;
}

QString OAIGuildMemberResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildMemberResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    if (m_joined_at_isSet) {
        obj.insert(QString("joined_at"), ::dc_rest::toJsonValue(m_joined_at));
    }
    if (m_pending_isSet) {
        obj.insert(QString("pending"), ::dc_rest::toJsonValue(m_pending));
    }
    if (m_roles.size() > 0) {
        obj.insert(QString("roles"), ::dc_rest::toJsonValue(m_roles));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::dc_rest::toJsonValue(m_user));
    }
    if (m_mute_isSet) {
        obj.insert(QString("mute"), ::dc_rest::toJsonValue(m_mute));
    }
    if (m_deaf_isSet) {
        obj.insert(QString("deaf"), ::dc_rest::toJsonValue(m_deaf));
    }
    if (m_avatar_isSet) {
        obj.insert(QString("avatar"), ::dc_rest::toJsonValue(m_avatar));
    }
    if (m_avatar_decoration_data.isSet()) {
        obj.insert(QString("avatar_decoration_data"), ::dc_rest::toJsonValue(m_avatar_decoration_data));
    }
    if (m_banner_isSet) {
        obj.insert(QString("banner"), ::dc_rest::toJsonValue(m_banner));
    }
    if (m_communication_disabled_until_isSet) {
        obj.insert(QString("communication_disabled_until"), ::dc_rest::toJsonValue(m_communication_disabled_until));
    }
    if (m_nick_isSet) {
        obj.insert(QString("nick"), ::dc_rest::toJsonValue(m_nick));
    }
    if (m_premium_since_isSet) {
        obj.insert(QString("premium_since"), ::dc_rest::toJsonValue(m_premium_since));
    }
    return obj;
}

qint32 OAIGuildMemberResponse::getFlags() const {
    return m_flags;
}
void OAIGuildMemberResponse::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIGuildMemberResponse::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIGuildMemberResponse::is_flags_Valid() const{
    return m_flags_isValid;
}

QDateTime OAIGuildMemberResponse::getJoinedAt() const {
    return m_joined_at;
}
void OAIGuildMemberResponse::setJoinedAt(const QDateTime &joined_at) {
    m_joined_at = joined_at;
    m_joined_at_isSet = true;
}

bool OAIGuildMemberResponse::is_joined_at_Set() const{
    return m_joined_at_isSet;
}

bool OAIGuildMemberResponse::is_joined_at_Valid() const{
    return m_joined_at_isValid;
}

bool OAIGuildMemberResponse::isPending() const {
    return m_pending;
}
void OAIGuildMemberResponse::setPending(const bool &pending) {
    m_pending = pending;
    m_pending_isSet = true;
}

bool OAIGuildMemberResponse::is_pending_Set() const{
    return m_pending_isSet;
}

bool OAIGuildMemberResponse::is_pending_Valid() const{
    return m_pending_isValid;
}

QSet<QString> OAIGuildMemberResponse::getRoles() const {
    return m_roles;
}
void OAIGuildMemberResponse::setRoles(const QSet<QString> &roles) {
    m_roles = roles;
    m_roles_isSet = true;
}

bool OAIGuildMemberResponse::is_roles_Set() const{
    return m_roles_isSet;
}

bool OAIGuildMemberResponse::is_roles_Valid() const{
    return m_roles_isValid;
}

OAIUserResponse OAIGuildMemberResponse::getUser() const {
    return m_user;
}
void OAIGuildMemberResponse::setUser(const OAIUserResponse &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIGuildMemberResponse::is_user_Set() const{
    return m_user_isSet;
}

bool OAIGuildMemberResponse::is_user_Valid() const{
    return m_user_isValid;
}

bool OAIGuildMemberResponse::isMute() const {
    return m_mute;
}
void OAIGuildMemberResponse::setMute(const bool &mute) {
    m_mute = mute;
    m_mute_isSet = true;
}

bool OAIGuildMemberResponse::is_mute_Set() const{
    return m_mute_isSet;
}

bool OAIGuildMemberResponse::is_mute_Valid() const{
    return m_mute_isValid;
}

bool OAIGuildMemberResponse::isDeaf() const {
    return m_deaf;
}
void OAIGuildMemberResponse::setDeaf(const bool &deaf) {
    m_deaf = deaf;
    m_deaf_isSet = true;
}

bool OAIGuildMemberResponse::is_deaf_Set() const{
    return m_deaf_isSet;
}

bool OAIGuildMemberResponse::is_deaf_Valid() const{
    return m_deaf_isValid;
}

QString OAIGuildMemberResponse::getAvatar() const {
    return m_avatar;
}
void OAIGuildMemberResponse::setAvatar(const QString &avatar) {
    m_avatar = avatar;
    m_avatar_isSet = true;
}

bool OAIGuildMemberResponse::is_avatar_Set() const{
    return m_avatar_isSet;
}

bool OAIGuildMemberResponse::is_avatar_Valid() const{
    return m_avatar_isValid;
}

OAIUserAvatarDecorationResponse OAIGuildMemberResponse::getAvatarDecorationData() const {
    return m_avatar_decoration_data;
}
void OAIGuildMemberResponse::setAvatarDecorationData(const OAIUserAvatarDecorationResponse &avatar_decoration_data) {
    m_avatar_decoration_data = avatar_decoration_data;
    m_avatar_decoration_data_isSet = true;
}

bool OAIGuildMemberResponse::is_avatar_decoration_data_Set() const{
    return m_avatar_decoration_data_isSet;
}

bool OAIGuildMemberResponse::is_avatar_decoration_data_Valid() const{
    return m_avatar_decoration_data_isValid;
}

QString OAIGuildMemberResponse::getBanner() const {
    return m_banner;
}
void OAIGuildMemberResponse::setBanner(const QString &banner) {
    m_banner = banner;
    m_banner_isSet = true;
}

bool OAIGuildMemberResponse::is_banner_Set() const{
    return m_banner_isSet;
}

bool OAIGuildMemberResponse::is_banner_Valid() const{
    return m_banner_isValid;
}

QDateTime OAIGuildMemberResponse::getCommunicationDisabledUntil() const {
    return m_communication_disabled_until;
}
void OAIGuildMemberResponse::setCommunicationDisabledUntil(const QDateTime &communication_disabled_until) {
    m_communication_disabled_until = communication_disabled_until;
    m_communication_disabled_until_isSet = true;
}

bool OAIGuildMemberResponse::is_communication_disabled_until_Set() const{
    return m_communication_disabled_until_isSet;
}

bool OAIGuildMemberResponse::is_communication_disabled_until_Valid() const{
    return m_communication_disabled_until_isValid;
}

QString OAIGuildMemberResponse::getNick() const {
    return m_nick;
}
void OAIGuildMemberResponse::setNick(const QString &nick) {
    m_nick = nick;
    m_nick_isSet = true;
}

bool OAIGuildMemberResponse::is_nick_Set() const{
    return m_nick_isSet;
}

bool OAIGuildMemberResponse::is_nick_Valid() const{
    return m_nick_isValid;
}

QDateTime OAIGuildMemberResponse::getPremiumSince() const {
    return m_premium_since;
}
void OAIGuildMemberResponse::setPremiumSince(const QDateTime &premium_since) {
    m_premium_since = premium_since;
    m_premium_since_isSet = true;
}

bool OAIGuildMemberResponse::is_premium_since_Set() const{
    return m_premium_since_isSet;
}

bool OAIGuildMemberResponse::is_premium_since_Valid() const{
    return m_premium_since_isValid;
}

bool OAIGuildMemberResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_joined_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pending_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_roles.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
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

        if (m_avatar_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avatar_decoration_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_banner_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_communication_disabled_until_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nick_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_premium_since_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildMemberResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_flags_isValid && m_joined_at_isValid && m_pending_isValid && m_roles_isValid && m_user_isValid && m_mute_isValid && m_deaf_isValid && true;
}

} // namespace dc_rest
