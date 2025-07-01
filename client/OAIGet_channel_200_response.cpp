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

#include "OAIGet_channel_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGet_channel_200_response::OAIGet_channel_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGet_channel_200_response::OAIGet_channel_200_response() {
    this->initializeModel();
}

OAIGet_channel_200_response::~OAIGet_channel_200_response() {}

void OAIGet_channel_200_response::initializeModel() {

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

    m_position_isSet = false;
    m_position_isValid = false;

    m_recipients_isSet = false;
    m_recipients_isValid = false;

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

    m_topic_isSet = false;
    m_topic_isValid = false;

    m_default_auto_archive_duration_isSet = false;
    m_default_auto_archive_duration_isValid = false;

    m_default_thread_rate_limit_per_user_isSet = false;
    m_default_thread_rate_limit_per_user_isValid = false;

    m_permission_overwrites_isSet = false;
    m_permission_overwrites_isValid = false;

    m_nsfw_isSet = false;
    m_nsfw_isValid = false;

    m_available_tags_isSet = false;
    m_available_tags_isValid = false;

    m_default_reaction_emoji_isSet = false;
    m_default_reaction_emoji_isValid = false;

    m_default_sort_order_isSet = false;
    m_default_sort_order_isValid = false;

    m_default_forum_layout_isSet = false;
    m_default_forum_layout_isValid = false;

    m_default_tag_setting_isSet = false;
    m_default_tag_setting_isValid = false;

    m_hd_streaming_until_isSet = false;
    m_hd_streaming_until_isValid = false;

    m_hd_streaming_buyer_id_isSet = false;
    m_hd_streaming_buyer_id_isValid = false;

    m_icon_isSet = false;
    m_icon_isValid = false;

    m_managed_isSet = false;
    m_managed_isValid = false;

    m_application_id_isSet = false;
    m_application_id_isValid = false;

    m_thread_metadata_isSet = false;
    m_thread_metadata_isValid = false;

    m_applied_tags_isSet = false;
    m_applied_tags_isValid = false;

    m_member_isSet = false;
    m_member_isValid = false;
}

