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

#include "OAICreatedThreadResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAICreatedThreadResponse::OAICreatedThreadResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICreatedThreadResponse::OAICreatedThreadResponse() {
    this->initializeModel();
}

OAICreatedThreadResponse::~OAICreatedThreadResponse() {}

void OAICreatedThreadResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_owner_id_isSet = false;
    m_owner_id_isValid = false;

    m_message_count_isSet = false;
    m_message_count_isValid = false;

    m_member_count_isSet = false;
    m_member_count_isValid = false;

    m_total_message_sent_isSet = false;
    m_total_message_sent_isValid = false;

    m_last_message_id_isSet = false;
    m_last_message_id_isValid = false;

    m_last_pin_timestamp_isSet = false;
    m_last_pin_timestamp_isValid = false;

    m_parent_id_isSet = false;
    m_parent_id_isValid = false;

    m_rate_limit_per_user_isSet = false;
    m_rate_limit_per_user_isValid = false;

    m_bitrate_isSet = false;
    m_bitrate_isValid = false;

    m_user_limit_isSet = false;
    m_user_limit_isValid = false;

    m_rtc_region_isSet = false;
    m_rtc_region_isValid = false;

    m_video_quality_mode_isSet = false;
    m_video_quality_mode_isValid = false;

    m_permissions_isSet = false;
    m_permissions_isValid = false;

    m_thread_metadata_isSet = false;
    m_thread_metadata_isValid = false;

    m_applied_tags_isSet = false;
    m_applied_tags_isValid = false;

    m_member_isSet = false;
    m_member_isValid = false;
}

void OAICreatedThreadResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICreatedThreadResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_owner_id_isValid = ::dc_rest::fromJsonValue(m_owner_id, json[QString("owner_id")]);
    m_owner_id_isSet = !json[QString("owner_id")].isNull() && m_owner_id_isValid;

    m_message_count_isValid = ::dc_rest::fromJsonValue(m_message_count, json[QString("message_count")]);
    m_message_count_isSet = !json[QString("message_count")].isNull() && m_message_count_isValid;

    m_member_count_isValid = ::dc_rest::fromJsonValue(m_member_count, json[QString("member_count")]);
    m_member_count_isSet = !json[QString("member_count")].isNull() && m_member_count_isValid;

    m_total_message_sent_isValid = ::dc_rest::fromJsonValue(m_total_message_sent, json[QString("total_message_sent")]);
    m_total_message_sent_isSet = !json[QString("total_message_sent")].isNull() && m_total_message_sent_isValid;

    m_last_message_id_isValid = ::dc_rest::fromJsonValue(m_last_message_id, json[QString("last_message_id")]);
    m_last_message_id_isSet = !json[QString("last_message_id")].isNull() && m_last_message_id_isValid;

    m_last_pin_timestamp_isValid = ::dc_rest::fromJsonValue(m_last_pin_timestamp, json[QString("last_pin_timestamp")]);
    m_last_pin_timestamp_isSet = !json[QString("last_pin_timestamp")].isNull() && m_last_pin_timestamp_isValid;

    m_parent_id_isValid = ::dc_rest::fromJsonValue(m_parent_id, json[QString("parent_id")]);
    m_parent_id_isSet = !json[QString("parent_id")].isNull() && m_parent_id_isValid;

    m_rate_limit_per_user_isValid = ::dc_rest::fromJsonValue(m_rate_limit_per_user, json[QString("rate_limit_per_user")]);
    m_rate_limit_per_user_isSet = !json[QString("rate_limit_per_user")].isNull() && m_rate_limit_per_user_isValid;

    m_bitrate_isValid = ::dc_rest::fromJsonValue(m_bitrate, json[QString("bitrate")]);
    m_bitrate_isSet = !json[QString("bitrate")].isNull() && m_bitrate_isValid;

    m_user_limit_isValid = ::dc_rest::fromJsonValue(m_user_limit, json[QString("user_limit")]);
    m_user_limit_isSet = !json[QString("user_limit")].isNull() && m_user_limit_isValid;

    m_rtc_region_isValid = ::dc_rest::fromJsonValue(m_rtc_region, json[QString("rtc_region")]);
    m_rtc_region_isSet = !json[QString("rtc_region")].isNull() && m_rtc_region_isValid;

    m_video_quality_mode_isValid = ::dc_rest::fromJsonValue(m_video_quality_mode, json[QString("video_quality_mode")]);
    m_video_quality_mode_isSet = !json[QString("video_quality_mode")].isNull() && m_video_quality_mode_isValid;

    m_permissions_isValid = ::dc_rest::fromJsonValue(m_permissions, json[QString("permissions")]);
    m_permissions_isSet = !json[QString("permissions")].isNull() && m_permissions_isValid;

    m_thread_metadata_isValid = ::dc_rest::fromJsonValue(m_thread_metadata, json[QString("thread_metadata")]);
    m_thread_metadata_isSet = !json[QString("thread_metadata")].isNull() && m_thread_metadata_isValid;

    m_applied_tags_isValid = ::dc_rest::fromJsonValue(m_applied_tags, json[QString("applied_tags")]);
    m_applied_tags_isSet = !json[QString("applied_tags")].isNull() && m_applied_tags_isValid;

    m_member_isValid = ::dc_rest::fromJsonValue(m_member, json[QString("member")]);
    m_member_isSet = !json[QString("member")].isNull() && m_member_isValid;
}

