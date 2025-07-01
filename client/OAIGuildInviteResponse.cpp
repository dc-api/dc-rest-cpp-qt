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

#include "OAIGuildInviteResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildInviteResponse::OAIGuildInviteResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildInviteResponse::OAIGuildInviteResponse() {
    this->initializeModel();
}

OAIGuildInviteResponse::~OAIGuildInviteResponse() {}

void OAIGuildInviteResponse::initializeModel() {

    m_code_isSet = false;
    m_code_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_inviter_isSet = false;
    m_inviter_isValid = false;

    m_max_age_isSet = false;
    m_max_age_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_expires_at_isSet = false;
    m_expires_at_isValid = false;

    m_is_contact_isSet = false;
    m_is_contact_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_guild_isSet = false;
    m_guild_isValid = false;

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_channel_isSet = false;
    m_channel_isValid = false;

    m_target_type_isSet = false;
    m_target_type_isValid = false;

    m_target_user_isSet = false;
    m_target_user_isValid = false;

    m_target_application_isSet = false;
    m_target_application_isValid = false;

    m_guild_scheduled_event_isSet = false;
    m_guild_scheduled_event_isValid = false;

    m_uses_isSet = false;
    m_uses_isValid = false;

    m_max_uses_isSet = false;
    m_max_uses_isValid = false;

    m_temporary_isSet = false;
    m_temporary_isValid = false;

    m_approximate_member_count_isSet = false;
    m_approximate_member_count_isValid = false;

    m_approximate_presence_count_isSet = false;
    m_approximate_presence_count_isValid = false;

    m_is_nickname_changeable_isSet = false;
    m_is_nickname_changeable_isValid = false;
}

void OAIGuildInviteResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildInviteResponse::fromJsonObject(QJsonObject json) {

    m_code_isValid = ::dc_rest::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_inviter_isValid = ::dc_rest::fromJsonValue(m_inviter, json[QString("inviter")]);
    m_inviter_isSet = !json[QString("inviter")].isNull() && m_inviter_isValid;

    m_max_age_isValid = ::dc_rest::fromJsonValue(m_max_age, json[QString("max_age")]);
    m_max_age_isSet = !json[QString("max_age")].isNull() && m_max_age_isValid;

    m_created_at_isValid = ::dc_rest::fromJsonValue(m_created_at, json[QString("created_at")]);
    m_created_at_isSet = !json[QString("created_at")].isNull() && m_created_at_isValid;

    m_expires_at_isValid = ::dc_rest::fromJsonValue(m_expires_at, json[QString("expires_at")]);
    m_expires_at_isSet = !json[QString("expires_at")].isNull() && m_expires_at_isValid;

    m_is_contact_isValid = ::dc_rest::fromJsonValue(m_is_contact, json[QString("is_contact")]);
    m_is_contact_isSet = !json[QString("is_contact")].isNull() && m_is_contact_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_guild_isValid = ::dc_rest::fromJsonValue(m_guild, json[QString("guild")]);
    m_guild_isSet = !json[QString("guild")].isNull() && m_guild_isValid;

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_channel_isValid = ::dc_rest::fromJsonValue(m_channel, json[QString("channel")]);
    m_channel_isSet = !json[QString("channel")].isNull() && m_channel_isValid;

    m_target_type_isValid = ::dc_rest::fromJsonValue(m_target_type, json[QString("target_type")]);
    m_target_type_isSet = !json[QString("target_type")].isNull() && m_target_type_isValid;

    m_target_user_isValid = ::dc_rest::fromJsonValue(m_target_user, json[QString("target_user")]);
    m_target_user_isSet = !json[QString("target_user")].isNull() && m_target_user_isValid;

    m_target_application_isValid = ::dc_rest::fromJsonValue(m_target_application, json[QString("target_application")]);
    m_target_application_isSet = !json[QString("target_application")].isNull() && m_target_application_isValid;

    m_guild_scheduled_event_isValid = ::dc_rest::fromJsonValue(m_guild_scheduled_event, json[QString("guild_scheduled_event")]);
    m_guild_scheduled_event_isSet = !json[QString("guild_scheduled_event")].isNull() && m_guild_scheduled_event_isValid;

    m_uses_isValid = ::dc_rest::fromJsonValue(m_uses, json[QString("uses")]);
    m_uses_isSet = !json[QString("uses")].isNull() && m_uses_isValid;

    m_max_uses_isValid = ::dc_rest::fromJsonValue(m_max_uses, json[QString("max_uses")]);
    m_max_uses_isSet = !json[QString("max_uses")].isNull() && m_max_uses_isValid;

    m_temporary_isValid = ::dc_rest::fromJsonValue(m_temporary, json[QString("temporary")]);
    m_temporary_isSet = !json[QString("temporary")].isNull() && m_temporary_isValid;

    m_approximate_member_count_isValid = ::dc_rest::fromJsonValue(m_approximate_member_count, json[QString("approximate_member_count")]);
    m_approximate_member_count_isSet = !json[QString("approximate_member_count")].isNull() && m_approximate_member_count_isValid;

    m_approximate_presence_count_isValid = ::dc_rest::fromJsonValue(m_approximate_presence_count, json[QString("approximate_presence_count")]);
    m_approximate_presence_count_isSet = !json[QString("approximate_presence_count")].isNull() && m_approximate_presence_count_isValid;

    m_is_nickname_changeable_isValid = ::dc_rest::fromJsonValue(m_is_nickname_changeable, json[QString("is_nickname_changeable")]);
    m_is_nickname_changeable_isSet = !json[QString("is_nickname_changeable")].isNull() && m_is_nickname_changeable_isValid;
}