void OAIGet_channel_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGet_channel_200_response::fromJsonObject(QJsonObject json) {

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

    m_position_isValid = ::dc_rest::fromJsonValue(m_position, json[QString("position")]);
    m_position_isSet = !json[QString("position")].isNull() && m_position_isValid;

    m_recipients_isValid = ::dc_rest::fromJsonValue(m_recipients, json[QString("recipients")]);
    m_recipients_isSet = !json[QString("recipients")].isNull() && m_recipients_isValid;

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

    m_topic_isValid = ::dc_rest::fromJsonValue(m_topic, json[QString("topic")]);
    m_topic_isSet = !json[QString("topic")].isNull() && m_topic_isValid;

    m_default_auto_archive_duration_isValid = ::dc_rest::fromJsonValue(m_default_auto_archive_duration, json[QString("default_auto_archive_duration")]);
    m_default_auto_archive_duration_isSet = !json[QString("default_auto_archive_duration")].isNull() && m_default_auto_archive_duration_isValid;

    m_default_thread_rate_limit_per_user_isValid = ::dc_rest::fromJsonValue(m_default_thread_rate_limit_per_user, json[QString("default_thread_rate_limit_per_user")]);
    m_default_thread_rate_limit_per_user_isSet = !json[QString("default_thread_rate_limit_per_user")].isNull() && m_default_thread_rate_limit_per_user_isValid;

    m_permission_overwrites_isValid = ::dc_rest::fromJsonValue(m_permission_overwrites, json[QString("permission_overwrites")]);
    m_permission_overwrites_isSet = !json[QString("permission_overwrites")].isNull() && m_permission_overwrites_isValid;

    m_nsfw_isValid = ::dc_rest::fromJsonValue(m_nsfw, json[QString("nsfw")]);
    m_nsfw_isSet = !json[QString("nsfw")].isNull() && m_nsfw_isValid;

    m_available_tags_isValid = ::dc_rest::fromJsonValue(m_available_tags, json[QString("available_tags")]);
    m_available_tags_isSet = !json[QString("available_tags")].isNull() && m_available_tags_isValid;

    m_default_reaction_emoji_isValid = ::dc_rest::fromJsonValue(m_default_reaction_emoji, json[QString("default_reaction_emoji")]);
    m_default_reaction_emoji_isSet = !json[QString("default_reaction_emoji")].isNull() && m_default_reaction_emoji_isValid;

    m_default_sort_order_isValid = ::dc_rest::fromJsonValue(m_default_sort_order, json[QString("default_sort_order")]);
    m_default_sort_order_isSet = !json[QString("default_sort_order")].isNull() && m_default_sort_order_isValid;

    m_default_forum_layout_isValid = ::dc_rest::fromJsonValue(m_default_forum_layout, json[QString("default_forum_layout")]);
    m_default_forum_layout_isSet = !json[QString("default_forum_layout")].isNull() && m_default_forum_layout_isValid;

    m_default_tag_setting_isValid = ::dc_rest::fromJsonValue(m_default_tag_setting, json[QString("default_tag_setting")]);
    m_default_tag_setting_isSet = !json[QString("default_tag_setting")].isNull() && m_default_tag_setting_isValid;

    m_hd_streaming_until_isValid = ::dc_rest::fromJsonValue(m_hd_streaming_until, json[QString("hd_streaming_until")]);
    m_hd_streaming_until_isSet = !json[QString("hd_streaming_until")].isNull() && m_hd_streaming_until_isValid;

    m_hd_streaming_buyer_id_isValid = ::dc_rest::fromJsonValue(m_hd_streaming_buyer_id, json[QString("hd_streaming_buyer_id")]);
    m_hd_streaming_buyer_id_isSet = !json[QString("hd_streaming_buyer_id")].isNull() && m_hd_streaming_buyer_id_isValid;

    m_icon_isValid = ::dc_rest::fromJsonValue(m_icon, json[QString("icon")]);
    m_icon_isSet = !json[QString("icon")].isNull() && m_icon_isValid;

    m_managed_isValid = ::dc_rest::fromJsonValue(m_managed, json[QString("managed")]);
    m_managed_isSet = !json[QString("managed")].isNull() && m_managed_isValid;

    m_application_id_isValid = ::dc_rest::fromJsonValue(m_application_id, json[QString("application_id")]);
    m_application_id_isSet = !json[QString("application_id")].isNull() && m_application_id_isValid;

    m_thread_metadata_isValid = ::dc_rest::fromJsonValue(m_thread_metadata, json[QString("thread_metadata")]);
    m_thread_metadata_isSet = !json[QString("thread_metadata")].isNull() && m_thread_metadata_isValid;

    m_applied_tags_isValid = ::dc_rest::fromJsonValue(m_applied_tags, json[QString("applied_tags")]);
    m_applied_tags_isSet = !json[QString("applied_tags")].isNull() && m_applied_tags_isValid;

    m_member_isValid = ::dc_rest::fromJsonValue(m_member, json[QString("member")]);
    m_member_isSet = !json[QString("member")].isNull() && m_member_isValid;
}