QString OAICreatedThreadResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICreatedThreadResponse::asJsonObject() const {
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
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_owner_id_isSet) {
        obj.insert(QString("owner_id"), ::dc_rest::toJsonValue(m_owner_id));
    }
    if (m_message_count_isSet) {
        obj.insert(QString("message_count"), ::dc_rest::toJsonValue(m_message_count));
    }
    if (m_member_count_isSet) {
        obj.insert(QString("member_count"), ::dc_rest::toJsonValue(m_member_count));
    }
    if (m_total_message_sent_isSet) {
        obj.insert(QString("total_message_sent"), ::dc_rest::toJsonValue(m_total_message_sent));
    }
    if (m_last_message_id_isSet) {
        obj.insert(QString("last_message_id"), ::dc_rest::toJsonValue(m_last_message_id));
    }
    if (m_last_pin_timestamp_isSet) {
        obj.insert(QString("last_pin_timestamp"), ::dc_rest::toJsonValue(m_last_pin_timestamp));
    }
    if (m_parent_id_isSet) {
        obj.insert(QString("parent_id"), ::dc_rest::toJsonValue(m_parent_id));
    }
    if (m_rate_limit_per_user_isSet) {
        obj.insert(QString("rate_limit_per_user"), ::dc_rest::toJsonValue(m_rate_limit_per_user));
    }
    if (m_bitrate_isSet) {
        obj.insert(QString("bitrate"), ::dc_rest::toJsonValue(m_bitrate));
    }
    if (m_user_limit_isSet) {
        obj.insert(QString("user_limit"), ::dc_rest::toJsonValue(m_user_limit));
    }
    if (m_rtc_region_isSet) {
        obj.insert(QString("rtc_region"), ::dc_rest::toJsonValue(m_rtc_region));
    }
    if (m_video_quality_mode_isSet) {
        obj.insert(QString("video_quality_mode"), ::dc_rest::toJsonValue(m_video_quality_mode));
    }
    if (m_permissions_isSet) {
        obj.insert(QString("permissions"), ::dc_rest::toJsonValue(m_permissions));
    }
    if (m_thread_metadata.isSet()) {
        obj.insert(QString("thread_metadata"), ::dc_rest::toJsonValue(m_thread_metadata));
    }
    if (m_applied_tags.size() > 0) {
        obj.insert(QString("applied_tags"), ::dc_rest::toJsonValue(m_applied_tags));
    }
    if (m_member.isSet()) {
        obj.insert(QString("member"), ::dc_rest::toJsonValue(m_member));
    }
    return obj;
}

QString OAICreatedThreadResponse::getId() const {
    return m_id;
}
void OAICreatedThreadResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAICreatedThreadResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAICreatedThreadResponse::is_id_Valid() const{
    return m_id_isValid;
}

qint32 OAICreatedThreadResponse::getType() const {
    return m_type;
}
void OAICreatedThreadResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAICreatedThreadResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAICreatedThreadResponse::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAICreatedThreadResponse::getFlags() const {
    return m_flags;
}
void OAICreatedThreadResponse::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAICreatedThreadResponse::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAICreatedThreadResponse::is_flags_Valid() const{
    return m_flags_isValid;
}

QString OAICreatedThreadResponse::getGuildId() const {
    return m_guild_id;
}
void OAICreatedThreadResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAICreatedThreadResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAICreatedThreadResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