QString OAIGuildInviteResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildInviteResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_code_isSet) {
        obj.insert(QString("code"), ::dc_rest::toJsonValue(m_code));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_inviter.isSet()) {
        obj.insert(QString("inviter"), ::dc_rest::toJsonValue(m_inviter));
    }
    if (m_max_age_isSet) {
        obj.insert(QString("max_age"), ::dc_rest::toJsonValue(m_max_age));
    }
    if (m_created_at_isSet) {
        obj.insert(QString("created_at"), ::dc_rest::toJsonValue(m_created_at));
    }
    if (m_expires_at_isSet) {
        obj.insert(QString("expires_at"), ::dc_rest::toJsonValue(m_expires_at));
    }
    if (m_is_contact_isSet) {
        obj.insert(QString("is_contact"), ::dc_rest::toJsonValue(m_is_contact));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    if (m_guild.isSet()) {
        obj.insert(QString("guild"), ::dc_rest::toJsonValue(m_guild));
    }
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_channel.isSet()) {
        obj.insert(QString("channel"), ::dc_rest::toJsonValue(m_channel));
    }
    if (m_target_type_isSet) {
        obj.insert(QString("target_type"), ::dc_rest::toJsonValue(m_target_type));
    }
    if (m_target_user.isSet()) {
        obj.insert(QString("target_user"), ::dc_rest::toJsonValue(m_target_user));
    }
    if (m_target_application.isSet()) {
        obj.insert(QString("target_application"), ::dc_rest::toJsonValue(m_target_application));
    }
    if (m_guild_scheduled_event.isSet()) {
        obj.insert(QString("guild_scheduled_event"), ::dc_rest::toJsonValue(m_guild_scheduled_event));
    }
    if (m_uses_isSet) {
        obj.insert(QString("uses"), ::dc_rest::toJsonValue(m_uses));
    }
    if (m_max_uses_isSet) {
        obj.insert(QString("max_uses"), ::dc_rest::toJsonValue(m_max_uses));
    }
    if (m_temporary_isSet) {
        obj.insert(QString("temporary"), ::dc_rest::toJsonValue(m_temporary));
    }
    if (m_approximate_member_count_isSet) {
        obj.insert(QString("approximate_member_count"), ::dc_rest::toJsonValue(m_approximate_member_count));
    }
    if (m_approximate_presence_count_isSet) {
        obj.insert(QString("approximate_presence_count"), ::dc_rest::toJsonValue(m_approximate_presence_count));
    }
    if (m_is_nickname_changeable_isSet) {
        obj.insert(QString("is_nickname_changeable"), ::dc_rest::toJsonValue(m_is_nickname_changeable));
    }
    return obj;
}

QString OAIGuildInviteResponse::getCode() const {
    return m_code;
}
void OAIGuildInviteResponse::setCode(const QString &code) {
    m_code = code;
    m_code_isSet = true;
}

bool OAIGuildInviteResponse::is_code_Set() const{
    return m_code_isSet;
}

bool OAIGuildInviteResponse::is_code_Valid() const{
    return m_code_isValid;
}

qint32 OAIGuildInviteResponse::getType() const {
    return m_type;
}
void OAIGuildInviteResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIGuildInviteResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIGuildInviteResponse::is_type_Valid() const{
    return m_type_isValid;
}

OAIUserResponse OAIGuildInviteResponse::getInviter() const {
    return m_inviter;
}
void OAIGuildInviteResponse::setInviter(const OAIUserResponse &inviter) {
    m_inviter = inviter;
    m_inviter_isSet = true;
}