QString OAIGet_channel_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGet_channel_200_response::asJsonObject() const {
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
    if (m_position_isSet) {
        obj.insert(QString("position"), ::dc_rest::toJsonValue(m_position));
    }
    if (m_recipients.size() > 0) {
        obj.insert(QString("recipients"), ::dc_rest::toJsonValue(m_recipients));
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
    if (m_topic_isSet) {
        obj.insert(QString("topic"), ::dc_rest::toJsonValue(m_topic));
    }
    if (m_default_auto_archive_duration_isSet) {
        obj.insert(QString("default_auto_archive_duration"), ::dc_rest::toJsonValue(m_default_auto_archive_duration));
    }
    if (m_default_thread_rate_limit_per_user_isSet) {
        obj.insert(QString("default_thread_rate_limit_per_user"), ::dc_rest::toJsonValue(m_default_thread_rate_limit_per_user));
    }
    if (m_permission_overwrites.size() > 0) {
        obj.insert(QString("permission_overwrites"), ::dc_rest::toJsonValue(m_permission_overwrites));
    }
    if (m_nsfw_isSet) {
        obj.insert(QString("nsfw"), ::dc_rest::toJsonValue(m_nsfw));
    }
    if (m_available_tags.size() > 0) {
        obj.insert(QString("available_tags"), ::dc_rest::toJsonValue(m_available_tags));
    }
    if (m_default_reaction_emoji.isSet()) {
        obj.insert(QString("default_reaction_emoji"), ::dc_rest::toJsonValue(m_default_reaction_emoji));
    }
    if (m_default_sort_order_isSet) {
        obj.insert(QString("default_sort_order"), ::dc_rest::toJsonValue(m_default_sort_order));
    }
    if (m_default_forum_layout_isSet) {
        obj.insert(QString("default_forum_layout"), ::dc_rest::toJsonValue(m_default_forum_layout));
    }
    if (m_default_tag_setting_isSet) {
        obj.insert(QString("default_tag_setting"), ::dc_rest::toJsonValue(m_default_tag_setting));
    }
    if (m_hd_streaming_until_isSet) {
        obj.insert(QString("hd_streaming_until"), ::dc_rest::toJsonValue(m_hd_streaming_until));
    }
    if (m_hd_streaming_buyer_id_isSet) {
        obj.insert(QString("hd_streaming_buyer_id"), ::dc_rest::toJsonValue(m_hd_streaming_buyer_id));
    }
    if (m_icon_isSet) {
        obj.insert(QString("icon"), ::dc_rest::toJsonValue(m_icon));
    }
    if (m_managed_isSet) {
        obj.insert(QString("managed"), ::dc_rest::toJsonValue(m_managed));
    }
    if (m_application_id_isSet) {
        obj.insert(QString("application_id"), ::dc_rest::toJsonValue(m_application_id));
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

QString OAIGet_channel_200_response::getId() const {
    return m_id;
}
void OAIGet_channel_200_response::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIGet_channel_200_response::is_id_Set() const{
    return m_id_isSet;
}

bool OAIGet_channel_200_response::is_id_Valid() const{
    return m_id_isValid;
}

qint32 OAIGet_channel_200_response::getType() const {
    return m_type;
}
void OAIGet_channel_200_response::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIGet_channel_200_response::is_type_Set() const{
    return m_type_isSet;
}

bool OAIGet_channel_200_response::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIGet_channel_200_response::getFlags() const {
    return m_flags;
}
void OAIGet_channel_200_response::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIGet_channel_200_response::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIGet_channel_200_response::is_flags_Valid() const{
    return m_flags_isValid;
}

QString OAIGet_channel_200_response::getGuildId() const {
    return m_guild_id;
}
void OAIGet_channel_200_response::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIGet_channel_200_response::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIGet_channel_200_response::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

QString OAIGet_channel_200_response::getName() const {
    return m_name;
}
void OAIGet_channel_200_response::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIGet_channel_200_response::is_name_Set() const{
    return m_name_isSet;
}

bool OAIGet_channel_200_response::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIGet_channel_200_response::getPosition() const {
    return m_position;
}
void OAIGet_channel_200_response::setPosition(const qint32 &position) {
    m_position = position;
    m_position_isSet = true;
}

bool OAIGet_channel_200_response::is_position_Set() const{
    return m_position_isSet;
}

bool OAIGet_channel_200_response::is_position_Valid() const{
    return m_position_isValid;
}

QList<OAIUserResponse> OAIGet_channel_200_response::getRecipients() const {
    return m_recipients;
}
void OAIGet_channel_200_response::setRecipients(const QList<OAIUserResponse> &recipients) {
    m_recipients = recipients;
    m_recipients_isSet = true;
}

bool OAIGet_channel_200_response::is_recipients_Set() const{
    return m_recipients_isSet;
}

bool OAIGet_channel_200_response::is_recipients_Valid() const{
    return m_recipients_isValid;
}

QString OAIGet_channel_200_response::getOwnerId() const {
    return m_owner_id;
}
void OAIGet_channel_200_response::setOwnerId(const QString &owner_id) {
    m_owner_id = owner_id;
    m_owner_id_isSet = true;
}

bool OAIGet_channel_200_response::is_owner_id_Set() const{
    return m_owner_id_isSet;
}

bool OAIGet_channel_200_response::is_owner_id_Valid() const{
    return m_owner_id_isValid;
}

qint32 OAIGet_channel_200_response::getMessageCount() const {
    return m_message_count;
}
void OAIGet_channel_200_response::setMessageCount(const qint32 &message_count) {
    m_message_count = message_count;
    m_message_count_isSet = true;
}

bool OAIGet_channel_200_response::is_message_count_Set() const{
    return m_message_count_isSet;
}

bool OAIGet_channel_200_response::is_message_count_Valid() const{
    return m_message_count_isValid;
}

qint32 OAIGet_channel_200_response::getMemberCount() const {
    return m_member_count;
}
void OAIGet_channel_200_response::setMemberCount(const qint32 &member_count) {
    m_member_count = member_count;
    m_member_count_isSet = true;
}

bool OAIGet_channel_200_response::is_member_count_Set() const{
    return m_member_count_isSet;
}

bool OAIGet_channel_200_response::is_member_count_Valid() const{
    return m_member_count_isValid;
}

qint32 OAIGet_channel_200_response::getTotalMessageSent() const {
    return m_total_message_sent;
}
void OAIGet_channel_200_response::setTotalMessageSent(const qint32 &total_message_sent) {
    m_total_message_sent = total_message_sent;
    m_total_message_sent_isSet = true;
}

bool OAIGet_channel_200_response::is_total_message_sent_Set() const{
    return m_total_message_sent_isSet;
}

bool OAIGet_channel_200_response::is_total_message_sent_Valid() const{
    return m_total_message_sent_isValid;
}

QString OAIGet_channel_200_response::getLastMessageId() const {
    return m_last_message_id;
}
void OAIGet_channel_200_response::setLastMessageId(const QString &last_message_id) {
    m_last_message_id = last_message_id;
    m_last_message_id_isSet = true;
}

bool OAIGet_channel_200_response::is_last_message_id_Set() const{
    return m_last_message_id_isSet;
}

bool OAIGet_channel_200_response::is_last_message_id_Valid() const{
    return m_last_message_id_isValid;
}

QDateTime OAIGet_channel_200_response::getLastPinTimestamp() const {
    return m_last_pin_timestamp;
}
void OAIGet_channel_200_response::setLastPinTimestamp(const QDateTime &last_pin_timestamp) {
    m_last_pin_timestamp = last_pin_timestamp;
    m_last_pin_timestamp_isSet = true;
}

bool OAIGet_channel_200_response::is_last_pin_timestamp_Set() const{
    return m_last_pin_timestamp_isSet;
}

bool OAIGet_channel_200_response::is_last_pin_timestamp_Valid() const{
    return m_last_pin_timestamp_isValid;
}

QString OAIGet_channel_200_response::getParentId() const {
    return m_parent_id;
}
void OAIGet_channel_200_response::setParentId(const QString &parent_id) {
    m_parent_id = parent_id;
    m_parent_id_isSet = true;
}

bool OAIGet_channel_200_response::is_parent_id_Set() const{
    return m_parent_id_isSet;
}

bool OAIGet_channel_200_response::is_parent_id_Valid() const{
    return m_parent_id_isValid;
}

qint32 OAIGet_channel_200_response::getRateLimitPerUser() const {
    return m_rate_limit_per_user;
}
void OAIGet_channel_200_response::setRateLimitPerUser(const qint32 &rate_limit_per_user) {
    m_rate_limit_per_user = rate_limit_per_user;
    m_rate_limit_per_user_isSet = true;
}

bool OAIGet_channel_200_response::is_rate_limit_per_user_Set() const{
    return m_rate_limit_per_user_isSet;
}

bool OAIGet_channel_200_response::is_rate_limit_per_user_Valid() const{
    return m_rate_limit_per_user_isValid;
}

qint32 OAIGet_channel_200_response::getBitrate() const {
    return m_bitrate;
}
void OAIGet_channel_200_response::setBitrate(const qint32 &bitrate) {
    m_bitrate = bitrate;
    m_bitrate_isSet = true;
}

bool OAIGet_channel_200_response::is_bitrate_Set() const{
    return m_bitrate_isSet;
}

bool OAIGet_channel_200_response::is_bitrate_Valid() const{
    return m_bitrate_isValid;
}

qint32 OAIGet_channel_200_response::getUserLimit() const {
    return m_user_limit;
}
void OAIGet_channel_200_response::setUserLimit(const qint32 &user_limit) {
    m_user_limit = user_limit;
    m_user_limit_isSet = true;
}

bool OAIGet_channel_200_response::is_user_limit_Set() const{
    return m_user_limit_isSet;
}

bool OAIGet_channel_200_response::is_user_limit_Valid() const{
    return m_user_limit_isValid;
}

QString OAIGet_channel_200_response::getRtcRegion() const {
    return m_rtc_region;
}
void OAIGet_channel_200_response::setRtcRegion(const QString &rtc_region) {
    m_rtc_region = rtc_region;
    m_rtc_region_isSet = true;
}

bool OAIGet_channel_200_response::is_rtc_region_Set() const{
    return m_rtc_region_isSet;
}

bool OAIGet_channel_200_response::is_rtc_region_Valid() const{
    return m_rtc_region_isValid;
}

qint32 OAIGet_channel_200_response::getVideoQualityMode() const {
    return m_video_quality_mode;
}
void OAIGet_channel_200_response::setVideoQualityMode(const qint32 &video_quality_mode) {
    m_video_quality_mode = video_quality_mode;
    m_video_quality_mode_isSet = true;
}

bool OAIGet_channel_200_response::is_video_quality_mode_Set() const{
    return m_video_quality_mode_isSet;
}

bool OAIGet_channel_200_response::is_video_quality_mode_Valid() const{
    return m_video_quality_mode_isValid;
}

QString OAIGet_channel_200_response::getPermissions() const {
    return m_permissions;
}
void OAIGet_channel_200_response::setPermissions(const QString &permissions) {
    m_permissions = permissions;
    m_permissions_isSet = true;
}

bool OAIGet_channel_200_response::is_permissions_Set() const{
    return m_permissions_isSet;
}

bool OAIGet_channel_200_response::is_permissions_Valid() const{
    return m_permissions_isValid;
}

QString OAIGet_channel_200_response::getTopic() const {
    return m_topic;
}
void OAIGet_channel_200_response::setTopic(const QString &topic) {
    m_topic = topic;
    m_topic_isSet = true;
}

bool OAIGet_channel_200_response::is_topic_Set() const{
    return m_topic_isSet;
}

bool OAIGet_channel_200_response::is_topic_Valid() const{
    return m_topic_isValid;
}

qint32 OAIGet_channel_200_response::getDefaultAutoArchiveDuration() const {
    return m_default_auto_archive_duration;
}
void OAIGet_channel_200_response::setDefaultAutoArchiveDuration(const qint32 &default_auto_archive_duration) {
    m_default_auto_archive_duration = default_auto_archive_duration;
    m_default_auto_archive_duration_isSet = true;
}

bool OAIGet_channel_200_response::is_default_auto_archive_duration_Set() const{
    return m_default_auto_archive_duration_isSet;
}

bool OAIGet_channel_200_response::is_default_auto_archive_duration_Valid() const{
    return m_default_auto_archive_duration_isValid;
}

qint32 OAIGet_channel_200_response::getDefaultThreadRateLimitPerUser() const {
    return m_default_thread_rate_limit_per_user;
}
void OAIGet_channel_200_response::setDefaultThreadRateLimitPerUser(const qint32 &default_thread_rate_limit_per_user) {
    m_default_thread_rate_limit_per_user = default_thread_rate_limit_per_user;
    m_default_thread_rate_limit_per_user_isSet = true;
}

bool OAIGet_channel_200_response::is_default_thread_rate_limit_per_user_Set() const{
    return m_default_thread_rate_limit_per_user_isSet;
}

bool OAIGet_channel_200_response::is_default_thread_rate_limit_per_user_Valid() const{
    return m_default_thread_rate_limit_per_user_isValid;
}

QList<OAIChannelPermissionOverwriteResponse> OAIGet_channel_200_response::getPermissionOverwrites() const {
    return m_permission_overwrites;
}
void OAIGet_channel_200_response::setPermissionOverwrites(const QList<OAIChannelPermissionOverwriteResponse> &permission_overwrites) {
    m_permission_overwrites = permission_overwrites;
    m_permission_overwrites_isSet = true;
}

bool OAIGet_channel_200_response::is_permission_overwrites_Set() const{
    return m_permission_overwrites_isSet;
}

bool OAIGet_channel_200_response::is_permission_overwrites_Valid() const{
    return m_permission_overwrites_isValid;
}

bool OAIGet_channel_200_response::isNsfw() const {
    return m_nsfw;
}
void OAIGet_channel_200_response::setNsfw(const bool &nsfw) {
    m_nsfw = nsfw;
    m_nsfw_isSet = true;
}

bool OAIGet_channel_200_response::is_nsfw_Set() const{
    return m_nsfw_isSet;
}

bool OAIGet_channel_200_response::is_nsfw_Valid() const{
    return m_nsfw_isValid;
}

QList<OAIForumTagResponse> OAIGet_channel_200_response::getAvailableTags() const {
    return m_available_tags;
}
void OAIGet_channel_200_response::setAvailableTags(const QList<OAIForumTagResponse> &available_tags) {
    m_available_tags = available_tags;
    m_available_tags_isSet = true;
}

bool OAIGet_channel_200_response::is_available_tags_Set() const{
    return m_available_tags_isSet;
}

bool OAIGet_channel_200_response::is_available_tags_Valid() const{
    return m_available_tags_isValid;
}

OAIDefaultReactionEmojiResponse OAIGet_channel_200_response::getDefaultReactionEmoji() const {
    return m_default_reaction_emoji;
}
void OAIGet_channel_200_response::setDefaultReactionEmoji(const OAIDefaultReactionEmojiResponse &default_reaction_emoji) {
    m_default_reaction_emoji = default_reaction_emoji;
    m_default_reaction_emoji_isSet = true;
}

bool OAIGet_channel_200_response::is_default_reaction_emoji_Set() const{
    return m_default_reaction_emoji_isSet;
}

bool OAIGet_channel_200_response::is_default_reaction_emoji_Valid() const{
    return m_default_reaction_emoji_isValid;
}

qint32 OAIGet_channel_200_response::getDefaultSortOrder() const {
    return m_default_sort_order;
}
void OAIGet_channel_200_response::setDefaultSortOrder(const qint32 &default_sort_order) {
    m_default_sort_order = default_sort_order;
    m_default_sort_order_isSet = true;
}

bool OAIGet_channel_200_response::is_default_sort_order_Set() const{
    return m_default_sort_order_isSet;
}

bool OAIGet_channel_200_response::is_default_sort_order_Valid() const{
    return m_default_sort_order_isValid;
}

qint32 OAIGet_channel_200_response::getDefaultForumLayout() const {
    return m_default_forum_layout;
}
void OAIGet_channel_200_response::setDefaultForumLayout(const qint32 &default_forum_layout) {
    m_default_forum_layout = default_forum_layout;
    m_default_forum_layout_isSet = true;
}

bool OAIGet_channel_200_response::is_default_forum_layout_Set() const{
    return m_default_forum_layout_isSet;
}

bool OAIGet_channel_200_response::is_default_forum_layout_Valid() const{
    return m_default_forum_layout_isValid;
}

QString OAIGet_channel_200_response::getDefaultTagSetting() const {
    return m_default_tag_setting;
}
void OAIGet_channel_200_response::setDefaultTagSetting(const QString &default_tag_setting) {
    m_default_tag_setting = default_tag_setting;
    m_default_tag_setting_isSet = true;
}

bool OAIGet_channel_200_response::is_default_tag_setting_Set() const{
    return m_default_tag_setting_isSet;
}

bool OAIGet_channel_200_response::is_default_tag_setting_Valid() const{
    return m_default_tag_setting_isValid;
}

QDateTime OAIGet_channel_200_response::getHdStreamingUntil() const {
    return m_hd_streaming_until;
}
void OAIGet_channel_200_response::setHdStreamingUntil(const QDateTime &hd_streaming_until) {
    m_hd_streaming_until = hd_streaming_until;
    m_hd_streaming_until_isSet = true;
}

bool OAIGet_channel_200_response::is_hd_streaming_until_Set() const{
    return m_hd_streaming_until_isSet;
}

bool OAIGet_channel_200_response::is_hd_streaming_until_Valid() const{
    return m_hd_streaming_until_isValid;
}

QString OAIGet_channel_200_response::getHdStreamingBuyerId() const {
    return m_hd_streaming_buyer_id;
}
void OAIGet_channel_200_response::setHdStreamingBuyerId(const QString &hd_streaming_buyer_id) {
    m_hd_streaming_buyer_id = hd_streaming_buyer_id;
    m_hd_streaming_buyer_id_isSet = true;
}

bool OAIGet_channel_200_response::is_hd_streaming_buyer_id_Set() const{
    return m_hd_streaming_buyer_id_isSet;
}

bool OAIGet_channel_200_response::is_hd_streaming_buyer_id_Valid() const{
    return m_hd_streaming_buyer_id_isValid;
}

QString OAIGet_channel_200_response::getIcon() const {
    return m_icon;
}
void OAIGet_channel_200_response::setIcon(const QString &icon) {
    m_icon = icon;
    m_icon_isSet = true;
}

bool OAIGet_channel_200_response::is_icon_Set() const{
    return m_icon_isSet;
}

bool OAIGet_channel_200_response::is_icon_Valid() const{
    return m_icon_isValid;
}

bool OAIGet_channel_200_response::isManaged() const {
    return m_managed;
}
void OAIGet_channel_200_response::setManaged(const bool &managed) {
    m_managed = managed;
    m_managed_isSet = true;
}

bool OAIGet_channel_200_response::is_managed_Set() const{
    return m_managed_isSet;
}

bool OAIGet_channel_200_response::is_managed_Valid() const{
    return m_managed_isValid;
}

QString OAIGet_channel_200_response::getApplicationId() const {
    return m_application_id;
}
void OAIGet_channel_200_response::setApplicationId(const QString &application_id) {
    m_application_id = application_id;
    m_application_id_isSet = true;
}

bool OAIGet_channel_200_response::is_application_id_Set() const{
    return m_application_id_isSet;
}

bool OAIGet_channel_200_response::is_application_id_Valid() const{
    return m_application_id_isValid;
}

OAIThreadMetadataResponse OAIGet_channel_200_response::getThreadMetadata() const {
    return m_thread_metadata;
}
void OAIGet_channel_200_response::setThreadMetadata(const OAIThreadMetadataResponse &thread_metadata) {
    m_thread_metadata = thread_metadata;
    m_thread_metadata_isSet = true;
}

bool OAIGet_channel_200_response::is_thread_metadata_Set() const{
    return m_thread_metadata_isSet;
}

bool OAIGet_channel_200_response::is_thread_metadata_Valid() const{
    return m_thread_metadata_isValid;
}

QList<QString> OAIGet_channel_200_response::getAppliedTags() const {
    return m_applied_tags;
}
void OAIGet_channel_200_response::setAppliedTags(const QList<QString> &applied_tags) {
    m_applied_tags = applied_tags;
    m_applied_tags_isSet = true;
}

bool OAIGet_channel_200_response::is_applied_tags_Set() const{
    return m_applied_tags_isSet;
}

bool OAIGet_channel_200_response::is_applied_tags_Valid() const{
    return m_applied_tags_isValid;
}

OAIThreadMemberResponse OAIGet_channel_200_response::getMember() const {
    return m_member;
}
void OAIGet_channel_200_response::setMember(const OAIThreadMemberResponse &member) {
    m_member = member;
    m_member_isSet = true;
}

bool OAIGet_channel_200_response::is_member_Set() const{
    return m_member_isSet;
}

bool OAIGet_channel_200_response::is_member_Valid() const{
    return m_member_isValid;
}

bool OAIGet_channel_200_response::isSet() const {
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

        if (m_position_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_recipients.size() > 0) {
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

        if (m_topic_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_auto_archive_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_thread_rate_limit_per_user_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_permission_overwrites.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_nsfw_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_available_tags.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_reaction_emoji.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_sort_order_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_forum_layout_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_tag_setting_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_hd_streaming_until_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_hd_streaming_buyer_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_icon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_managed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_application_id_isSet) {
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

bool OAIGet_channel_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_type_isValid && m_flags_isValid && m_guild_id_isValid && m_name_isValid && m_position_isValid && m_recipients_isValid && m_owner_id_isValid && m_message_count_isValid && m_member_count_isValid && m_total_message_sent_isValid && true;
}

} // namespace dc_rest