QString OAICreatedThreadResponse::getName() const {
    return m_name;
}
void OAICreatedThreadResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAICreatedThreadResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAICreatedThreadResponse::is_name_Valid() const{
    return m_name_isValid;
}

QString OAICreatedThreadResponse::getOwnerId() const {
    return m_owner_id;
}
void OAICreatedThreadResponse::setOwnerId(const QString &owner_id) {
    m_owner_id = owner_id;
    m_owner_id_isSet = true;
}

bool OAICreatedThreadResponse::is_owner_id_Set() const{
    return m_owner_id_isSet;
}

bool OAICreatedThreadResponse::is_owner_id_Valid() const{
    return m_owner_id_isValid;
}

qint32 OAICreatedThreadResponse::getMessageCount() const {
    return m_message_count;
}
void OAICreatedThreadResponse::setMessageCount(const qint32 &message_count) {
    m_message_count = message_count;
    m_message_count_isSet = true;
}

bool OAICreatedThreadResponse::is_message_count_Set() const{
    return m_message_count_isSet;
}

bool OAICreatedThreadResponse::is_message_count_Valid() const{
    return m_message_count_isValid;
}

qint32 OAICreatedThreadResponse::getMemberCount() const {
    return m_member_count;
}
void OAICreatedThreadResponse::setMemberCount(const qint32 &member_count) {
    m_member_count = member_count;
    m_member_count_isSet = true;
}

bool OAICreatedThreadResponse::is_member_count_Set() const{
    return m_member_count_isSet;
}

bool OAICreatedThreadResponse::is_member_count_Valid() const{
    return m_member_count_isValid;
}

qint32 OAICreatedThreadResponse::getTotalMessageSent() const {
    return m_total_message_sent;
}
void OAICreatedThreadResponse::setTotalMessageSent(const qint32 &total_message_sent) {
    m_total_message_sent = total_message_sent;
    m_total_message_sent_isSet = true;
}

bool OAICreatedThreadResponse::is_total_message_sent_Set() const{
    return m_total_message_sent_isSet;
}

bool OAICreatedThreadResponse::is_total_message_sent_Valid() const{
    return m_total_message_sent_isValid;
}

QString OAICreatedThreadResponse::getLastMessageId() const {
    return m_last_message_id;
}
void OAICreatedThreadResponse::setLastMessageId(const QString &last_message_id) {
    m_last_message_id = last_message_id;
    m_last_message_id_isSet = true;
}

bool OAICreatedThreadResponse::is_last_message_id_Set() const{
    return m_last_message_id_isSet;
}

bool OAICreatedThreadResponse::is_last_message_id_Valid() const{
    return m_last_message_id_isValid;
}

QDateTime OAICreatedThreadResponse::getLastPinTimestamp() const {
    return m_last_pin_timestamp;
}
void OAICreatedThreadResponse::setLastPinTimestamp(const QDateTime &last_pin_timestamp) {
    m_last_pin_timestamp = last_pin_timestamp;
    m_last_pin_timestamp_isSet = true;
}

bool OAICreatedThreadResponse::is_last_pin_timestamp_Set() const{
    return m_last_pin_timestamp_isSet;
}

bool OAICreatedThreadResponse::is_last_pin_timestamp_Valid() const{
    return m_last_pin_timestamp_isValid;
}

QString OAICreatedThreadResponse::getParentId() const {
    return m_parent_id;
}
void OAICreatedThreadResponse::setParentId(const QString &parent_id) {
    m_parent_id = parent_id;
    m_parent_id_isSet = true;
}

bool OAICreatedThreadResponse::is_parent_id_Set() const{
    return m_parent_id_isSet;
}

bool OAICreatedThreadResponse::is_parent_id_Valid() const{
    return m_parent_id_isValid;
}

qint32 OAICreatedThreadResponse::getRateLimitPerUser() const {
    return m_rate_limit_per_user;
}
void OAICreatedThreadResponse::setRateLimitPerUser(const qint32 &rate_limit_per_user) {
    m_rate_limit_per_user = rate_limit_per_user;
    m_rate_limit_per_user_isSet = true;
}

bool OAICreatedThreadResponse::is_rate_limit_per_user_Set() const{
    return m_rate_limit_per_user_isSet;
}

bool OAICreatedThreadResponse::is_rate_limit_per_user_Valid() const{
    return m_rate_limit_per_user_isValid;
}

qint32 OAICreatedThreadResponse::getBitrate() const {
    return m_bitrate;
}
void OAICreatedThreadResponse::setBitrate(const qint32 &bitrate) {
    m_bitrate = bitrate;
    m_bitrate_isSet = true;
}