bool OAIGuildInviteResponse::is_inviter_Set() const{
    return m_inviter_isSet;
}

bool OAIGuildInviteResponse::is_inviter_Valid() const{
    return m_inviter_isValid;
}

qint32 OAIGuildInviteResponse::getMaxAge() const {
    return m_max_age;
}
void OAIGuildInviteResponse::setMaxAge(const qint32 &max_age) {
    m_max_age = max_age;
    m_max_age_isSet = true;
}

bool OAIGuildInviteResponse::is_max_age_Set() const{
    return m_max_age_isSet;
}

bool OAIGuildInviteResponse::is_max_age_Valid() const{
    return m_max_age_isValid;
}

QDateTime OAIGuildInviteResponse::getCreatedAt() const {
    return m_created_at;
}
void OAIGuildInviteResponse::setCreatedAt(const QDateTime &created_at) {
    m_created_at = created_at;
    m_created_at_isSet = true;
}

bool OAIGuildInviteResponse::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool OAIGuildInviteResponse::is_created_at_Valid() const{
    return m_created_at_isValid;
}

QDateTime OAIGuildInviteResponse::getExpiresAt() const {
    return m_expires_at;
}
void OAIGuildInviteResponse::setExpiresAt(const QDateTime &expires_at) {
    m_expires_at = expires_at;
    m_expires_at_isSet = true;
}

bool OAIGuildInviteResponse::is_expires_at_Set() const{
    return m_expires_at_isSet;
}

bool OAIGuildInviteResponse::is_expires_at_Valid() const{
    return m_expires_at_isValid;
}

bool OAIGuildInviteResponse::isIsContact() const {
    return m_is_contact;
}
void OAIGuildInviteResponse::setIsContact(const bool &is_contact) {
    m_is_contact = is_contact;
    m_is_contact_isSet = true;
}

bool OAIGuildInviteResponse::is_is_contact_Set() const{
    return m_is_contact_isSet;
}

bool OAIGuildInviteResponse::is_is_contact_Valid() const{
    return m_is_contact_isValid;
}

qint32 OAIGuildInviteResponse::getFlags() const {
    return m_flags;
}
void OAIGuildInviteResponse::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIGuildInviteResponse::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIGuildInviteResponse::is_flags_Valid() const{
    return m_flags_isValid;
}

OAIInviteGuildResponse OAIGuildInviteResponse::getGuild() const {
    return m_guild;
}
void OAIGuildInviteResponse::setGuild(const OAIInviteGuildResponse &guild) {
    m_guild = guild;
    m_guild_isSet = true;
}

bool OAIGuildInviteResponse::is_guild_Set() const{
    return m_guild_isSet;
}

bool OAIGuildInviteResponse::is_guild_Valid() const{
    return m_guild_isValid;
}

QString OAIGuildInviteResponse::getGuildId() const {
    return m_guild_id;
}
void OAIGuildInviteResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIGuildInviteResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIGuildInviteResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

OAIInviteChannelResponse OAIGuildInviteResponse::getChannel() const {
    return m_channel;
}
void OAIGuildInviteResponse::setChannel(const OAIInviteChannelResponse &channel) {
    m_channel = channel;
    m_channel_isSet = true;
}

bool OAIGuildInviteResponse::is_channel_Set() const{
    return m_channel_isSet;
}

bool OAIGuildInviteResponse::is_channel_Valid() const{
    return m_channel_isValid;
}

qint32 OAIGuildInviteResponse::getTargetType() const {
    return m_target_type;
}
void OAIGuildInviteResponse::setTargetType(const qint32 &target_type) {
    m_target_type = target_type;
    m_target_type_isSet = true;
}

bool OAIGuildInviteResponse::is_target_type_Set() const{
    return m_target_type_isSet;
}

bool OAIGuildInviteResponse::is_target_type_Valid() const{
    return m_target_type_isValid;
}

OAIUserResponse OAIGuildInviteResponse::getTargetUser() const {
    return m_target_user;
}
void OAIGuildInviteResponse::setTargetUser(const OAIUserResponse &target_user) {
    m_target_user = target_user;
    m_target_user_isSet = true;
}

bool OAIGuildInviteResponse::is_target_user_Set() const{
    return m_target_user_isSet;
}

bool OAIGuildInviteResponse::is_target_user_Valid() const{
    return m_target_user_isValid;
}