bool OAICreatedThreadResponse::is_bitrate_Set() const{
    return m_bitrate_isSet;
}

bool OAICreatedThreadResponse::is_bitrate_Valid() const{
    return m_bitrate_isValid;
}

qint32 OAICreatedThreadResponse::getUserLimit() const {
    return m_user_limit;
}
void OAICreatedThreadResponse::setUserLimit(const qint32 &user_limit) {
    m_user_limit = user_limit;
    m_user_limit_isSet = true;
}

bool OAICreatedThreadResponse::is_user_limit_Set() const{
    return m_user_limit_isSet;
}

bool OAICreatedThreadResponse::is_user_limit_Valid() const{
    return m_user_limit_isValid;
}

QString OAICreatedThreadResponse::getRtcRegion() const {
    return m_rtc_region;
}
void OAICreatedThreadResponse::setRtcRegion(const QString &rtc_region) {
    m_rtc_region = rtc_region;
    m_rtc_region_isSet = true;
}

bool OAICreatedThreadResponse::is_rtc_region_Set() const{
    return m_rtc_region_isSet;
}

bool OAICreatedThreadResponse::is_rtc_region_Valid() const{
    return m_rtc_region_isValid;
}

qint32 OAICreatedThreadResponse::getVideoQualityMode() const {
    return m_video_quality_mode;
}
void OAICreatedThreadResponse::setVideoQualityMode(const qint32 &video_quality_mode) {
    m_video_quality_mode = video_quality_mode;
    m_video_quality_mode_isSet = true;
}

bool OAICreatedThreadResponse::is_video_quality_mode_Set() const{
    return m_video_quality_mode_isSet;
}

bool OAICreatedThreadResponse::is_video_quality_mode_Valid() const{
    return m_video_quality_mode_isValid;
}

QString OAICreatedThreadResponse::getPermissions() const {
    return m_permissions;
}
void OAICreatedThreadResponse::setPermissions(const QString &permissions) {
    m_permissions = permissions;
    m_permissions_isSet = true;
}

bool OAICreatedThreadResponse::is_permissions_Set() const{
    return m_permissions_isSet;
}

bool OAICreatedThreadResponse::is_permissions_Valid() const{
    return m_permissions_isValid;
}

OAIThreadMetadataResponse OAICreatedThreadResponse::getThreadMetadata() const {
    return m_thread_metadata;
}
void OAICreatedThreadResponse::setThreadMetadata(const OAIThreadMetadataResponse &thread_metadata) {
    m_thread_metadata = thread_metadata;
    m_thread_metadata_isSet = true;
}

bool OAICreatedThreadResponse::is_thread_metadata_Set() const{
    return m_thread_metadata_isSet;
}

bool OAICreatedThreadResponse::is_thread_metadata_Valid() const{
    return m_thread_metadata_isValid;
}

QList<QString> OAICreatedThreadResponse::getAppliedTags() const {
    return m_applied_tags;
}
void OAICreatedThreadResponse::setAppliedTags(const QList<QString> &applied_tags) {
    m_applied_tags = applied_tags;
    m_applied_tags_isSet = true;
}

bool OAICreatedThreadResponse::is_applied_tags_Set() const{
    return m_applied_tags_isSet;
}

bool OAICreatedThreadResponse::is_applied_tags_Valid() const{
    return m_applied_tags_isValid;
}

OAIThreadMemberResponse OAICreatedThreadResponse::getMember() const {
    return m_member;
}
void OAICreatedThreadResponse::setMember(const OAIThreadMemberResponse &member) {
    m_member = member;
    m_member_isSet = true;
}

bool OAICreatedThreadResponse::is_member_Set() const{
    return m_member_isSet;
}

bool OAICreatedThreadResponse::is_member_Valid() const{
    return m_member_isValid;
}

bool OAICreatedThreadResponse::isSet() const {
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

        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_owner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_member_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_message_sent_isSet) {
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

        if (m_parent_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rate_limit_per_user_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bitrate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_limit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rtc_region_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_quality_mode_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_permissions_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thread_metadata.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_applied_tags.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_member.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICreatedThreadResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_type_isValid && m_flags_isValid && m_guild_id_isValid && m_name_isValid && m_owner_id_isValid && m_message_count_isValid && m_member_count_isValid && m_total_message_sent_isValid && true;
}

} // namespace dc_rest