OAIInviteApplicationResponse OAIGuildInviteResponse::getTargetApplication() const {
    return m_target_application;
}
void OAIGuildInviteResponse::setTargetApplication(const OAIInviteApplicationResponse &target_application) {
    m_target_application = target_application;
    m_target_application_isSet = true;
}

bool OAIGuildInviteResponse::is_target_application_Set() const{
    return m_target_application_isSet;
}

bool OAIGuildInviteResponse::is_target_application_Valid() const{
    return m_target_application_isValid;
}

OAIScheduledEventResponse OAIGuildInviteResponse::getGuildScheduledEvent() const {
    return m_guild_scheduled_event;
}
void OAIGuildInviteResponse::setGuildScheduledEvent(const OAIScheduledEventResponse &guild_scheduled_event) {
    m_guild_scheduled_event = guild_scheduled_event;
    m_guild_scheduled_event_isSet = true;
}

bool OAIGuildInviteResponse::is_guild_scheduled_event_Set() const{
    return m_guild_scheduled_event_isSet;
}

bool OAIGuildInviteResponse::is_guild_scheduled_event_Valid() const{
    return m_guild_scheduled_event_isValid;
}

qint32 OAIGuildInviteResponse::getUses() const {
    return m_uses;
}
void OAIGuildInviteResponse::setUses(const qint32 &uses) {
    m_uses = uses;
    m_uses_isSet = true;
}

bool OAIGuildInviteResponse::is_uses_Set() const{
    return m_uses_isSet;
}

bool OAIGuildInviteResponse::is_uses_Valid() const{
    return m_uses_isValid;
}

qint32 OAIGuildInviteResponse::getMaxUses() const {
    return m_max_uses;
}
void OAIGuildInviteResponse::setMaxUses(const qint32 &max_uses) {
    m_max_uses = max_uses;
    m_max_uses_isSet = true;
}

bool OAIGuildInviteResponse::is_max_uses_Set() const{
    return m_max_uses_isSet;
}

bool OAIGuildInviteResponse::is_max_uses_Valid() const{
    return m_max_uses_isValid;
}

bool OAIGuildInviteResponse::isTemporary() const {
    return m_temporary;
}
void OAIGuildInviteResponse::setTemporary(const bool &temporary) {
    m_temporary = temporary;
    m_temporary_isSet = true;
}

bool OAIGuildInviteResponse::is_temporary_Set() const{
    return m_temporary_isSet;
}

bool OAIGuildInviteResponse::is_temporary_Valid() const{
    return m_temporary_isValid;
}

qint32 OAIGuildInviteResponse::getApproximateMemberCount() const {
    return m_approximate_member_count;
}
void OAIGuildInviteResponse::setApproximateMemberCount(const qint32 &approximate_member_count) {
    m_approximate_member_count = approximate_member_count;
    m_approximate_member_count_isSet = true;
}

bool OAIGuildInviteResponse::is_approximate_member_count_Set() const{
    return m_approximate_member_count_isSet;
}

bool OAIGuildInviteResponse::is_approximate_member_count_Valid() const{
    return m_approximate_member_count_isValid;
}

qint32 OAIGuildInviteResponse::getApproximatePresenceCount() const {
    return m_approximate_presence_count;
}
void OAIGuildInviteResponse::setApproximatePresenceCount(const qint32 &approximate_presence_count) {
    m_approximate_presence_count = approximate_presence_count;
    m_approximate_presence_count_isSet = true;
}

bool OAIGuildInviteResponse::is_approximate_presence_count_Set() const{
    return m_approximate_presence_count_isSet;
}

bool OAIGuildInviteResponse::is_approximate_presence_count_Valid() const{
    return m_approximate_presence_count_isValid;
}

bool OAIGuildInviteResponse::isIsNicknameChangeable() const {
    return m_is_nickname_changeable;
}
void OAIGuildInviteResponse::setIsNicknameChangeable(const bool &is_nickname_changeable) {
    m_is_nickname_changeable = is_nickname_changeable;
    m_is_nickname_changeable_isSet = true;
}

bool OAIGuildInviteResponse::is_is_nickname_changeable_Set() const{
    return m_is_nickname_changeable_isSet;
}

bool OAIGuildInviteResponse::is_is_nickname_changeable_Valid() const{
    return m_is_nickname_changeable_isValid;
}

bool OAIGuildInviteResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_inviter.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_age_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expires_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_contact_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_channel.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_target_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_target_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_target_application.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_scheduled_event.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_uses_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_uses_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_temporary_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_approximate_member_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_approximate_presence_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_nickname_changeable_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildInviteResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_code_isValid && true;
}

} // namespace dc_rest
